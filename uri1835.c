#include <stdio.h>
#define EDS 5100

int k, i, j, t, m, n, x, p=0, u=0, y, e, mat[EDS][EDS], fila[EDS];

int queue(int v){
    fila[u++] = v;
}
int dequeue(int v){
    fila[p++] = v;
}

int main(){
    
    scanf(" %d", &t);
    
    for(k=0;k<t;k++){
        scanf(" %d", &n);    
        scanf(" %d", &m);
        
        for(i=0;i<(n+5);i++){
            for(i=0;i<(n+5);i++){
                mat[i][j]=0;
                mat[j][i]=0;
            }
        }
        
        for(i=0;i<m;i++){
            scanf(" %d %d", &x, &y);
            mat[x][y]=1;
            mat[y][x]=1;
        }
        
        queue(0);
        
        while()
        
    }
    
}