#include <stdio.h>

int main(){
    int n=0, c=0, s=0, le=0, a=0, i=0, j=0;
    
   scanf(" %d", &c);
    
    while(c!=0){
        
        for(i=0;i<c;i++){
            s=0;
            a=-1;
            for(j=0;j<5;j++){
                scanf(" %d", &le);
                
                if(le<=127){
                s++;
                a=j;
                //printf("%d\n", j);
                }
            }
            if(s==1){
                if(a==0) printf("A\n");
                else if(a==1) printf("B\n");
                else if(a==2) printf("C\n");
                else if(a==3) printf("D\n");
                else if(a==4) printf("E\n");
            }
            else{
                printf("*\n");
            }
        }
        scanf(" %d", &c);
    }
}