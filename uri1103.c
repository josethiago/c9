#include <stdio.h>

int h1, h2, m1, m2, aux, aux2, so;

int main(){
    
    while (1){
        
        scanf(" %d %d %d %d", &h1, &m1, &h2, &m2);
        
        if(h1==0 && m1==0 && h2==0 && m1==0) break;
        
        h1 = h1*60;
        h2 = h2*60;
        
        aux = h1+m1;
        aux2 = h2+m2;
        
        so = aux - aux2;
        
        if(so>0){
            so = 1440+(aux2-aux);     
            printf("%d\n", so);    
        }
        else{
           printf("%d\n", -1*so);
        }
        
        
    }
    
}