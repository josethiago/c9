#include <stdio.h>

int main(){
    
    int jog[503], j=0, r=0, acu=0, i=0, k=0, l=0;
    
    scanf(" %d %d", &j, &r);
    
    for(i=1;i<=j;i++){
        jog[i]=0;     
    }
    
    for(i=1;i<=r;i++){
        for(k=1;k<=j;k++){
            scanf(" %d", &acu);
            jog[k]+=acu;
        }
    }
    acu=0;
    for(i=1;i<=j;i++){
        if(jog[i]>=acu){ acu=jog[i]; l=i;}
        //printf("%d %d\n", l, jog[i]);
    }
    
    printf("%d\n", l);
}