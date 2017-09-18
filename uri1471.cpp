#include <iostream>

using namespace std;

int main(){
    
    int n, r, m[10005], l, i,c=0;
    
    while(cin >> n >> r){
        c=0;
        
        for(i=1;i<=n;i++){
            m[i]=0;
        }
        
        for(i=1;i<=r;i++){
            cin >> l;
            m[l]=1;
            //cout << l << " ";
        }
        
        /*for(i=1;i<=n;i++){
            cout << m[i] << " ";
            
        }
        cout << endl;*/
        for(i=1;i<=n;i++){
         
            if(m[i]==0){
                cout << i << " ";
                c++;
            }
        }
        if(c==0){
          cout << "*"; 
        }
        cout << endl; 
    }
}