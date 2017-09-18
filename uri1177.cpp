#include <iostream>

using namespace std;

int main(){
    
    int n[1000], l, c=0;
    
    cin >> l;
    
    for(int i=0;i<1000;i++){
        
        if(c<l){
            
            n[i]=c;
            c++;
            
        }
        else{
            
            c=0;
            n[i]=c;
            c++;
        }
        
    }
    
    for(int i=0;i<1000;i++){
        
        cout << "N[" << i << "] = " << n[i] << endl;
        
    }
    
    return 0;
}