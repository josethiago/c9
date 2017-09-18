#include <stdio.h>

int main(){
    
    int j, n, x, v[10];
    n=10;
    for (j = 0; j < 10; j++){
        v[j]=j+1;    
    }
    x=v[0];
    for (j = 1; j < n; j++){
        if (x<v[j]) {x = v [j];}
        
    }
    printf("%d\n", x);
}