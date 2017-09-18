#include <stdio.h>

int main(){
    
    int n, a=0;
    
    scanf(" %d", &n);
    
    if(n==1){
        printf("Top 1\n");
        a++;
    }
    else if(n<=3){
        printf("Top 3\n");
        a++;
    }
    else if(n<=5 && a==0){
        printf("Top 5\n");
        a++;
    }
    else if(n<=10 && a==0){
        printf("Top 10\n");
        a++;
    }
    else if(n<=25 && a==0){
        printf("Top 25\n");
        a++;
    }
    else if(n<=50 && a==0){
        printf("Top 50\n");
        a++;
    }
    else{
        printf("Top 100\n");
        a++;
    }
}