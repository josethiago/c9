#include <stdio.h>

int main(){ 

    int q, n, d, p, i;
    
    scanf(" %d %d %d",&q,&d,&p);
    
    n=((d*q)*p)/2;
    
    if(n<0){
        n=n*-1;
        
    }
    
    printf("%d\n",n);
}
