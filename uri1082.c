#include <stdio.h>

int n,v,e,a,cor[27],pai[27],d[27],f[27],con[27][27],temp,count, imprimir[27];
char l1,l2;

int main(){
    int j, k, i;
    
    scanf(" %d", &n);
    for(i=0;i<n;i++){
        count=0;
        
        scanf(" %d %d",&v, &e);    
        for(j=0;j<27;j++){
            for(k=0;k<27;k++){
                con[j][k]=0;
                pai[k]=-1;
                cor[k]=-1;
            }
        }    
        for(j=0;j<e;j++){
            
            scanf(" %c %c",&l1,&l2);
            l1= l1-'a';
            l2= l2-'a';
            
            con[l1][l2]=1;
            con[l2][l1]=1;
        }
        temp=0;
        printf("Case #%d:\n", (i+1));
        for(j=0; j<v; j++) {
            if(cor[j]==-1) {
                for(k=0; k<27; k++) {
                    imprimir[k]=0;
                }
                dfs_visit(j);
                for(k=0; k<27; k++) {
                    if(imprimir[k]==1) {
                        printf("%c,",(k+'a'));
                    }
                }
                printf("\n");
                count++;
            }
        }
        printf("%d connected components\n\n", count);
    }
}

int dfs_visit(int u){
    int i;
    imprimir[u]=1;
    cor[u]=0;
    temp++;
    d[u]=temp;
    for(i=0;i<27;i++) {
        if((con[u][i]==1 || con[i][u]==1) && cor[i]==-1) {
            pai[i]=u;
            dfs_visit(i);
        }
    }
    cor[u]=1;
    temp++;
    f[u]=temp;
}