#include <stdio.h>

int a=0, b, c;

int main(){
    
    scanf(" %d %d", &a, &b);
    
    if(a==b){
        c=a;
    }
    else if(a>b){
        c=a;
    }
    else if(a<b){
        c=b;
    }
    
    printf("%d\n", c);
    
}