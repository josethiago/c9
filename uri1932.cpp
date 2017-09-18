#include <cstdio>
#define MAX 60

using namespace std;

int n, pd[MAX], v[MAX], custo, maior=0, ini;

int main(){
    
    scanf(" %d", &n);
    maior=0;
    scanf(" %d", &custo);
    
    for(int i=0;i<n;i++){
        scanf(" %d", &v[i]);
    }
    
    pd[0] = v[0];
    if(pd[0]>maior) maior = pd[0];
    
    for(int i=1;i<n;i++){
       pd[i] = v[i];
       if(pd[i-1]>0) pd[i] = pd[i]+pd[i-1]-custo;
       if(pd[i]>maior) maior = pd[i]-v[i];
    }
   printf("%d\n", maior);
    
}