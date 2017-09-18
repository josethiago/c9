#include <stdio.h>

int main(){
    
    int v[10] = {13, 3, 5, 17, 9, 11, 6, 10, 18, 4}, i=0, aux=0, j=0, n=0;
    n=1;
    for(j = 0; (j < 10) && (n == 1); j++){
           n=0;
        for(i = 0; i < 9; i++){
                if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                n=1;
                    }
            }
}
    for(i=0;i<10;i++){
            printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}
