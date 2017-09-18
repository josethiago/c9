#include <iostream>

using namespace std;

int main(){
    
    int le1, le2, aux;
    
    cin >> le1 >> le2;
    
    if(le1==le2) cout << "O JOGO DUROU 24 HORA(S)\n";
    else if(le1 < le2) cout << "O JOGO DUROU "<< (le2-le1) <<" HORA(S)\n";
    else cout << "O JOGO DUROU "<< (24-le1)+le2 <<" HORA(S)\n";
    
    return 0;
}