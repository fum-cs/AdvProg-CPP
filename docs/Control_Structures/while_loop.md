---
layout: default
title: While Loops
parent: Control Structures
nav_order: 3
---

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

As we noted earlier, algorithms require two important control structures: iteration and selection. Both of these are supported by Python in various forms. The programmer can choose the statement that is most useful for the given circumstance.

For repeating a block of code, C++ provides a standard `while` and `for` constructs. The `while` construct repeats a body of code as long as a condition is true. For example.

code python:
```python
counter = 1
while counter <= 5: 
    print("Hello, world")
    counter += 1  

```
code cpp:
```cpp
int counter = 1;
while (counter <= 5) {        

    cout << "Hello, world" << endl;
    counter = counter + 1;
}

Console output:
Hello, world
Hello, world
Hello, world
Hello, world
Hello, world
```
prints out the phrase “Hello, world” five times. The condition on the `while` statement is evaluated at the start of each repetition. If the condition is `true`, the body of the statement will execute.

The `while` statement is a very general purpose iterative structure that we will use in a number of different algorithms. In many cases, a compound condition will control the iteration. A fragment such as
```cpp
while ((counter <= 10) && (!done)) {
...
```
would cause the body of the statement to be executed only in the case where both parts of the condition are satisfied due to the and operator (`&&`). The value of the variable `counter` would need to be less than or equal to 10 and the value of the variable `done` would need to be `false` (`not false` is `true`) so that `true and true` results in `true`.

Here are some of the logical operators that are useful for true-false boolean statements in C++.
```cpp
and          - &&

or           - ||

not equal to - !=

not          - !

greater than - >

less than    - <

greater than
or equal to  - >=

less than
or equal to  - <=
```
These are the same as we saw in earlier chapters.
```cpp
#include <iostream>
using namespace std;

int main(){
    int counter = 0;
    while (counter <= 1) {
        cout << "Hello, world!" << endl;
    }
};
```