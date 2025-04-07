---
layout: default
title: Vectors
parent: Collection Data Types
nav_order: 3
---

**Vectors** are much more similar to Python lists than arrays are.
Vectors use a dynamically allocated array to store their elements, so
they can change size, and they have other friendly features as well.
Because they use a dynamically allocated array, they use contiguous
storage locations which means that their elements can be accessed and
traversed, and they can also be accessed randomly using indexes.
However, vectors are dynamically sized, so their size can change
automatically. A new element can be inserted into or deleted from any
part of a vector, and automatic reallocation for other existing items in
the vector will be applied. Unlike Python lists, vectors are
homogeneous, so every element in the vector must be of the same type.

Vectors are a class that is available through a library called the
Standard Template Library (STL), and one uses a `< >` notation to
indicate the data type of the elements. In order to use vectors, One
needs to include the vector library.

    #include <vector>

## Common C++ Vector Operators

| **Vector Operation**      | **Use**                     | **Explanation**                                                  |
|---------------------------|-------------|-----------------------------------------------------------------|
| Less than                 | `myvector[i]`               | access value of element at index i                                                          |
| =                         | `myvector[i]=value`         | assign value to element at index i                                                          |
| push_back                 | `myvect.push_back(item)`    | Appends item to the far end of the vector                                  |
| pop_back                  | `myvect.pop_back()`         | Deletes last item (from far end) of the vector                                               |
| insert                    | `myvect.insert(i, item)`    | Inserts an item at index i                                                                |
| erase                     | `myvect.erase(i)`           | Erases an element from index i                                                                |
| size                      | `myvect.size()`             | Returns the actual size used by elements                                                         |
| capacity                  | `myvect.capacity()`         | Returns the size of allocated storage capacity                                                 |
| reserve                   | `myvect.reserve(amount)`    | Request a change in capacity to amount                                                           |



A very common programming task is to grow a vector using the
`push_back()` method to append to the vector as we see in the next
example. Because vectors can change size, vectors typically allocate
some extra storage to accommodate for possible growth. Thus the vector
typically has an actual *capacity* greater than the storage *size*
strictly needed to contain its elements.

# Iterating through Vectors

When iterating vectors, you must first find the length of your
container. You can simply call the `.length()` function. For arrays, the
number of elements can be found by getting the size in memory of the
array by using the `sizeof()` function, and then dividing it by the size
of the first element of the array using the same `sizeof()` function.
Because all elements in C++ arrays are the same type, they take the same
amount of space and that can be used to find the number of elements the
Array contains!

```cpp
#include <iostream>
using namespace std;

int main() {
    int nums[] = {1,3,6,2,5};
    //Divide the size of the array (in bytes) by the size of a single element (in bytes)
    // to get the total number of elements in the array.
    int numsSize = sizeof(nums)/sizeof(nums[0]); // Get size of the nums array

    for (int index=0; index<numsSize; index++) {
        cout << nums[index] << endl;
    }


   // Simpler Implementation that may only work in
   // Newer versions of C++

   // for (int item:nums) {
   //     cout << item << endl;
   // }

     return 0;
}
```

An optional secondary version of the `for` loop has been commented out
of the above code. You can try running this in your version of C++ to
see if it works, but in some older versions of C++, such as C++98, it
does not.

The above loop assigns the variable `index` to be each successive value from 0 to numsSize.

:   Then, the value at that index in the array is printed to the
    console.

## Matching

```cpp

// function that uses a vector to square
// every number from 0 to 49
// uses the reserve operation to save space in memory
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> intvector;
    intvector.reserve(50);

    for (int i=0; i<50; i++){
        intvector.push_back(i*i);
        cout << intvector[i] << endl;
    }
    return 0;
}
```

In the above example, the use of `reserve` was optional. However, it is
a good idea to use it before growing a vector in this way because it
will save time. Because vectors are stored in underlying arrays which
require contiguous memory, every time the vector\'s size gets too large
for the capacity, the entire vector must be moved to a larger location
in memory, and all that copying takes time. In a typical implementation,
the capacity is doubled each time. as in the example that follows.

```cpp
// function that uses a vector to square
// every number from 0 to 49
// and does not use reserve.
// shows amount of space used
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> intvector;
    // without intvector.reserve(50);

    for (int i=0; i<50; i++){
        intvector.push_back(i*i);
        cout << intvector[i] << endl;
        cout << "capacity: " << intvector.capacity() << endl;
    }
    return 0;
}
```

vector is wonderful.