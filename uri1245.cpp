#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
    
    int par[10000], i=0, j=0, le=0, c=0, d=0, lo[10000];
    char p;
    string l;
    
    while(scanf(" %d", &le)!=EOF){
        d=0;
        for(i=29;i<=62;i++){
            lo[i]=0;
            par[i]=0;
        }
        for(i=0;i<le;i++){
            cin >> c >> p;
            lo[c]=1;
            if(p=='D'){
                if(par[c]<0) d++;
                par[c]++;
                //cout << c << " " << par[c] << endl;
            }
            else {
                if(par[c]>0) d++;
                par[c]--; 
                //cout << c << " " << par[c] << endl;
            }
        }
        for(i=30;i<=60;i++){
            //if(par[i]==0 && lo[i]==1) d++;
        }
        cout << d << endl;
    }
}