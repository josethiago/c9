#include <iostream>

using namespace std;

int main(){
    
    int vet[10], le; 
    
    for(int i=0;i<10;i++) {
        
        cin >> le;
        
        if(le>0) vet[i] = le;
        else vet[i]=1;    
        
    }
    
    for(int i=0;i<10;i++) {
        
        cout << "X[" << i << "] = " << vet[i] << endl;
        
    }
    
    return 0;
}