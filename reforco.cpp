#include <iostream>

using namespace std;

 int n, mat[102][102], d[102], f[102],k=0 ;

int busca(int u){
    d[u]=1;
    for(int i=0;i<n;i++) {
        if(mat[u][i]==1  && d[i]==0) {
            busca(i);
        }
    }
    d[u]=2;
    f[k]=u;
    k++;
}

int main(){
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin >> mat[i][j];
           //cout << mat[i][j] << " ";
        }
        d[i]=0;
        
        //cout << endl;
    }
    
    for(int i=0;i<n;i++){
        
        if(d[i]==0) busca(i);    
    }
    
    
    if(k==1){ cout << "NAO\n";}
    else{ cout <<"SIM\n";}
}