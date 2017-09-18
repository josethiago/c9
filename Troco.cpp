#include <iostream>

using namespace std;

int main(){
    
    int n, n100, n50, n20, n10, n5, n2, n1, t, a, i;
    
    cin >> n;
    
    for(i=0;i<n;i++){
        
        cin >>  n100 >> n50 >> n20 >> n10 >> n5 >> n2 >> n1 >> t;
        
        if(t>=100){ 
            a=t/100; 
            if(a>=n100){
                n100-=a;
                t-=(a*100);
            } 
            cout << "100 " << t << endl;
        }
        if(t>=50){
            a=t/50;
            if(a>=n50){
                n50-=a;
                t-=(a*50);
            }
            cout << "50 " << t<< endl;
        }
        if(t>=10){ 
            a=t/10; 
            if(a>=n10){
                n10-=a;
                t-=(a*10);
            }
            cout << "10 " << t<< endl;
        }
        if(t>=5){
            a=t/5;
            if(a>=n5){
                n5-=a;
                t-=(a*5);
            }
            cout << "5 " << t<< endl;
        }
        if(t>=1){ 
            a=t/1;
            if(a>=n1){
                n1-=a;
                t-=(a*1);
            }
            
            cout << "1 " << t<< endl;
        }
        
        if(t>0) cout << t << " NAO\n";
        else cout << "SIM\n";
    }
}