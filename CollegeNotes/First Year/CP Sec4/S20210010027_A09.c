#include <stdio.h>

int sum(int *p, int *sum, int *size){
    for(int i=0; i< *size; i++){
        *sum+=*(p+i);
    }
    return *sum;
}

void reverse(char *p)
{
    int size;
    char temp;
    for(size=0;*(p+size)!='\0';size++);

    for(int i=0;i<size/2;i++){
       temp=*(p+i);
       *(p+i)=*(p+size-1-i);
       *(p+size-1-i)=temp;
   }
}


int main(){
    //Question 1
    {
    int A[5] = {80,75,60,90,50};
    int *P[5];
    for(int i = 0; i<5; i++) {
        P[i] = &A[i];
    }

    int **Q = P;
    printf("1(a): ");
    for(int i=0; i<5; i++) {
        printf("%d ", **Q);
        Q++;
    }
    printf("\n");
    Q-=5;

    Q++;
    printf("1(b): %d %d %d\n", Q-P, *Q-A, **Q);
    *Q++;
    printf("1(c): %d %d %d\n", Q-P, *Q-A, **Q);
    *(++Q);
    printf("1(d): %d %d %d\n", Q-P, *Q-A, **Q);
    ++(*Q);
    printf("1(e): %d %d %d\n", Q-P, *Q-A, **Q);
    
    }

    //Question 2
    {
        
    }

    //Question 3
    {
    int nums[]= {4,5,6,7,1,2,3};
    int size = 7;
    printf("Original Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    int *ptr = &nums[0];
    int p;
    printf("Enter the value of p: ");
    scanf("%d", &p);
    while(p-- >0){
        int temp = *(ptr+size-1);
        for(int i=size-1; i>0; i--){
            *(ptr+i)=*(ptr+i-1);
        }
        *ptr=temp;
    }
     printf("Final Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    }

    //Question 4
    {
    char s[15];
    printf("Enter String: \n");
    scanf(" %[^\n]",s);
    reverse(s);
    printf("%s\n",s);
    }

    //Question 5
    {
    int size=1;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements:\t");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int ans=0;
    ans = sum(&arr[0], &ans, &size);
    printf("%d", ans);
    }
    return 0;
}