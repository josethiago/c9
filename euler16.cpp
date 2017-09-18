#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int vet[1100], i, a=0, carry=0,nd;
	char lt[1100];
	
	vet[0]=2;
	nd = 1;
    while(a<=998){
		
		carry = 0;
		//soma
		for(i=0;i<nd;i++){
			vet[i] = (vet[i]*2)+carry;
			carry  = vet[i]/10;
			vet[i] = vet[i]%10;
			
		}
		while(carry) {
			int v = vet[i]+carry;
            vet[i] = v%10;
            carry = v/10;
            if(i>=nd) {
            	nd = i+1;
            }
            i++;
		}
			
		a++;
	}
	int s  =0;
	for(i=0;i<nd;i++){
		s += vet[i];
	}
	printf("%d", s);
}
