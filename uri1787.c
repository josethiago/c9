#include <stdio.h>
#include <math.h>

int ui, ri, ii, i, n, u, r, i;

int main(){
    
    while(1){
        scanf(" %d", &n);
        if(n==0) break;
        ui=0;ri=0;ii=0;u=0;r=0;i=0;
        for(i=0;i<n;i++){
            
            scanf(" %d %d %d", &ui, &ri, &ii);
            printf("%d %d %d\n", ui, ri, ii);
            
            if((int)sqrt(ui)%2==0) {
                u++;
                if(ui>ri && ui>ii) {
                    u++;
                }
            }
            if((int)sqrt(ri)%2==0) {
                r++;
                if(ri>ui && ri>ii) {
                    r++;
                }
            }
            if((int)sqrt(ii)%2==0) {
                i++;
                if(ii>ri && ii>ui) {
                    i++;
                }
            }
        }
        printf("u=%d  r=%d  i=%d\n",u,r,i);
        if(u>r && u>i) printf("Uilton\n");
        else if(r>u && r>i) printf("Rita\n");
        else if(i>r && i>u) printf("Ingred\n");
        else printf("URI\n");
    }
    
}