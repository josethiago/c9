#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char ini[502], fin[502];
    int i, k, j=0, c=0, l, m;
    
    scanf(" %s %s", ini, fin);
    
    while(1){
        if(ini[0]-'*'==0) break;
        l = strlen(ini); 
        j=0;c=0;m=0;
        while(2){
            if(ini==fin) break;
            for(i=0;i<l;i++){
                if(ini[i]!=fin[i]){
                    j=i;
                    //cout << "* " << j;
                }
            }
            for(i=m;i<=j;i++){
                
            }
        }
        cout << ini << endl;
        scanf(" %s %s", ini, fin);
    }
}