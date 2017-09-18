#include <stdio.h>

int main(){
    
    int c, m, n, x, y, i, j, mat[102][102];
    
    scanf(" %d", &c);
    
    while(c!=0){
        
        scanf(" %d %d %d %d", &m, &n, &x, &y);
        
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                mat[i][j]=0;
            }
        }
        mat[x-1][y-1]=10;
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                
            }
        }
        
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                printf(" %d", mat[i][j]);        
            }
            printf("\n");
        }
        c--;
    }
    
}