#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double l=-1, l2=-1;
    int c;
    
    while(1){
        while(2){
            cin >> l;
            if(l>=0 && l<=10) break;
            else cout << "nota invalida\n";
        }
        while(3){
            cin >> l2;
            if(l2>=0 && l2<=10) break;
            else cout << "nota invalida\n";
        }
        cout << fixed << setprecision(2) << "media = "<< (l+l2)/2 << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> c;
        if(c==2) break;
    }
}