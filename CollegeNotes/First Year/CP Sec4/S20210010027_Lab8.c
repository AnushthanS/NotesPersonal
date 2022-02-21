/*
Anushthan Saxena
S20210010027
*/



//Question 1
#include <stdio.h>

int sumDigitsRec(int n){
    if(n==0) return 0;
    return n%10 + sumDigitsRec(n/10);
}
int isOneThree(int n){
    int temp=n;
    int flag=1;
    while(temp>0){
        int digit = temp%10;
        if(digit==2 || digit==4 || digit==5 || digit==7 || digit==8) flag=0;
        temp/=10;
    }
    return flag;
}
void numRec(int n){
    if(n==0) return;
    if(isOneThree(n)){
        printf("\t(%d, %d)\t", n, sumDigitsRec(n));
    }
    numRec(n-1);
}
int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    numRec(x);
    return 0;
}








//Question 2
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int prime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0) return 0;
    }
    return 1;
}

int smallestOdd(int arr[],int start, int n, int min){
    if(start == n) return min;
    if(arr[start]%2==1 && arr[start]<min){
        smallestOdd(arr, start+1, n, arr[start]);
    } else {
        smallestOdd(arr, start+1, n, min);
    }
}
int largestEven(int arr[], int start, int n, int max){
    if(start == n) return max;
    if(arr[start]%2==0 && arr[start]>max){
        largestEven(arr, start+1, n, arr[start]);
    } else {
        largestEven(arr, start+1, n, max);
    }
}


int largestPrime(int arr[], int start, int n, int max){
    if(start == n) return max;
    if(prime(arr[start])&& arr[start]>max){
        largestPrime(arr, start+1, n, arr[start]);
    } else {
        largestPrime(arr, start+1, n, max);
    }
}
int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i]= 10+ rand() % 60;
    }

    for(int i=0; i<n; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");

    int a = smallestOdd(arr,0, n,61);
    printf("Smallest odd: %d\n", a);


    int b = largestEven(arr, 0,n, 9);
    printf("Largest even: %d\n", b);

    int c = largestPrime(arr,0,n,1);
    printf("Largest prime factor: %d", c);
    return 0;
}









//Question 3
#include <stdio.h>
#include <math.h>

int isPrimeRec(int num,int i)
{
    if(num==1) return 0;
    if(num==i) return 1;
    if(num%i==0) return 0;
    return isPrimeRec(num,i+1);
}

void primeFactRec(int num){
    for(int i=2; i<=num; i++){
        if(num%i==0 ){
            if (isPrimeRec(i,2))printf("%d ", i);
        }
    }
}

void oddNumRec(int num){
    if(isPrimeRec(num,2)==1){
        int f= pow(num,3)+1;
        printf("f(%d)=%d, prime factors are: ", num, f);
        primeFactRec(f);
        printf("\n");
    }
}


void evenNumRec(int num){
    int f=pow(num,2) + 3*num + 2;
    printf("f(%d)=%d, prime factors are: ", num, f);
    primeFactRec(f);
    printf("\n");
}


int main(){

    printf("Enter value of n: ");
    int n;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){
         if(i==2){
            printf("f(%d)=%d, prime factors are: %d\n", 2, 11, 11);
            continue;
        }
        
        if(i%2==1){
            oddNumRec(i);
        } 
        else evenNumRec(i);
    }

    return 0;
}









//Question 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int K, M;
void elementMatrixRec(int A[K][M], int K, int M, int row, int col){
    if(row < K){
        if(col < M){
            A[row][col] = 1 + rand()%10;
            elementMatrixRec(A, K, M, row, col+1);
        } 
        else {

            elementMatrixRec(A, K, M, row+1, 0);
        }
    }
}

void powerRec(int B[K][M], int A[K][M], int K, int M, int row, int col){
    if(row < K){
        if(col < M){
            int k=row+col;
            B[row][col] = pow(A[row][col], k);
            powerRec(B,A, K, M, row, col+1);
        } 
        else {

            powerRec(B,A, K, M, row+1, 0);
        }
    }
}

int main(){
  
    printf("Enter K and M: ");
    scanf("%d%d", &K, &M);
    int A[K][M];
    int B[K][M];
   
    elementMatrixRec(A, K, M, 0, 0);

    printf("Matrix A: \n");
    for(int row=0; row<K; row++){
        for(int col=0; col<M; col++){
            printf("%5d", A[row][col]);
        }
        printf("\n");
    }

    powerRec(B, A, K, M, 0, 0);
    printf("Matrix B: \n");
    for(int row=0; row<K; row++){
        for(int col=0; col<M; col++){
            printf("%5d", B[row][col]);
        }
        printf("\n");
    }
    return 0;
}