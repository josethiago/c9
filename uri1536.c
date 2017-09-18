#include <stdio.h>

int i, m1, m2, v1, v2, n, m, p1, p2;

int main (){
    
    scanf(" %d", &n);
    
    for(m=0;m<n;m++){
        p1=0;
        p2=0;
        scanf(" %d x %d", &m1, &v2);
        scanf(" %d x %d", &m2, &v1);
        //printf("\n %d x %d", m1, v2);
        //printf(" %d x %d", m2, v1);
        
        if(m1 > v2) p1+=3;
        else if(m1 < v2) p2+=3;
        else if(m1 == v2) {p1++; p2++;}
        if(m2 > v1) p2+=3;
        else if(m2 < v1) p1+=3;
        else if(m2 == v1) {p1++; p2++;}
        if(p1>p2) printf("Time 1\n");
        else if(p2>p1) printf("Time 2\n");
        else{
            if((m2+v2) > (m1+v1)) printf("Time 2\n");
            else if((m2+v2) < (m1+v1)) printf("Time 1\n");
            else if((m2+v2) == (m1+v1)) {
                if(v2 > v1) printf("Time 2\n");
                else if(v1 > v2) printf("Time 1\n");
                else printf("Penaltis\n");
            }
        }
    }
    
}