#include <iostream>
#include <string>
#include <stdio.h>
#define MAX 800

using namespace std;

int col, lin, mat[MAX][MAX], var[MAX], l1, l2;
char vr[3];
int main(){
    
    cin >> col >> lin;
    
    for(int i=0; i<=col; i++){
        for(int j=0; j<=lin; j++){
                if(j==lin){
                    cin >> mat[i][j];
                }
                else if(i==col){
                    cin >> mat[i][j];
                }
                else{
                    cin >> vr;
                    l1 = vr[0]-'a';
                    l2 = vr[1]-'a';
                    mat[i][j] = l1-l2;
                    var[l1-l2]=0;
                }
        } 
    }
    
    for(int i=0; i<=col; i++){
        for(int j=0; j<=lin; j++){
            cout << mat[i][j] << " ";       
        }
    }
}