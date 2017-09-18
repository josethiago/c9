#include <stdio.h>
#define M 1000000

int perm[M], i, pos, use[M], n, sum=0;

void gerar(pos){
    int j;
    if(pos==n){
        sum++;
        if(sum==1000000){
            for(j=0;j<n;j++){
                printf("%d ",perm[j]);
            }
            printf("\n");
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
    
    for(i=0;i<n;i++){
        use[i]=0;
    }
    
    gerar(0);
    
}