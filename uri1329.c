#include <stdio.h>

int m=0,j=0,c,i=1,k,b=0;

int main(){
    while(i!=0){
    scanf("%d", &i);
    if(i==0) b=1;
    for(k=0;k<i;k++){
        
        scanf("%d", &c);
        
        if(c==1){
            
            j++;
            
        }
        else{
            
            m++;
            
        }
    }
    if(b==0){
    printf("Mary won %d times and John won %d times\n",m,j);
    }
    m=0;
    j=0;
    }
}