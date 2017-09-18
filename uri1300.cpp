#include <iostream>

using namespace std;

int main(){
    
    int a, pos[10000], i, m=0, h=0, c=0, g=0;
    pos[0]=1;
    for(i=0;i<360;i++){
        m++;
        c++;
        if(c==12){
            h++;
            c=0;
        }
        if(h==12) break;
        if(m==60) m=0;
        if(m>h){
            g = m*6-h*6;
            //cout << g << " ";
            pos[g]=1;
        }
        else{
            g = 360-(m*6)-(h*6);
            //cout << g << " ";
            pos[g]=1;
        }
       //if(m%60==0) cout << endl;
    }
    

    while(cin >> a){
        
        if(pos[a]==1 || a==0) cout << "Y\n";
        else cout << "N\n";
        
    }
    
}