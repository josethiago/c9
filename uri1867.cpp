#include <iostream>
#include <string>

using namespace std;

int a=0, b=0,ax,az, an, am,c=0;

string n1, n2, an1, an2;

int main(){
    
   
    
    while(1){
        cin >> n1 >> n2;
        if(!n1.compare("0") && !n2.compare("0")) {break;}
        ax=n1.length();
        az=n2.length();
        while(2){
            c++;
            //cout << "entrou\n";
        
            //cout << n1 << " " << n2 << endl;
            if(ax>1){
                a=0;
                for(int i=0;i<ax;i++){
                    an1= n1.at(i);
                    an = stoi (an1);
                    a = a+an;
                    //cout << a << " " << i << endl;
                }
                n1 = to_string(a);
            }
            if(az>1){
                b=0;
                for(int i=0;i<az;i++){
                    an2= n2.at(i);
                    am = stoi (an2);
                    b = b+am;
                    //cout << b << " " << i << endl;
                }
                n2 = to_string(b);
            }
            
            
            ax=n1.length();
            az=n2.length();
            
            //cout << n1 << " " << n2 << " " << ax << " " << az << endl;
            if(ax<2 && az<2 || c==10) {break;}
            
        }
        //cout << "saiu\n";
        a = stoi(n1);
        b = stoi(n2);
        if(a>b){
            cout << "1\n";
        }
        else if(b>a){
            cout << "2\n";
        }
        else{ 
            cout << "0\n";
        }
        n1="";n2="";an1="";an2="";
        a=0;b=0;an=0;am=0;ax=0;az=0;
    }
}