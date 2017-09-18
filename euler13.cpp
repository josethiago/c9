#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int vet[200], vet2[51], i, a=1, carry=0;
	char lt[55], ld[55];
    int nd;
	scanf("%s", lt);
	for(i=0;i<50;i++){
			vet[i] = lt[49-i]-'0';
		}
	nd = 50;
		for(i=nd-1;i>=0;i--)
		{
		printf("%d",vet[i]);
		}	
		printf("\n");
	
	while(a<=99){
		scanf("%s", ld);
		//proximo num
		for(i=0;i<50;i++){
			vet2[i] = ld[49-i]-'0';
		}
		for(i=49;i>=0;i--)
		{
		//printf("%d",vet2[i]);
		}	
		//printf("\n");
		
		
		carry = 0;
		//soma
		for(i=0;i<50;i++){
			int v = vet[i]+vet2[i]+carry;
			vet[i] = v%10;
			carry  = v/10;
		}
		while(carry) {
			int v = vet[i]+carry;
            vet[i] = v%10;
            carry = v/10;
            if(i>=nd) {
            	nd = i+1;
            	printf("nd = %d\n", nd);
            }
            i++;
		}
			for(i=nd-1;i>=0;i--)
		{
		printf("%d",vet[i]);
		}	
		printf("\n");
		a++;
	}
		for(i=nd-1;i>=0;i--)
		{
		printf("%d",vet[i]);
		}
}
