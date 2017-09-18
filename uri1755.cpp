#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int t, d, n, i, di;
    long double pre[303], ar=0, to =0;
    
    cin >> t;
    
    for(i=0;i<t;i++){
        cin >> d >> n;
        to=0;
        for(int j=0;j<n;j++){
            cin >> pre[j];
            di=(int)d/pre[j];
            //cout << "di " << di << endl;
            ar=pre[j];
            //cout << "ar " << ar << endl;
            if(di>0 && (double)d-((double)di*ar) > to){
                to = (double)d-((double)di*ar);
                
            }
        }
        cout << fixed << setprecision(2) << to << endl;
    }
}