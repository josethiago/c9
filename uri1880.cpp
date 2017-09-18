#include <cstdio>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

int ca, le, base, cap[16], aux, res, con, si=0;;
string nor, ax, inv;

int main(){
    
    scanf("%d", &ca);
    
    for(int i=0;i<ca;i++){
        scanf("%d", &le);
        for(base=2; base<=16;base++){
            cap[base]=0;
            aux = le;
            res=0;
            con=0;
            while(1){
                if(aux==0){break;}
                else{
                    res=aux%base;
                    aux/=base;
                    ax=to_string(res);
                    nor=nor+ax;
                }
            }
            
            si=nor.length();
            for (std::string::reverse_iterator rit=nor.rbegin(); rit!=nor.rend(); ++rit){
                inv+=*rit;
            }
           
            cout <<"base :"<< base << ";  nor :" <<  nor << "; inv :"<< inv << endl;
            if(nor.compare(inv)==0){
            //cout << nor << " ";
            }
            nor=""; inv="";
            
        }
        cout << endl;
    }
}