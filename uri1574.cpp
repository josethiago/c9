#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n, c, vet[103], k, i, j, t=0, v, a, b;
    string com, ae;
    
    cin >> c;
    
    for(k=0;k<c;k++){
        cin >> v;
        t=0;
        for(j=0;j<103;j++){
            vet[j]=0;
        }
        for(j=0;j<=v;j++){
            getline (cin,com,'\n');
            //cout << com << ". ";
            if(com=="LEFT"){
                t--;
                //cout << "-" << endl;
                vet[j]=-1;
            }
            else if(com=="RIGHT"){
                t++;
                //cout << "+" << endl;
                vet[j]=1;
            }
            else if(com.empty()){
            }
            else{
                b =-1+ com.length();
                ae = com.at(b);
                a = stoi(ae);
                t+=vet[a];
                //cout << vet[a] << endl;
                vet[j]=vet[a];
            }
        }
        cout << t << endl;
    }
   
}