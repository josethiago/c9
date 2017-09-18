#include <cstdio>
#include <cmath>

int main(){
    
    int d, c, a, b, e;
    
    scanf(" %d", &a);
    
    for(b=0;b<a;b++){
        c=0;d=0;e=0;
        scanf(" %d %d", &c, &d);
        e=pow(26,c)*pow(10,d);
        if(c==0 && d==0) {printf("0\n");}
        else {printf("%d\n", e);}
    }
}