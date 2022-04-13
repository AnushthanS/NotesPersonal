/*
Submitted by: Anushthan Saxena
S20210010027
*/


// Question 1
#include <stdio.h>
#include <string.h>

int main(){


    char t[100];
    char p[100];
    int n=0;
    int a[100];

    scanf("%s", t);
    scanf("%s", p);
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int lengthT= strlen(t);
    int lengthP= strlen(p);

    int countIni =0;
    
 for(char c='a'; c<='z'; c++){
        for(int i=0; i< lengthP; i++){
            if(c == p[i]) {countIni++;}
        }
    }
    
    int countFin=0;

    int count=0;
    for(; count < n; count++) {
        int change = a[count];
        t[change-1] = '*';
        
     for(int l1 =0; l1 < lengthP; l1++){
            for(int l2=0; l2 < lengthT; l2++){
                if(p[l1] == t[l2]) {countFin++;}
            }
        }
        
        if(countIni > countFin) break;
        else countFin=0;
     
    }

    printf("%d", --count);
    return 0;
}


//Question 2
#include <stdio.h>

int main(){
    char s[100];
    int m=0;

    scanf("%[^\n]", s);
    scanf("%d", &m);

    while(m-- >0){
        int i,j,k;
        scanf("%d%d%d", &i, &j, &k);
       
        while(k-- >0){
        char temp = s[j-1];
        for(int l1 = j-1; l1 >= i; l1--){
            s[l1] = s[l1 -1];
        }
        s[i-1] = temp;
    }
    }
    printf("%s", s);
    return 0;
}
