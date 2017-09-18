#include <iostream>

using namespace std;

int main(){
    
    int n, sum, b;
    
    cin >> n;
    sum=n-1;
    
    while(sum!=1){
    
        n*=sum;    
        sum--;
    }
    
    cout << n << endl;
    
    return 0;
}