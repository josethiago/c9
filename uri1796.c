#include <stdio.h>

int main(){
    int a, b, s=0, n=0, i;
    
    scanf(" %d", &a);
    
    for(i=0;i<a;i++){
        scanf("%d", &b);
        
        if(b==0) s++;
        else n++;
    }
    if(s>n) printf("Y\n");
    else printf("N\n");
}