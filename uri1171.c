#include <stdio.h>

int num[2010], a, i, b;


int main(){
 
    scanf(" %d", &a);
    
    for(i=0;i<a;i++){
        scanf(" %d", &b);
        num[b]++;
    }
    for(i=0;i<2001;i++){
        if(num[i]>0) printf("%d aparece %d vez(es)\n", i, num[i]);
    }
}