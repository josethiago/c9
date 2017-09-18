#include <stdio.h>

int a, b;

int main(){
    
   scanf(" %d %d", &a, &b);
   
   if(a>=0 && b<=2) printf("nova\n");
   else if(a>=97 && a<=100 && b<=100 && b>=97 && a<b) printf("cheia\n");
   else if(a>=3 && a<=96 && b<=96 && b>=3 && a<b) printf("crescente\n");
   else printf("minguante\n");
}