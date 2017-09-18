#include <stdio.h>

int main(){
    
    int mat[1005][1005], i, j, n, m, l, c=0, acha[1005];
    
    scanf(" %d", &n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d", &mat[i][j]);
            acha[i+j] = 0;
        }
    }
    
    for(i=1;i<=(2*n);i++){
        scanf(" %d %d", &m, &l);
        //printf("%d : %d - %d\n", i, m, l);
        for(j=1;j<=(2*n);j++){
            if(mat[m][l]==acha[j]) break;
            else if(mat[m][l]>acha[j] || mat[l][m]>acha[j]){
                acha[j]=mat[m][l];
                c++;
               // printf("%d %d %d\n", mat[m][l], c, acha[j]);
                break;
            }
        }
    }
    printf("%d\n", c);
}