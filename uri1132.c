#include <stdio.h>

int main(){
    int l1, l2, i ,s=0;
    
    scanf(" %d", &l1);
    scanf(" %d", &l2);
    
    if(l1>l2){
        for(i=l2;i<=l1;i++){
            if(i%13!=0) s+=i;
        }
    }
    else{
        for(i=l1;i<=l2;i++){
            if(i%13!=0) s+=i;
        }
    }
    printf("%d\n", s);
}