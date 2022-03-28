#data_type 
## Strings ->
----

1.  String in C is a character array, but the last element is NULL ('\0') character. This is the breakpoint for these arrays and so we need not the size of a String character array for any loop, just run till we get a NULL character.


2. Some functions within **string.h** header:
	- **strcpy(copy, source);** string copy
	- **strlen(source);** string length
	- **strcmp(str1, str2);** string comparison
	- **strcat(str1, str2);** string concatenation, add str2 to the end of str1
	- **strtok(string, delimiter);** to break string by delimiter into tokens
	- **strncpy(copy, source, count);** is strcpy but we specify the number of characters to copy. Used to take substrings.
	- **strncat** works like the original but with count variables.


3. Some functions with **ctype.h** header: 
	- **isalpha(), isdigit(), isspace(), tolower()**
	- **atoi(string), atol(string), atof(string)** convert strings to various data types. 
	- **sprintf(str, "format specifiers", variables);** is for various data types to string conversion.
	- **sscanf(source_string, "format specifiers", inputs);** takes input from the source string.


4. a\[i]\[j] :: is allocated memory location at address x + (i \* c + j) \* k
	