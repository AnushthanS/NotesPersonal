/*
S20210010027
Anushthan Saxena
*/


//Question 1
#include <stdio.h>

void allPrime(int[], int, int);
int isPrime(int);
void pairPrimeDivisible(int, int, int, int);
int isDivisible(int, int, int);
int sumTwoInteger(int, int);
void pairPrimePresent(int, int, int[], int);
int isPresent(int, int[], int);

void allPrime(int arr[],int N, int X){
    int k=0;
    for(int i=X; k<=N; i++){
        if(X==1) continue;
        if(isPrime(i)==1){
            arr[k]=i;
            k++;
        }
    }
    k-=1;

    printf("The first %d prime numbers starting from %d are:\n", N,X);
    for(int m=0; m<N; m++){
        printf("%4d", arr[m]);
    }
    printf("\n\n");

   int x,y;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    for(int a=0; a<k; a++){
        int p1=arr[a];
        for(int b=0; b<k; b++){
            int p2=arr[b];
            pairPrimeDivisible(p1, p2, x, y);
          
        }
    }
     for(int a=0; a<k; a++){
        int p1=arr[a];
        for(int b=0; b<k; b++){
            int p2=arr[b];
            
            pairPrimePresent(p1, p2, arr, k);
        }
    }
}

int isPrime(int i){
    int count =0;
    for(int j=1; j<i; j++){
        if(i%j==0) count++;
    }
    return (count > 1) ? 0 : 1;
}


void pairPrimeDivisible(int p1, int p2, int x, int y){
    
    int sum = sumTwoInteger(p1,p2);
    if(isDivisible(sum, x, y) ==1){
        printf("(%d, %d) ; sum = %d; divisible by both %d and %d\n", p1,p2, sum, x, y);
  }
}

int sumTwoInteger(int p1, int p2){
    return p1+p2;
}
int isDivisible(int sum, int x, int y){
    return (sum%x==0 && sum%y==0)? 1:0;
}

void pairPrimePresent(int p1, int p2, int arr[], int size){
    int sum = sumTwoInteger(p1, p2);
    int key= sum-3;
    if(isPresent(key, arr, size)==1){
        printf("for (%d,%d) sum: %d - 3 = %d is present in the array\n", p1, p2, sum, key);
    }
}

int isPresent(int s, int arr[], int size){
    for(int i=0; i<size; i++){
        if(s==arr[i]) return 1;
    }
    return 0;
}

int main(){

    int X=0, N=1;
    printf("Enter value of N: ");
    scanf("%d", &N);
    printf("Enter value of X: ");
    scanf("%d", &X);

    int primes[N];
    allPrime(primes,N, X);

    return 0;
}



//Question 2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define sigma 1.0

int M,K;

double element(int r, int c, int A[M][M],double B[K][K], int K){
    double product=1, sum=0;
    for(int row=r, a1=0; row <K; row++, a1++){
        for(int col=c, a2=0; col<K; col++, a2++){
            product= A[row][col]*B[a1][a2];
            sum+=product;
        }
    }
    return sum;
}

void fnMatrixOperation2(double C[M-K+1][M-K+1], int M, int K){
    double D[M-K+2][M-K+2];
    for(int row=0; row<M-K+1; row++){
            for(int col=0; col<M-K+1; col++){
                D[row][col]=C[row][col];
            }
        }
    for(int f=0; f<M-K+2; f++){
        D[M-K+1][f]=0.0;
    }
    for(int f=0; f<M-K+2; f++){
        D[f][M-K+1]=0.0;
    }
    printf("Matrix D: \n");
    for(int row=0; row<M-K+2; row++){
        for(int col=0; col<M-K+2; col++){
            printf("%lf ", D[row][col]);
        }
        printf("\n");
    }

    int n= (M-K+2)/2;
    double E[n][n];
    int temp, col, row;
    int max1=INT32_MIN;

    for( row=0; row<M-K+2; row+=n){

        for( col=0; col<n; col++){
            
            for( temp = row; temp < n; temp++){
                max1 = max1<D[temp][col] ? D[temp][col] : max1;
            }
        }
        E[temp-n][col-n]=max1;
        
        for( col=n; col<M-K+2; col++){
   
            for( temp = row; temp < n; temp++){
                max1 = max1<D[temp][col] ? D[temp][col] : max1;
            }
        }
        E[temp-n][col-n]=max1;
    }
    

    printf("Matrix E: \n");
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            printf("%lf ", E[row][col]);
        }
        printf("\n");
    }
}


void fnMatrixOperation1(int A[M][M], double B[K][K], int M, int K){

        double C[M-K+1][M-K+1];
        for(int row=0; row<M-K+1; row++){
            for(int col=0; col<M-K+1; col++){
                C[row][col]=element(row, col, A, B, K);
            }
        }

    printf("Matrix C: \n");
    for(int row=0; row<M-K+1; row++){
        for(int col=0; col<M-K+1; col++){
            printf("%lf ", C[row][col]);
        }
        printf("\n");
    }
    fnMatrixOperation2(C,M,K);
}


int main(){

    
    printf("Enter value of M: ");
    scanf("%d", &M);
    printf("Enter value of K: ");
    scanf("%d", &K);
    int A[M][M];
    double B[K][K];

    int lower=0, upper=255;

    for(int row=0; row<M; row++){
        for(int col=0; col<M; col++){
            A[row][col] = lower + rand()%(upper-lower+1);
        }
    }
    printf("Matrix A: \n");
    for(int row=0; row<M; row++){
        for(int col=0; col<M; col++){
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }


    double sum=0.0;
    int n = (K-1)/2;
    for(int row=0, x=-n; row<K; row++, x++){
        for(int col=0, y=-n; col<K; col++, y++){
            B[row][col]= (1/(2*M_PI*sigma*sigma)) * exp(-1*(pow(x,2) + pow(y,2))/ (2*pow(sigma,2)));

            sum+= B[row][col];
        }
    }
    
     for(int row=0; row<K; row++){
        for(int col=0; col<K; col++){
            B[row][col] /= sum;
        }
    }
    printf("Matrix B: \n");
    for(int row=0; row<K; row++){
        for(int col=0; col<K; col++){
            printf("%lf ", B[row][col]);
        }
        printf("\n");
    }

    fnMatrixOperation1(A,B,M,K);

    return 0;
}
