#include <cstdio>
#define MAX 105

using namespace std;

int A[MAX][MAX], valor[MAX], peso[MAX], n;


int calcula (int C) {
    int resp1, resp2;
    int i, j, item;
    int c;
    
    for(i=0; i<=n; i++) A[0][i]=0;
    for(c=0; c<=C;c++) A[c][0]=0;
    
    for(c=1; c<=C; c++) {
      for(i=1; i<=n; i++) {
        item = i-1;
        if(peso[item]>c) { 
          A[c][i] = A[c][i-1];
        }                                                                                                                                                                                                                                                                                                                                                                                 
        else {
          resp1 = A[c][i-1];
          resp2 = valor[item]+A[c-peso[item]][i-1];
          if(resp1 > resp2) A[c][i] = resp1;
          else A[c][i]=resp2;
        }
      }
    }
  return A[C][n];
}

int main(){
    int g, p, res;
    while(1){
        scanf(" %d", &n);
        if(n==0) break;
        scanf(" %d", &p);
        for(g=0;g<n;g++){
            scanf(" %d %d", &valor[g], &peso[g]);
        }
        //printf("leu\n");
        res = calcula(p);
        printf("%d min.\n", res);
    }
    return 0;
}
