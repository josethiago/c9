#include <stdio.h>

int main(){
    
    int c, k, le, i, j;
    
    scanf(" %d", &c);
    
    for(i=0;i<c;i++){
        scanf(" %d", &k);
        for(j=0;j<k;j++){
               scanf(" %d", &le);
               if(le==1){
                   printf("Rolien\n");
               }
               else if(le==2){
                   printf("Naej\n");
               }
               else if(le==3){
                   printf("Elehcim\n");
               }
               else{
                   printf("Odranoel\n");
               }
        }
    }
}