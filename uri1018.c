#include <stdio.h>

int main(){
    int s=0, l1, l2, i, c100, c50, c20, c10, c5, c2, c1;
    
    scanf(" %d", &l1);
    l2=l1;
    
    c100 = l1/100;
    l1=l1%100;
    c50 = l1/50;
    l1=l1%50;
    c20 = l1/20;
    l1=l1%20;
    c10 = l1/10;
    l1=l1%10;
    c5= l1/5;
    l1=l1%5;
    c2 = l1/2;
    l1=l1%2;
    c1 = l1/1;
    l1=l1%1;
    
    printf("%d\n", l2);
    printf("%d nota(s) de R$ 100,00\n", c100);
    printf("%d nota(s) de R$ 50,00\n", c50);
    printf("%d nota(s) de R$ 20,00\n", c20);
    printf("%d nota(s) de R$ 10,00\n", c10);
    printf("%d nota(s) de R$ 5,00\n", c5);
    printf("%d nota(s) de R$ 2,00\n", c2);
    printf("%d nota(s) de R$ 1,00\n", c1);
}