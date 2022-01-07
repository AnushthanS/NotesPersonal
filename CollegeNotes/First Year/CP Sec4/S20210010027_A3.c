/* Assignment 3 submitted by -
Anushthan Saxena
S20210010027
*/

#include <stdio.h>

//Question 1
int main(){
    int a;
    float b;
    char c;
    char line[15];
    //Taking input as per the problem 
    printf("Enter the desired integer value\n");
    scanf("%d", &a);

    printf("Enter the desired floating point value\n");
    scanf("%f", &b);

    printf("Enter the desired character\n");
    scanf(" %c", &c);

    printf("Enter the desired String\n");
    scanf(" %[^\n]", line);

    

    //Output 
    printf("Integer: %d\nFloat: %f\nCharacter: %c\nString: %s",a,b,c,line);
    return 0;
}


//Question 2
int main(){
    //Taking a 3 digit number input
    int userInp;
    printf("Enter a 3 digit integer\n");
    scanf("%d", &userInp);

    int sum = userInp%10 + userInp/10 %10 + userInp/100 %10;

    //int sum =0;
    // while(userInp > 0){
    //     sum += userInp % 10;
    //     userInp /=10;
    // }
    
    printf("Sum of digits of %d is: %d", userInp, sum);
    return 0;
}


//Question 3
int main(){
    int a, b, c;
    printf("Enter the values of a, b and c\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("The initial values of a, b and c are %d, %d and %d respectively\n",a,b,c);
    // part 1
    int first = ++a;

    //part 2
    int second = first + c++;

    //part 3
    int third = b--;

    //part 4
    int fourth = ++c - third;

    printf("1) -> %d\n2) -> %d\n3) -> %d\n4) -> %d\n", first, second, third, fourth);
    printf("The final values of a, b and c are %d, %d and %d respectively", a,b,c);
    return 0;
}



//Question 4
int main(){
    int a,b;
    float c,d,z=0.0f;

    //Inputs
    printf("Enter integer values for a and b\n");
    scanf("%d%d", &a, &b);

    printf("Enter floating point values for c and d\n");
    scanf("%f%f", &c, &d);

    //part 1
    z = a + c / 4 * d / 3 + b;
    printf("z = %f\n", z);

    //part 2
    z = c + a / 4 * b / 3 + d;
    printf("z = %f\n", z);

    //part 3
    z = (int)c / a * b / 3;
    printf("z = %f\n", z);

    //part 4
    z = a / b * b % 5 % 3;
    printf("z = %f\n", z);

    //part 5
    z = 10-5-7 / 4 * 4;
    printf("z = %f\n", z);

    //part 6
    z = 24 / (1 + 2%3 + 4/5 + 6 + 31%8);
    printf("z = %f\n", z);

    return 0;
}


//Question 5
int main(){
    int A = 7, B = 11;

    //part 1
    printf("1) A AND B = %d\n", A&B);
    
    //part 2
    printf("2) A OR B = %d\n", A|B);

    //part 3
    printf("3) A XOR B = %d\n", A^B);

    //part 4
    printf("4) A left shift by 2 = %d\n", A<<2);

    //part 5
    printf("5) B right shift by 4 = %d\n", B>>4);

    //part 6
    printf("6) 1's complement of B = %d\n", ~B);

    return 0;
}



//Question 6
#include <math.h>

#define g 9.8
#define coeff 0.5 //since velocity becomes half of original, coefficient of restitution = 0.5

int main(){
    float Y;
    printf("Enter initial height\n");
    scanf("%f", &Y);

    float vertDist = Y + 2*pow(coeff,2)*Y + 2*pow(coeff,4)*Y; // Vertical DISTANCE travelled in any bounce n = 2 * pow(coeff,2*n)* initialHeight
    printf("Total vertical distance travelled till the third bounce = %f\n", vertDist);
    return 0;
}