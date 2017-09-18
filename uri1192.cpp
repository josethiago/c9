#include <iostream>

using namespace std;

int a, i, n1, n2;
char le[2];


int main(){

    cin >> a;
    
    for(i=0;i<a;i++){
        
        cin >> le;
        
        n1 = le[0] - 48;
        n2 = le[2] - 48;
        
        if(le[0]==le[2]) cout << n1*n2 << "\n";
        else if(le[1]>90) cout << n1+n2 << "\n";
        else cout << n2-n1 << "\n";
        
    }
    
}