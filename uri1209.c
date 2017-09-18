#include <stdio.h>

int main(){
    
        int n, m, k, amigos[1005][1005],i,e[1005],j,a,b,c,d;
        
        
        while(scanf("%d %d %d", &n, &m, &k)!=EOF)
        
        
        for(i=0;i<1005;i++){
            for(j=0;j<1005;j++){
                amigos[i][j]=0;
        }
        for(i=0;i<n;i++){
            
            e[i]=1;
        }
        
        for(i=1;i<m;i++){
            
            scanf("%d %d", &a, &b);
            amigos[a][i]=b;
            amigos[b][i]=a;
            
            amigos[a][0]++;
            amigos[b][0]++;
            
        }
        for(i=0;i<m;i++){
            
            if(e[i]==1){
                
                if(amigos[i][0]<k){
                    for(j=0;j<amigos[i][0];j++){
                        
                        
                        
                    }
                    e[i]=0;
                    
                    
                }
                    
            }
            
        }
        
}

