>Helpful source: [geeksforgeeks](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)

- When we encounter the need for a flexible storage system, we can use Lists in Java. 
 C doesn't have a dynamic List like an ArrayList or an ArrayDeque, instead we use ***malloc(), calloc(), free() and realloc() present in stdlib.h***

## malloc() -
- *malloc or memory allocation* method is used to allocate a single giant memory block with a specified size. 
	- It returns a pointer of void type
	- Doesn't initialize memory at execution
	 ```ad-example
	 title: example	 
	 int\* ptr = (int*) malloc(5 \* sizeof(int));
	```
	- ptr is the pointer to 20 bytes of continuous memory here.
	- If space is insufficient, allocation fails and a NULL pointer is returned.
	- >Use this example file![[MemAllocArr.c]]

## calloc() -
 