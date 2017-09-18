#include <stdio.h>
#include <string>

int a=0, b=0, c=0, d=0,e=-1, vet[1000], med=0;


int busca(int in,int fi,int val, int found){
   // printf("%d a %d\n", in,fi);
    if(in>=fi){
        
    return found;

    }
    med=(in+fi)/2;
    //printf("S %d\n", med);
    if(vet[med]==val){
        return busca(in,med,val,med);

    }
    else if(vet[med]<val){
       
       return  busca(med+1,fi,val,found);
        
    }
    else if(vet[med]>val){
        
        
       return  busca(in,med,val,found);
        
    }
    
}

int main(){
       
      scanf("%d %d",&a, &b);
       
      for(c=0;c<a;c++) {
      
        scanf("%d", &vet[c]);
          
      }
      
      for(c=0;c<b;c++){
      
      scanf("%d", &d);
      
      printf("%d\n", busca(0, a, d,-1));
      
      }
    
}

