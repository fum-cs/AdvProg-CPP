---
layout: default
title: For Loops
parent: Control Structures
nav_order: 4
---

# For Loops 
Even though the `while` type of construct is very useful in a wide variety of situations, another iterative structure, the `for` statement, can be used to iterate across a range of values easily. A `for` statement allows us to write a loop that is executed a specific number of times.

code python:
```python
for i in range(10):
    print(i, "hello world")

```
code cpp:
```cpp
#include <iostream> 
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        cout << i << " hello world" << endl; 
    }
    return 0; 
}

```
In the example above, the hello world statement is executed 10 times.
A common use of the for construct is to implement certain repetition over a range of values.
```cpp
#include <iostream> using namespace std;
    // squares the numebers in range 5 
    // // ex. 0*0, 1*1, 2*2 ... 
    // int main() {
    //       for (int i=0; i<5; i++) 
    //          { cout << i*i << " "; 

    // return 0;

    }
```
The code will use `cout` five times. The value of the variable `i` will start at 0 and go through the full sequence of values 0,1,2,3,4. This value is then squared and printed.

code python:
```python
for i in range(5):
    print(i * i, end=" ")  

```
code cpp:
```cpp
#include <iostream>
using namespace std;

 // squares the numebers in range 5
 // ex. 0*0, 1*1, 2*2 ...
 int main() {
     for (int i=0; i<5; i++) {
         cout << i*i << " ";
     }

     return 0;
 }
```
**example**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for iota
using namespace std;

// squares the numbers in range 5
// ex. 0*0, 1*1, 2*2 ...
int main() {
    vector<int> my_range(5);
    iota(my_range.begin(), my_range.end(), 0);
    for(auto i: my_range)
        cout << i*i << " ";

    return 0;
}
```