#include <stdio.h>
#include <string>

int vet[102][102], lig[102][102], n=0, v=0, a=0, b=0, c=0, d=0,e=0,f=1,g;
char c1,c2;

int main(){
    scanf("%d", &n);
    while(e<n){
        scanf("%d %d", &v, &a);
    
        for(d=0;d<v;d++){
            for(c=0;c<v;c++){
            vet[d][c]=0;
            }
        }
    
        for(c=0;c<a;c++){
        
            scanf("%s %s", &c1, &c2);
            
            
            vet[c1-97][c2-97]=1;
            vet[c2-97][c1-97]=1;
            
            
        }
        
        printf("Case#%d\n", f);
        
        for(d=0;d<v;d++){
            for(c=0;c<v;c++){
                
                if(vet[d][c]==1){
                    
                    printf("%c,", d+97);
                    
                }
            
            }
        }
        printf("\n");
        f++;
        e++;
    }
    
    
}