`#include<iostream>`
`int main(){`
`std::cout<<"Hello world";`
`return 0; }`
This is a basic hello world C++ program.
- We write a **header file** in <>. Think of it as a JAVA package library. Multiple header files can be included in one program.
- *iostream* is the default input output stream header file in cpp but *cstdio* can be used from c.
- printf works but cout is better and easier to use.
- 0 and 1 return is binary, return 0 terminates a program.
- ***std*** is *standard name space*, much like the package in which *cout* class is present.
- Writing `using namespace std;` before main method removes the need to use "std::" before cout.
****
Global variables here cannot be declared by ***public*** or such keyword, we simply declare them outside all functions.