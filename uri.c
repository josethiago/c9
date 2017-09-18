#include <stdio.h>

int main(){
    
    int d, a, i, la ,ma=0, r=0, j, de;
    while(1){
        r=0; ma=0;
        scanf(" %d %d", &a, &d);
        if(a==0 && d==0) {break;}
        
        for(i=0;i<a;i++){
            scanf(" %d", &la);
            if(ma==0){ma=la;}
            else if(la<ma){ma=la;}
        }
        
        //printf("%d\n", ma);
        for(i=0;i<d;i++){
            scanf(" %d", &de);
            if(ma>=de){ r++;}
            
        }
        if(r>=2){
            printf("N\n");
        }
        else{
            printf("Y\n");
        }
    }
}