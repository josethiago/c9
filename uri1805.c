#include <stdio.h>

int main(){
    unsigned long long s=0, l1, l2, i;
    
    scanf(" %llu %llu", &l1, &l2);
    i=l2-l1;
    s =((l1+l2)*(i+1))/2;
    
    printf("%lli\n", s);
}