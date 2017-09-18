#include <iostream>
#include <iomanip>
#include <stdio.h>
#define EPS 0.0000000001

using namespace std;

int main(){
    
    int a, i=0, b;
    string nome;
    double t=0.0;
    
    while(getline(cin,nome)){
        
        //cout << nome << endl;
        
        cin >> a;
        //cout << a;
        i++;
        t+=a+EPS;
        b = getchar();
    }
    t=t/i;
    cout << fixed << setprecision(1) << t << endl;
}