# Arrays and Vectors

## Arrays

### Characteristics

* Fixed size: the size cannot change
* Elements are all the same type
* Stored contiguously in memory
* Individual elements can be accessed by their position or index

* First element is at index 0
* Last element is at indez size-1

* C++ arrays are not bounds checked; no check if individual array element is
  between 0 and size-1

* Always initialize arrays
* Very efficient
* Iteration (looping) is often used to process

### Declaring and Initializing Arrays

* Element_Type array_name **[constant number of elements]**
* Element_Type array_name [number of elements] {init list}
  * Also, the size can be automatically calculated 
  * int myArray **[]** {1, 2, 3, 4, 5};

### Multi-dimensional arrays

Element_Type array_name **[dim1_size][dim2_size]**

## Vectors

* It's a **container** in the C++ Stadndard Template Library
  * In this Lib there are pre-written, pre-tested, easy-to-use components
* C++ vector is a C++ object
* Similar semantics and syntax with arrays
* Very efficient
* Can provide bounds checking
* Lots of cool functions: sort, reverse, find, and more

* A vector is a dynamically allocated array
* Dynamic size
* Elements are all the same type
* Stored contiguously in memory
* Individual elements accessed by their position or index
* [] - no checking to see if you are out of bounds
* Provides many useful function that do bounds check
* **Elements initialized to zero**
* Iteration (looping) is often used to process

### Declaring  Vectors

```C++
#include <vector>
std::vector <char> vowels;      // empty
std::vector <int> test_scores; 

std::vector <char> vowels (5);  // 5 initialized to zero
std::vector <int> test_scores (10);

vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
vector <int> test_scores {100, 98, 89, 85, 53};
vector <double> hu_temperatures (365, 80.0);  // 365 elements initialized to 100
```

### Accessing and Modifying vector elements

```C++
cout << "First score at index 0: " << test_scores[0] // No bounds checking
cout << "First score at index 0: " << test_scores.at(0) // BOUNDS CHECKING
```

A vector is an object so it has methods, "at()" is one of them.
Ohter vector functions:

* push_back() : Adds new element in the end of the vector
* size()      : Returns how many items are in the vector 
