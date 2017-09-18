#include <stdio.h>

int n, m, mat[105][105], i, j;

int main(){ 
 
    scanf(" %d %d", &n, &m);       
    
    while(n!=0 && m!=0){
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                scanf(" %d", &mat[i][j]);
                
                if(mat[i][j]==1){
                    mat[0][j]++;
                    mat[i][m+1]++;
                }
            }
        }
        
        scanf(" %d %d", &n, &m);
    }
    
}