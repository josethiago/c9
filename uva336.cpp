#include <stdio.h>

int vet[35][35], li[35], fi[35], a, b, c, d, e, f=0, n=0, la;

int main(){
    
    scanf("%d", &a);
    
    while(a!=0){
        
    for(b=0;b<35;b++){
        for(c=0;c<35;c++){
            vet[b][c]=0;
        }
    }
    
    for(la=0;la<a;la++){
        
        scanf("%d %d", &b, &c);
        
        vet[b][c]=1;
        vet[c][b]=1;
        
        for(d=0;d<35;d++){
            
            if(li[d]==b){
                break;
            }
            if(li[d]!=b && li[d]==0){
                
                li[d]=b;
                n++;
                break;
            
            }
           
        }
        for(d=0;d<35;d++){
            
            if(li[d]==c){
                
                break;
                
            }
            if(li[d]!=c && li[d]==0){
                
                li[d]=c;
                n++;
                break;
            
            }
        }
          
    }
    
    printf("\n");
    scanf("%d %d", &b, &c);
    
    for(b!=0 && c!=0){
    
         scanf("%d %d", &b, &c);
         
         for(d=0;d<35;d++){
             
             if(vet[b][d]==1){
                 
                
            
             }
             
         }
         
    }
    
        scanf("%d", &a);
        
    }
}