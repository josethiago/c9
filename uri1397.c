#include <stdio.h>

int main(){
    
    int a, b, p1=0, p2=0, c, i;
    
    while(1){
        
        scanf(" %d", &c);
        p1=0;
        p2=0;
        if(c==0) break;
        
        for(i=0;i<c;i++){
            
            scanf(" %d %d", &a, &b);
            
            if(a>b) p1++;
            else if(b>a) p2++;
            
        }
        printf("%d %d\n", p1, p2);
    }
}