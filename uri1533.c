#include <stdlib.h>
#include <stdio.h>
 
int comparetor (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

int main(){
    
    int i, c, aux[10001], nums[10001];
    
    while(1){
    
        scanf(" %d", &c);
        if(c==0) break;
        
        for(i=1;i<=10001;i++){
            nums[i]=0;
            aux[i]=0;
        }
    
        for(i=1;i<=c;i++){
            scanf(" %d", &nums[i]);
            aux[nums[i]]=i;
        }
        
        qsort (nums, 10001, sizeof(int), comparetor);
        
        printf("%d\n", aux[nums[1]]);
        
    }
}