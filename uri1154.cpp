#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int con=0, le;
    double ac=0;
    
    while(1){
        
        cin >> le;
        
        if(le<0) break;
        
        ac+=le*1.0;
        con++;
    }
    ac=ac/con;
    cout << fixed << setprecision(2) << ac << endl;
}