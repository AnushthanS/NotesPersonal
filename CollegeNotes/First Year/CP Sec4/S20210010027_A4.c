#include <stdio.h>
#include <math.h>


/*Submitted by ->
Anushthan Saxena
S20210010027
*/



// Question 1
int main(){
    printf("Enter some character: ");
    char in = getchar();

    if(!(((int)in >= 65 && (int)in <= 90) || ((int)in >= 97 && (int)in <= 122))){
        printf("Enter a valid character\n");
    } else {
    if(in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u' || in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U')
    printf("Vowel\n");
    else printf("Consonant\n");
    }
    return 0;
}

// Question 2
int main(){
    int time;
    printf("Enter time as a positive integer: ");
    scanf("%d", &time);

    if(time >= 5 && time <= 10) printf("Hello, Sunny morning\n");
    if(time >= 11 && time <= 16) printf("Good afternoon\n");
    if(time >= 17 && time <= 19) printf("Good evening\n");
    if(time >= 20 && time <= 22) printf("Good night\n");
    if(time >= 23 && time <= 4) printf("Hi, Sleepy head\n");

    return 0;
}

//Question 3
int main(){
    int a, b, c, disc;
    printf("Enter values of a, b and c respectively: ");
    scanf("%d%d%d", &a, &b, &c);
    disc = b*b - 4*a*c;
    if(disc < 0){
        printf("Imaginary roots\n");
    } else {
        float x1 = (-1*b + pow(disc, 0.5))/(2*a);
        float x2 = (-1*b + pow(disc, 0.5))/(2*a);
        printf("The roots for the equation %dx^2 + %dx + %d = 0 are %.2f and %.2f", a, b, c, x1, x2 );
    }
    return 0;
}

//Question 4
int main(){

    int sub1, sub2, sub3, sub4, sub5;

    printf ("Enter marks for all five subjects: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);


    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    int average = total/5;

    printf("Grade : ");



    int flag1 = average/10;
    if(average % 10 == 0){
        switch(flag1){
        
        case 10: printf("A\n"); break;
        case 9: printf("B\n"); break;
        case 8: printf("C\n"); break;
        case 7: printf("D\n"); break;
        case 6: printf("E\n"); break;
        default: printf("F\n"); break;
        }
    }    else  {
        switch(flag1){
        case 10:
        case 9: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        case 5: printf("E\n"); break;
        default: printf("F\n"); break;
        }
    }
    
    
    return 0;
}


//Question 5
int main(){
    float distance, fare;
    printf("Enter the distance travelled: ");
    scanf("%f", &distance);

    if(distance <= 12){
        fare = 100;
    } else if(distance > 12 && distance <= 16){
        fare = 100 + 8*(distance-12);
    } else if(distance > 16 && distance <= 20){
        fare = 100 + 8*4 + 6*(distance - 16);
    } else {
        fare = 100 + 8*4 + 6*4 + 5*(distance - 20);
    }
    printf("Fare: %.2f", fare);
    return 0;
}