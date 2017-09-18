#include <stdio.h>

int main(){
    
    int n, la, lb, sa, sb;
    
    scanf(" %d", &n);
    scanf(" %d %d", &la, &lb);
    scanf(" %d %d", &sa, &sb);
    
    if(n<=lb && n>=la && n<=sb && n>=sa){
        printf("possivel\n");
    }
    else{
        printf("impossivel\n");
    }
}