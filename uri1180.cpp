#include <iostream>

using namespace std;

int main(){
    
    int n, aux, menor=0, pos=0;
    
    cin >> n;
    
    //int vet[n];
    
    for(int i=0;i<n;i++){
        
        //cin >> vet[i];
        cin >> aux;
        
        if(aux<menor){ menor = aux; pos = i;}
        
    }
    
    cout << "Menor valor: " << menor << endl << "Posicao: " << pos << endl;
    
    return 0;
}