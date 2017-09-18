#include <stdio.h>

int main(){
    
    int c=0, i=0, d=0, e=0, aux=0, j=0;
    char com=' ', re='N';
    
    scanf(" %d", &c);
    
    while(c!=0){
        
        if(c==0) break;
        
        //fgets(com,c,stdin);
        re='N';
        d=0;
        e=0;
        aux=0;
        for(i=0;i<c;i++){
            scanf(" %c", &com);
            if(com=='D'){
                d++;
            }
            else if(com=='E'){
                e++;
            }
            //printf("%c",com);
        }
        
        //printf("\n");
        if(d>e){
            d-=e;
            for(j=0;j<d;j++){
                if(aux<4){
                    aux++;
                }
                else{
                    aux=0;
                }
            }
            if(aux==1) re='L';
            else if(aux==2) re='S';
            else if(aux==3) re='O'; 
        }
        else{
            e-=d;
            for(j=0;j<e;j++){
                if(aux<4){
                    aux++;
                }
                else{
                    aux=0;
                }
            }
            if(aux==1) re='O';
            else if(aux==2) re='S';
            else if(aux==3) re='L';
        }
        
        
        printf("%c\n",re);
        scanf(" %d", &c);
    }
    
}