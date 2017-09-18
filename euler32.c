#include <stdio.h>

int perm[M], i, pos, use[M], n, sum=0, c=0;

void gerar(pos){
    int j;
    if(pos==n){
        for(j=0;j<n;j++){
                
        }
    }
    else{
        for(j=0;j<n;j++){
            if(!use[j]){
                use[j]=1;
                perm[pos]=j;
                gerar(pos+1);
                use[j]=0;
            }
        }
    }
    
}

int main(){
    
    scanf(" %d", &n);
    
    gerar(0);
    
}