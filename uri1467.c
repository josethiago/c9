#include <stdio.h>

int a, b, c;


int main(){
 
    while(scanf(" %d %d %d", &a, &b, &c) != EOF){
        
        if(a==b && b==c){
            printf("*\n");
        }
        else if(a!=b && b==c) printf("A\n");
        else if(a==c && b!=c) printf("B\n");
        else printf("C\n");
    }
    
}