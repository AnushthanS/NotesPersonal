#include <stdio.h>
#include <string.h>

// A basic C program to demonstrate tokenizing[gfg]


void example1(){

    char str[] = "Geeks-for-Geeks";

    //Returns first token only
    char* token = strtok (str, "-"); //similar to java, first we pass the required string and then the delimiter, although there is no provision for providing flags

    //To print all the tokens present
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }

}

void example2(){
    //Declaration of string
    char gfg[100] = " Geeks - for - geeks - test - string";

    //Declaratoin of a delimiter
    const char s[6] = "-"; //size doesn't really matter

    //Use of strtok
    //get first token
    char* token = strtok(gfg, s);
    
    //Printing all the tokens
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
}


int main(){
    example1();
    printf("\n\n\n");
    example2();
    return 0;
}