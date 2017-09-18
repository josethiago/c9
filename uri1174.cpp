#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){
    
    double n, b[100];
    
    for(int i = 0;i<100;i++){
        
        //cin >> b[i];
        scanf("%lf ", &b[i]);
        
    }
    for(int i = 0;i<100;i++){
    
        if(b[i]<=10.0){
            
            printf("A[%d] = %.1lf\n", i, b[i]);    
            //cout << "A[" << i << "] = "<< b[i]*1.0 << endl;
          //  cout << setprecision() << b[i]*1.0 << endl;
            
        }    
        
    }
    return 0;
}