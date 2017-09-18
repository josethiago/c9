#include <iostream>

using namespace std;

int main(){
    
    int le=0, maior=0, pos=0;
    
    for(int i=0;i<100;i++){
        
        cin >> le;
        
        if(le>=maior) {
            
            maior = le;
            pos = i+1;
            
        }
        
    }
    
    cout << maior << "\n" << pos << "\n";
    
    return 0;
}