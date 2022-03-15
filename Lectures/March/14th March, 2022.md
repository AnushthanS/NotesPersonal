#Monday 
### 10 AM - #OCW 
- Assembly programming as the final module
- Outline	
	- Inside the computer
	- Microcontroller
	- Difference between Microcontroller and Microprocessor

### 11 AM - #CP 
- Dangling pointer 
- Memory leak
- Basic stuff
- Parts of program memory
	- Stack: also used for local variables
	- Heap: also used for dynamic memory location
	- Data: global variables stored here (bss/ block starting symbol segment)
	- Code: instructions stored here

- rewind(file_pointer) and fseek
- ftell
- fwrite and fread are mainly for strucutre/block input
- fwrite(&s\[i], sizeof(struct student),1,fp); //eg of fwrite
- fread(&s\[i], sizeof(struct student),1,fp); //eg of fwrite