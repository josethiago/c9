#include <stdio.h>

int x1=1,x2=1,Y1=1,y2=1, mov,i;

int main(){
    
       
    while(x1!=0 && x2!=0 && Y1!=0 && y2!=0){
        
     scanf(" %d %d %d %d",&x1,&Y1,&x2,&y2 );
        
        if(x1==0 && x2==0 && Y1==0 && y2==0){}
        else if(x1==x2 && Y1==y2){
            
            printf("0\n");
            
        }
        else if(x1==x2 || Y1==y2){
            
            printf("1\n");
            
        }
        else if(x1-x2==Y1-y2 || x2-x1==Y1-y2 || x1-x2==y2-Y1 || x2-x1==y2-Y1){
            
            printf("1\n");
            
        }
        /*else if(x1-x2== || Y1-y2==){
            
            printf("1\n");
            
        }
        else if(x2-x1==0 || y2-Y1==0){
            
            printf("1\n");
            
        }
        else if(x2-x1==1 || y2-Y1==1){
            
            printf("1\n");
        }
        */    
        
        else{
            
            printf("2\n");
            
        }
  
    }
    
}