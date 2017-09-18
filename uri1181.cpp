#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double mat[12][12], c;
    int l;
    char op;
    
    cin >> l >> op;
    
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
        
            cin >> mat[i][j];
            //cout << mat[i][j] << " ";
        }
        //cout << endl;
    }
    
    //cout << endl;
    if(op=='S'){
        
        for(int i=0;i<12;i++){
            
            c+=mat[l][i]*1.0;
            //cout << mat[l][i] << " ";
            
        }
        cout << fixed << setprecision(1) << c << endl;
        
    }
    else if(op=='M'){
        
        for(int i=0;i<12;i++){
            
            c+=mat[l][i];
            //cout << mat[l][i] << " ";
            
        }
        c/=12;
        cout << fixed << setprecision(1) << c << endl;
    }
    
    return 0;
}