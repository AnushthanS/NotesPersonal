/*
Assignment 2, Monday 27th December
Submitted by Anushthan Saxena
S20210010027
*/
#include <stdio.h>

//Question 1
int main(){
    printf("*******************************************************************************\n");
    printf("Name: Anushthan Saxena\n");
    printf("Roll Number: S20210010027\n");
    printf("Branch: CSE\n");
    printf("*******************************************************************************\n");
    return 0;
}

//Question 2
int main(){
    float distance;
    //Taking the distace input
    printf("Enter the distance in meters: \n");
    scanf("%f", &distance);
    float distCenti = distance*100;
    printf("%f",distCenti);
    return 0;
}

//Question 3
int main(){
    int length, breadth;
    float area;

    //Taking length and breadth input 
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%d%d",&length, &breadth);

    area = length*breadth;
    printf("Area: %f",area);
    return 0;
}

//Question 4
int main(){
    int a,b;
    //Taking input
    printf("Give input values for a and b:\n");
    scanf("%d%d", &a, &b);

    // a-> Addition
    int sum = a+b;
    printf("Sum: %d\n",sum);

    // b-> Subtraction
    int diff = a-b;
    printf("Difference(not absolute) : %d\n", diff);

    // c-> Multiplication
    int product = a*b;
    printf("Product: %d\n", product);

    // d-> Division
    float divisor = a/b;
    printf("Divisor: %f\n", divisor);

    // e-> Modulus
    int remainder = a%b;
    printf("Remainder: %d\n", remainder);
    return 0;
}

//Question 5
int main(){
    int x,y,z;
    //Taking inputs
    printf("Enter the desirable values for x, y and z:\n");
    scanf("%d%d%d", &x, &y, &z);

    float form = z*((2*x + 4*y)/2 + 3) - x*(4*z - 6*y)/2;
    printf("Answer: %f", form);
    return 0;
}