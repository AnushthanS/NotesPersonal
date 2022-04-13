/*
Anushthan Saxena
S20210010027
CP4
*/

//Question 1
#include <stdio.h>
int main(){
    int digit, number = 0, sum = 0;
    char ch;
    int flag = 0;
    do{
        ch=getchar();

        if(ch == '-') {
            flag = 1;
        ch=getchar();
        }

        if(ch >= '0' && ch <='9'){
            digit = ch - '0';
            number = number *10 + digit;
            continue;
            } 
        else {
            if(flag){
                number *=-1;
            }
        }
        
        flag=0;
        sum+=number;
        number=0;
    }while(ch!=10);
    printf("sum= %d", sum);
    return 0;
}


//Question 2
#include <stdio.h>
int main(){
    int digit, number = 0, sum = 0;
    char ch;

    do{
        scanf("%c", &ch);

        if(ch == '-'){
            while(1){
                 scanf("%c", &ch);
                 if(ch<'0' || ch >'9') break;
            }
        }

        if(ch >= '0' && ch <='9'){
            digit = ch - '0';
            number = number *10 + digit;
            continue;
            } 

        sum+=number;
        number=0;
    }while(ch!=10);
    printf("sum= %d", sum);
    return 0;
}


//Question 3
#include <stdio.h>
int main(){
    int digit, number = 0, sum = 0;
    char ch;
    int k;
    int flag = 0;
    scanf("%d", &k);

    
    do{
        ch=getchar();
        if(ch == '-') {
        
        ch=getchar();
        if(ch == '1') {
            k--;
            sum-=1;
         continue;}
             flag = 1;
        }

        if(ch >= '0' && ch <='9'){
            digit = ch - '0';
            number = number *10 + digit;
            continue;
        } else {
            if(flag){
                number *=-1;
            }
        }
        
        flag=0;
        sum+=number;
        number=0;
    }while(ch!=10 && k>0);
    printf("sum= %d", sum);
    return 0;
}

//Question 4
#include <stdio.h>
int main(){
    int digit, number = 0, sum = 0;
    char ch;
    int flag = 0;
    do{
        ch=getchar();
        if(ch == '-') {
            sum+=number;
      
        ch=getchar();
        if(ch == '1') {
            sum-=1;
            ch=getchar();
            if(ch=='-'){
                sum-=1;
                break;
            }
           }
        flag = 1;
        }

        if(ch >= '0' && ch <='9'){
            digit = ch - '0';
            number = number *10 + digit;
            continue;
        } else {
            if(flag){
                number *=-1;
            }
        }
        
        flag=0;
        sum+=number;
        number=0;
    }while(ch!=10);
    printf("sum= %d", sum);
    return 0;
}
