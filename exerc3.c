#include <stdio.h>

int main(){
    
    int mat[3][3], i=0, j=0, n=0;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            mat[i][j] = 0;
        }
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf(" %d", &mat[i][j]);
        }
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i==j){
                n += mat[i][j];
            }
        }
    }
    
    printf("Tr(A) = %d\n", n);
    return 0;
}