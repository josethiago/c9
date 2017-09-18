#include <iostream>

using namespace std;

int main(){
    
    int n, a[10], b;
    
    cin >> n;
    
    for(int i = 0;i<10;i++){
        
        a[i] = n;
        n*=2;
        
    }
    
    for(int i = 0;i<10;i++){
     
        cout <<"N["<< i << "] = " << a[i] << endl;
         
    }
}