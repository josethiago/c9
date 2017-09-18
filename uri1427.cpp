#include <stdio.h>

using namespace std;

int  d[102][102][302];
int main(){
    
    int c, p, r,z,i,j,k;
    
    scanf("%d", &c);
    for(z=c;z>0;z--){
        scanf("%d", &p);
        
        for(i=0;i<p;i++){
            for(j=0;j<p;j++){
                for(k=0;k<=p;k++){
                    d[i][j][k]=-1;
                }
            }    
        }
        for(i=0;i<p;i++){
            for(j=0;j<p;j++){
                scanf("%d",&d[i][j][0]);
            }
        }
        for(k=1;k<p+1;k++){
            for(i=0;i<p;i++){
                for(j=0;j<p;j++){
                        d[i][j][k] = d[i][j][k-1];
                        if(d[i][j][k-1]==-1 && d[i][k-1][k-1]!=-1 && d[k-1][j][k-1]!=-1){
                            d[i][j][k] = d[i][k-1][k-1]+d[k-1][j][k-1];
                        }    
                        else if (d[i][j][k-1]!=-1 && d[i][k-1][k-1]!=-1 && d[k-1][j][k-1]!=-1 && d[i][j][k-1]>d[i][k-1][k-1]+d[k-1][j][k-1]){
                            d[i][j][k] = d[i][k-1][k-1]+d[k-1][j][k-1];
                        }
                        /*if(k==p){ 
                            printf("%d -", d[i][j][k]);
                            printf("\n%d %d %d",i,j,k);
                        }*/
                    }
                if(k==p)
                    printf("\n");
            }
        }
    }
}