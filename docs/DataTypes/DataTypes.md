---
layout: default
title: C++ Data Types
parent: C++ Data Types
nav_order: 3
---

- [Using Data in C++](#using-data-in-c)
  - [Numeric Data](#numeric-data)
    - [C++ Code: Basic Arithmetic Operators](#basic-arithmetic-operators)
  - [Boolean Data](#boolean-data)
  - [Logical Operators in C++](#logical-operators-in-c)
  - [C++ Relational and Logical Operators](#c-relational-and-logical-operators)
  - [Basic Relational and Logical Operators](#basic-relational-and-logical-operators)
  - [Variable Declaration in C++](#variable-declaration-in-c)
  - [Character Data](#character-data)
- [Summary](#summary)

# Using Data in C++

C++ requires the users specify the specific data type of each variable before it is used.  
The primary C++ built-in atomic data types are:  
- integer (`int`)  
- floating point (`float`)  
- double precision floating point (`double`)  
- Boolean (`bool`)  
- character (`char`)  

There is also a special type which holds a memory location called `pointer`.  
C++ also has collection or compound data types, which will be discussed in a future chapter.  

## Numeric Data

Numeric C++ data types include `int` for integer, `float` for floating point, and `double` for double precision floating point.  

The standard arithmetic operations `+`, `-`, `*`, and `/` are used with optional parentheses to force the order of operations away from normal operator precedence.  

In Python we can use `//` to get integer division.  
In C++, we declare all data types.  
When two integers are divided in C++, the integer portion of the quotient is returned, and the fractional portion is removed.  
i.e., when two integers are divided, integer division is used.  
To get the whole quotient, declaring one of the numbers as a float will convert the entire result into floating point.  

Exponentiation in C++ is done using `pow()` from the `cmath` library, and the remainder (modulo) operator is done with `%`.  

Run the following code to see that you understand each result.  

### Basic Arithmetic Operators

```cpp
# Function that performs a variety of math operations.
def main():
    print(2+3*4)
    print((2+3)*4)
    print(2**10)
    print(6/3)
    print(7/3)
    print(7//3)
    print(7%3)
    print(3/6)
    print(3//6)
    print(3%6)
    print(2**100)

main()
```

```cpp
#include <iostream>
#include <cmath>
using namespace std;

// Function that performs various math operations
int main() {
    cout << (2+3*4) << endl;
    cout << (2+3)*4 << endl;
    cout << pow(2, 10) << endl;
    cout << float(6)/3 << endl;
    cout << float(7)/3 << endl;
    cout << 7/3 << endl; // In C++, this is integer division
    cout << 7%3 << endl;
    cout << float(3)/6 << endl;
    cout << 3/6 << endl;
    cout << 3%6 << endl;
    cout << pow(2, 100) << endl;

    return 0;
}
```

## Boolean Data

Boolean data types are named after George Boole, who was an English mathematician,  
so the word **"Boolean"** should be capitalized. However,  
the Boolean data type in C++ uses the keyword `bool`, which is not capitalized.  

The possible state values for a C++ Boolean are lowercase `true` and `false`.  
Be sure to note the difference in capitalization from Python.  
In Python, these same truth values are capitalized, while in C++, they are lowercase.  

C++ uses the standard Boolean operators, but they are represented  
differently than in Python:  
- **"and"** is given by `&&`  
- **"or"** is given by `||`  
- **"not"** is given by `!`  

Internally, `true` and `false` are actually stored as `1` and `0`, respectively.  
Hence, we see this in output as well.  

## Logical Operators in C++

### Python Code: Logical Operators
```python
# Function that demonstrates logical operators.
def main():
    print(True)
    print(False)
    print(True or False)
    print(True and False)

main()
```

### C++ Code: Logical Operators
```cpp
#include <iostream>
using namespace std;

// Function that demonstrates logical operators
int main() {
    cout << true << endl;
    cout << false << endl;
    cout << (true || false) << endl;
    cout << (true && false) << endl;
    return 0;
}
```

Boolean data objects are also used as results for comparison operators  
such as equality (`==`) and greater than (`>`).  

In addition, relational operators and logical operators can be combined together to  
form complex logical expressions.  

## C++ Relational and Logical Operators

| **Operation Name**        | **Operator** | **Explanation**                                                |
|---------------------------|-------------|-----------------------------------------------------------------|
| Less than                 | `<`         | Less than operator                                              |
| Greater than              | `>`         | Greater than operator                                           |
| Less than or equal        | `<=`        | Less than or equal to operator                                  |
| Greater than or equal     | `>=`        | Greater than or equal to operator                               |
| Equal                     | `==`        | Equality operator                                               |
| Not equal                 | `!=`        | Not equal operator                                              |
| Logical AND               | `&&`        | Both operands must be true for the result to be true            |
| Logical OR                | `||`        | One or the other operand must be true for the result to be true |
| Logical NOT               | `!`         | Negates the truth value: false becomes true, true becomes false |

## Basic Relational and Logical Operators

### Python Code:
```python
# Function that demonstrates relational operators.
def main():
    print(5 == 10)
    print(10 > 5)
    print((5 >= 1) and (5 <= 10))

main()
```

### C++ Code:
```cpp
#include <iostream>
using namespace std;

// Function that demonstrates relational operators.
int main() {
    cout << (5 == 10) << endl;
    cout << (10 > 5) << endl;
    cout << ((5 >= 1) && (5 <= 10)) << endl;

    return 0;
}
```

## Variable Declaration in C++

When a C++ variable is declared, space in memory is set aside to hold this type of value.  
A C++ variable can optionally be initialized in the declaration by using a combination of a declaration and an assignment statement.  

Consider the following session:

### C++ Code: Variable Declaration and Boolean Pitfall
```cpp
#include <iostream>
using namespace std;

// Demonstrates how to use variables in C++
// Moreover, we assign an integer to a boolean variable,
// showing the static typing of C++.
int main() {
    int theSum = 4;
    cout << theSum << endl;

    theSum = theSum + 1;
    cout << theSum << endl;

    bool theBool = true;
    cout << theBool << endl;

    theBool = 4;
    cout << theBool << endl;

    return 0;
}
```

The declaration `int theSum = 4;` creates a variable called `theSum` and initializes it to hold the data value of `4`.  
As in Python, the right-hand side of each assignment statement is evaluated, and the resulting data value is “assigned” to the variable named on the left-hand side.  
Here, the type of the variable is integer.  
Because Python is dynamically typed, if the type of the data changes in the program, so does the type of the variable.  
However, in C++, the data type cannot change.  
This is a characteristic of C++'s static typing.  
A variable can hold only one type of data throughout its lifetime.  

### Pitfall: Boolean Assignment in C++

C++ will often try to perform the assignment you requested without complaining.  
Note what happened in the code above in the final output.

### Multiple Choice Question

Why did `theBool` output a value of `1` after being set to `4`?

- **(A)** Setting `theBool` to anything other than `true` or `false` is ignored.
- **(B)** Setting `theBool` to anything > `0` will be `true` and `false` otherwise.
- **(C)** `false == 0` and `true = !false`, meaning anything that is not zero and can be converted to a Boolean is not false, thus it must be true.
- **(D)** None of the above.

**Correct Answer:** (C) ✅

**Feedback:**
- **(A)** ❌ No. Try changing the code and setting `theBool` to `0`.
- **(B)** ❌ No. Try changing the code and setting `theBool` to `-4`.
- **(C)** ✅ Correct!
- **(D)** ❌ Try again. One of the above is correct. You might try changing the code and rerunning.

## Character Data

In Python, strings can be created with single or double quotes.  
In C++, single quotes are used for the character (`char`) data type,  
and double quotes are used for the string data type.  

### Python Code: Strings and Characters
```python
# Shows direct comparison of both Strings & Characters in Python
def main():
    strvar = "b"
    charvar = 'b'

    print('b' == charvar)
    print("b" == strvar)
    print('a' == "a")

main()
```

### C++ Code: Characters and Strings
```cpp
#include <iostream>
#include <string>
using namespace std;

// Demonstrates how chars and strings cannot be directly compared.
int main() {
    string strvar = "b";
    char charvar = 'b';

    cout << ('b' == charvar) << endl;
    cout << ("b" == strvar) << endl;
    // cout << ('a' == "a") << endl; // will error!

    return 0;
}
```

<!-- [C++ Reference Card](https://www.dropbox.com/scl/fi/s09cjeo1s6xu9f56m48w7/c-refcard.pdf?rlkey=dnv1yasc97aiuut8olsp1ryik&st=wv46wuq7&dl=0) -->

```python
# _ Used in Python 3.6 and later.
n = 0
while(n<1_000_000_000):
    n+=1
print(n)
```

```cpp
// ' Used in cpp 14 and later.
#include <iostream>
#include <string>
using namespace std;

// Demonstrates how chars and strings cannot be directly compared.
int main() {
    string strvar = "b";
    char charvar = 'b';

    cout << ('b' == charvar) << endl;
    cout << ("b" == strvar) << endl;
    // cout << ('a' == "a") << endl; // will error!

    return 0;
}
```


### Performance Comparison: Speed of Python vs. C++

python
```python
import time

# Start the timer
start_time = time.time()

n = 0
while n < 1_000_000_000:
    n += 1

# Stop the timer
end_time = time.time()

# Calculate the duration
duration = end_time - start_time

# Output the result and the time taken
print(f"Final value of n: {n}") ==> Final value of n: 1/000/000/000
print(f"Time taken: {duration:.4f} seconds") ==> Time taken: 99.2185 seconds
```

cpp
```cpp
#include <iostream>
#include <chrono> // Include the chrono library for timing

using namespace std;
using namespace std::chrono; // Use the chrono namespace for convenience

int main()
{
    // Start the timer
    auto start = high_resolution_clock::now();

    int n = 0;
    while (n < 1'000'000'000)
        n++;

    // Stop the timer
    auto stop = high_resolution_clock::now();

    // Calculate the duration
    auto duration = duration_cast<milliseconds>(stop - start);

    // Output the result and the time taken
    cout << "Final value of n: " << n << endl; ==>Final value of n: 1/000/000/000
    cout << "Time taken: " << duration.count() << " milliseconds" << endl; ==>Time taken: 2334 milliseconds

    return 0;
}
```

## Summary


1. All variables must be declared before use in C++.

2. C++ has typical built-in numeric types: `int` is for integers and `float` and `double` are used for floating point depending on the number of digits desired.

3. C++ has the Boolean type `bool` that holds `true` or `false`.

4. The character data type `char` holds a single character which is encased in single quotes.

5. Pointers are a type of variable that stores a memory address. To declare a pointer, an `*` is used before the variable name that is supposed to store the location.
