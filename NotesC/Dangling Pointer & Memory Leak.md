# Dangling Pointer
When a pointer points to nothing, it's considered a dangling pointer.
Can happen due to: 
1.  ### Deallocation of memory -> 
```ad-example
	int *ptr = (int*) malloc(sizeof(int));
	free(ptr); // ptr becomes a dangling pointer
	ptr = NULL; // ptr no longer dangling
```


2.   ### Returning local variables in function calls ->
```ad-example
	#include <stdio.h>
	int* myFunc(){
		int a = 34; 
		// a is a local variable and goes out of scope when function call is over
		return &a;
	}
	
	int main(){
		int *ptr = myFunc(); // points to an invalid location
		// ptr became a dangling pointer
		printf("%d", *ptr);
		return 0;
	}
```

3. ### Variable going out of scope ->
```ad-example
	#include <stdio.h>
	int main(){
		int *ptr;
		{ //Start of a scope
			int i = 10;
			ptr = &i;
		} //End of a scope
		//With the end of the scope
		//the scope variable is destroyed
		//ptr becomes a dangling pointer
		
		printf("%d", *ptr);
		return 0;
	}
```

- Danling pointers can introduce bugs
- Bugs frequenly become security holes 
- Issues can be avoided by initializing dangling pointers to **NULL**
- Now the pointer will no longer be dangling
- Assigning **NULL** to a pointer indicated it is a **NULL pointer**

**** 

# Memory Leak
This happens when we don't free the dynamically allocated memory and it keeps on building up (maybe the program is in a loop) useless blocks which eventually lead to a crash.