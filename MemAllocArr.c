#include <stdio.h>

#include <stdlib.h>

int main(){
    //This pointer holds the base address of the block which will be created down in the program
    int* ptr; 
    int n, i;


    //Get the number of elements of the required array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Entered number of elements: %d\n", n);

    //Dynamic memory allocation of the array
    ptr = (int*) malloc(n * sizeof(int));

    //Check if the memory allocation is successful
    if(ptr == NULL){
        printf("Memory allocation unsuccessful\nExiting program");
        exit(0);
    }

    //Taking the input for array
    printf("Enter the desired elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    //Printing the array
    for(int i=0; i<n; i++){
        printf("%3d", ptr[i]);
    }
    exit(0);
}