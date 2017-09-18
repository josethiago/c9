#include <stdio.h>

int n,m,mat[110][110],visit[110],f[110],incremento;

int main(){
    int i, j, a, b;
    while(1){
      scanf(" %d %d",&n,&m);
      if(n==0 && m==0) break;
        for(a=1;a<=n;a++){
            for(b=1;b<=n;b++){
                mat[a][b]=0;
                mat[b][a]=0;
                visit[b]=0;
            }
        }
        for(a=0;a<m;a++){
            scanf(" %d %d",&i,&j);
            mat[i][j]=1;
            mat[j][i]=1;
        }
        incremento = 0;
        for(a=1; a<=n; a++) {
            if(visit[a]==0) {
                busca(a);
            }
        }
        
        for(a=n-1; a>0; a--) {
            printf("%d ",f[a]);
                
        }
        printf("%d",f[0]);
        printf("\n");
    }
}

int busca(int u){
    int i;
    visit[u]=1;
    for(i=1;i<=n;i++) {
        if(mat[u][i]==1  && visit[i]==0) {
            busca(i);
        }
    }
    visit[u]=2;
    f[incremento]=u;
    incremento++;
}