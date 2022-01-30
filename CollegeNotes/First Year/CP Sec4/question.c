#include <stdio.h>
int main(){
    int n, ans=0, preflen=0;
    while(1){
        scanf("%d", &n);
        if(n==1){
            switch(preflen){
                case 0: preflen =1;
                    break;
                case 1: break;
                case 2: preflen =3;
                    break;
                case 3: preflen =1;
                    break;
            }
        }   else if(n==0){
            switch(preflen){
            case 0: break;
            case 1: preflen =2;
                break;
            case 2: preflen =0; 
                break;
            case 3: ans++;
                preflen =2;
                break;
            } 
        }   else break;
    }
    printf("%d", ans);
    return 0;
}