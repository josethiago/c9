#include <stdio.h>
#include <string>

int vet[102][102], vis[102], t=0, n=0, v=0, a=0, b=0, c=0, d=0,e;

int main(){
    int r;
    scanf("%d", &t);
    for(e=0;e<t;e++){
    scanf("%d", &n);
    scanf("%d %d", &v, &a);
    
    r = 0;
    for(d=0;d<v;d++){
        for(c=0;c<v;c++){
            vet[d][c]=0;
        }
    }
    
    for(c=0;c<a;c++){
        
        scanf("%d %d", &b, &d);
    
        if(vet[d][b]==0 && vet[b][d]==0 ) {
           vet[d][b]=1;
           vet[b][d]=1;
           r++;
            
        }
        
        
    }
    printf("%d\n", r*2);
    }
    
}