`#include <stdio.h>`
`int main(int argc, char const *argv[]){`
`printf("Enter a: ");`
`scanf("%d",&a);`
`printf("Enter b: ");`
`scanf("%d",&b);`
`printf("%d",a+b);`
`return 0;`
`}`
 
- shebang to include standard libraries, really similar to Java package system. *This is a preprocessor statement.*
- Linkers and Loaders are very much part of the preprocessor routine.
- Really similar to java.
- 0 returned when a build completes without any errors, 1 returned otherwise.
- **&** means address of some variable, commonly used while taking input.
- *scanf *is the standard input function for c programs.
- `int argc, char const *argv[]` is similar to java snippet `String []args`, both used to store the arguments passed with the standard compiler program.