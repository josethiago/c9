#include <cstdio>
#include <string>

using namespace std;

int main(){
    
    int vet[64], i, a, n, j;
    string led;
    
    cin >> n;
    
    for(j=0;j<n;j++){
     
        cin >> led;
        
        for(int k=0;k<61;k++){
        
        vet[k]=0;
        
        }
        
        for(i=0;i<n;i++){
            if(led[i]=='O') vet[i]=1;
        }
        
        
    }
}