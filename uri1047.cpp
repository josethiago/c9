#include <iostream>

using namespace std;

int main(){
    
    int h1, h2, m1, m2, aux1, aux2;
    
    cin >> h1 >> m1 >> h2 >> m2;
    
    aux1 = h2 - 1;
    aux2 = h2 + 1;
    
    if(h1==h2 && m1==m2) cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    else if(h1 == h2 && m2>m1) cout << "O JOGO DUROU 0 HORA(S) E " << m2-m1 <<" MINUTO(S)\n";
    else if(h1 == h2 && m1>m2) cout << "*O JOGO DUROU 23 HORA(S) E " << 60-(m1-m2) <<" MINUTO(S)\n";
    else if(h1 == aux1 && m2>m1) cout << "O JOGO DUROU 0 HORA(S) E " << m2-m1 <<" MINUTO(S)\n";
    else if(h1 == aux1 && m1>m2) cout << "O JOGO DUROU 0 HORA(S) E " << 60-(m1-m2) <<" MINUTO(S)\n";
    else if(h1 == aux2 && m2>m1) cout << "O JOGO DUROU 0 HORA(S) E " << m2-m1 <<" MINUTO(S)\n";
    else if(h1 == aux2 && m1>m2) cout << "O JOGO DUROU 0 HORA(S) E " << 60-(m1-m2) <<" MINUTO(S)\n";
    else if(h1 > h2 && m2>m1) cout << "O JOGO DUROU " << (24-h1)+h2 <<" HORA(S) E " << m2-m1 <<" MINUTO(S)\n";
    else if(h1 > h2 && m2<m1) cout << "O JOGO DUROU " << (24-h1)+h2 <<" HORA(S) E " << 60-(m1-m2) <<" MINUTO(S)\n";
    else if(h1 < h2 && m2>m1) cout << "O JOGO DUROU " << h2-h1 <<" HORA(S) E " << m2-m1 <<" MINUTO(S)\n";
    else if(h1 < h2 && m2<m1) cout << "O JOGO DUROU " << h2-h1 <<" HORA(S) E " << 60-(m1-m2) <<" MINUTO(S)\n";
    
    return 0;
}