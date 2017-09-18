#include <stdio.h>
#define MAX 100000 
int resp[MAX+1];
int fatnums[3000];
int fatqt = 0;

void preproc(int n) {
    int i, j;
    int fat = 1;
    for(i=1; i<=n; i++) {
        resp[i]= i;
    }
    for(i=1;fat<=n; i++) {
     fat = fat*i;
     fatnums[i]=fat;
     fatqt++;
    }
    resp[0]=0;
    for(i=1; i<=n;i++) {
        for(j=0; j<fatqt && fatnums[j]<= i;j++) {
            if(resp[i-fatnums[j]]+1 < resp[i]) {
                resp[i] = resp[i-fatnums[j]]+1;
            }
        }
    }
}

int main(){
    int n;
    
    scanf(" %d", &n);
    preproc(n);

    
    printf("%d\n", resp[n]);
}