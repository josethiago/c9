#include <stdio.h>

int main(){
    
    int c, n, m, i, x, j;
    
    scanf(" %d", &c);
    
    for(j=0;j<c;j++){
        
        scanf(" %d %d", &n, &m);
        
        for (i=1;i<=n;i++){
            x=m*i; // se n fosse infinito seria a i-esima pessoa a ser morta
            while (x>n)  // ajusta x enquanto x > n
                x=(m*(x-n)-1)/(m-1); // arredonda para baixo!
        }
        printf("Case %d: %d\n", j, x);
    }
}