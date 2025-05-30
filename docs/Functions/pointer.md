---
layout: default
title: pointer
parent: Functions
nav_order: 3
---
<!-- - [Pointers](#pointers) -->
# Pointers 

A C++ **pointer** is a variable that stores a memory address and can be used to indirectly
access data stored at that memory location.

We know that variables in a computer program are used to label data with a
descriptive identifier so that the data can be accessed and used by that
computer program.

Let's look at some examples of storing an integer in Python and C++.

In Python every single thing is stored as an object.
Hence, a Python variable is actually a reference to an object that is stored in memory.
Hence, each Python variable requires two memory locations:
one to store the reference, and the other to store the variable value itself in an object.

In C++ the value of each variable is stored directly in memory without the need
for either a reference or an object. This makes access faster, but it is one of
the reasons we need to declare each variable because different types take differing
amounts of space in memory!

The following code declares a variable called *varN* that has in it a
value of 100:

```python
// Python reference for a single integer value
varN = 100
```
```cpp
// C++ variable declaration and assignment of an integer value
    int varN = 100;

```
In C++ the results of running this code will look like the diagram below:

In each case, when we want to output the value to the console, we use the variable name
to do so.

But, we can also identify the memory location of the variable by its address.
In both Python and C++, this address
may change each time the program is run. In C++, the address will always look
odd because it will be the actual memory address written in a hexadecimal code
which is a base 16 code like 0x7ffd93f25244.
In Python it is implementation dependent,
it is sometimes a hexadecimal code and sometimes just a count or another
way to reference the address.

In Python we use `id` to reference the address,
while in C++ we use the *address-of operator*, `&`.

## Memory addresses

python
```python
# Outputs the value & memory address of
# variable titled varN.
def main():
    varN = 101;
    print(varN)
    print(id(varN)) # ID function returns the memory address in Python.

main()
```
C++

```cpp
#include <iostream>
using namespace std;

// outputs the value of a variable
// as well as the memory address in C++.
int main(){
    int varN = 101;
    cout << varN << endl;
    cout << &varN << endl; //outputs the memory address of variable varN
    return 0;
}
```

In both Python and C++, variables are stored in memory locations which are dependent upon the run itself. If you repeatedly run the above code in either C++ or Python, you may see the location change.

As suggested above, in Python, it is impossible to store a variable directly. Instead, we must use a variable name and a reference to the data object. (Hence the arrow in the image.) In C++, variables store values directly, because they are faster to reference.

References are slower, but they are sometimes useful. If in C++, we want to create an analogous reference to a memory location, we must use a special data type called a `pointer`.

# Pointer Syntax

When declaring a pointer in C++ that will "point" to the memory address of some
data type, you will use the same rules of declaring variables and data types.
The key difference is that there must be an asterisk (*) between the data type and the
identifier.

```cpp
variableType *identifier; // syntax to declare a C++ pointer
int *ptrx; // example of a C++ pointer to an integer
```
White space in C++ generally does not matter, so the following pointer declarations are identical:
```
SOMETYPE *variablename; // preferable
SOMETYPE * variablename;
SOMETYPE* variablename;
```
However, the first declaration is preferable because it is clearer to the programmer that the variable is in fact a pointer because the asterisk is closer to the variable name.

## 2.5.1.1. The address-of operator, `&`

Now that we know how to declare pointers, how do we give them the address of where the value is going to be stored? One way to do this is to have a pointer refer to another variable by using the address-of operator, which is denoted by the ampersand symbol, `&`. The address-of operator `&` does exactly what it indicates, namely it returns the address.

The syntax is shown below, where `varN` stores the value, and `ptrN` stores the address of where `varN` is located:

```cpp
variableType varN;  // a variable to hold the value
variableType *ptrN = &varN;  // a variable pointing to the address of varN
```
Keep in mind that when declaring a C++ pointer, the pointer needs to reference the same type as the variable or constant to which it points.

Expanding on the example above where varN has the value of 9.
```cpp
//variable declaration for a single integer value
int varN = 9;
int *ptrN;
ptrN = &varN;
```
The results of running this C++ code will look like the diagram below.

## Accessing Values from Pointers

Once you have a C++ pointer, you use the asterisk before the pointer variable to *dereference* the pointer, which means go to the location pointed at by the pointer.

In other words, `varN` and `*ptrN` (note the asterisk in front) reference the same value in the code above.

Let's extend the example above to output the value of a variable and its address in memory:

```cpp
#include <iostream>
using namespace std;

// Demonstrates what happens when you dereference a pointer
int main() {
    int varN = 9;
    int *ptrN = &varN; // ptrN points to varN address

    cout << "varN value: " << varN << endl;
    cout << "varN location: " << ptrN << endl;
    cout << "dereference ptrN: " << *ptrN << endl;

    return 0;
}
```
## Multiple Choice: If the lines (`varN = 50;`) and (`cout << *ptrN << endl;`) were inserted into line 7-8, what would it output?

- **Answer A**: `varPntr: 9`
- **Answer B**: `varPntr: 50`
- **Answer C**: `varPntr: 150`
- **Answer D**: `0x7ffeb9ce053c`
- **Answer E**: `none of the above`

### Correct Answer: B

### Feedback:
- **A**: Not quite, the variable `varN` no longer equals 100 past line 7!
- **B**: Right!
- **C**: No, the values do not add together!
- **D**: We are dereferencing the pointer, so you would not get the address of `varN`. Try again!
- **E**: One of the above is indeed correct.

### Warning: What happens if you forget the ampersand when assigning a value to a pointer?

If you forget the ampersand (`&`) when assigning a value to a pointer, the pointer will incorrectly store the value of `varN` (such as 50 in the example) as an address, which can lead to undefined behavior. The pointer would point to some arbitrary memory location, causing the program to fail or produce unexpected results.

cpp
```cpp
#include <iostream>
using namespace std;

int main() {
    int varN = 100;
    int *ptrN = varN; // Note no ampersand,
    // ptrN now refers to memory position 100,
    // whatever happens to be there!
    // You might get an error or you might not!

    cout << "varN value: " << varN << endl;
    cout << "ptrN location: " << ptrN << endl;
    cout << "ptrN points to varN: " << endl;
    cout << "dereference ptrN: " << *ptrN << endl;

    return 0;
}
```

## This is BAD, BAD, BAD!
If your compiler does not catch that error (the one for this class may), the first `cout` instruction outputs
```
After changing *ptrN, varN now has: 50
```

which is expected because you changed where ptrN is pointing to and NOT the contents of where it is pointing.

The second `cout` instruction is a disaster because:

1. You don’t know what is stored in location 100 in memory, and
2. That location is outside of your segment (area in memory reserved for your program), so the operating system will jump in with a message about a “segmentation fault”. Although such an error message looks bad, a “seg fault” is in fact a helpful error because unlike the elusive logical errors, the reason is fairly localized.

## The null pointer


Like `None` in Python, the null pointer (`nullptr`) in C++ points to
nothing. Older editions of C++ also used `NULL` (all caps) or 0,
but we will use the keyword `nullptr` because the compiler can do
better error handling with the keyword. The null pointer is often used
in conditions and/or in logical operations.

The following example demonstrates how the null pointer works.
The variable `ptrx` initially has the address of `x` when it is declared.
On the first iteration of the loop, it is assigned the value of
`nullptr`, which evaluates to a false value; thereby ending the loop:

```cpp
#include <iostream>
using namespace std;

// Shows the use of a Null pointer to represent "nothing".
int main() {
    int x = 12345;
    int *ptrx = &x;

    while (ptrx) {
        cout << "Pointer ptrx points to " << ptrx << endl;
        ptrx = nullptr;
    }

    cout << "Pointer ptrx points to nothing!\n";
}
```
Helpful Tip: The null pointer becomes very useful when you must test the state of a pointer, such as whether the assignment to an address is valid or not.

