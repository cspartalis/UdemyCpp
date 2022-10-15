# Arrays

## Characteristics

* Fixed size: the size cannot change
* Elements are all the same type
* Stored contiguously in memory
* Individual elements can be accessed by their position or index

* First element is at index 0
* Last element is at indez size-1

* C++ arrays are not bound checked; no check if individual array element is
  between 0 and size-1

* Always initialize arrays
* Very efficient
* Iteration (looping) is often used to process

## Declaring and Initializing Arrays

* Element_Type array_name **[constant number of elements]**
* Element_Type array_name [number of elements] {init list}
  * Also, the size can be automatically calculated 
  * int myArray **[]** {1, 2, 3, 4, 5};
