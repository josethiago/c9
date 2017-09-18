#include <iostream>
#include <stdlib.h>

using namespace std;

double compare (const double * a, const double * b)
{
  return ( *(double*)a - *(double*)b );
}

int main(){
    
    double l1, l2, l3, aux[3];
    
    cin >> l1 >> l2 >> l3;
    
    aux[0]=l1;
    aux[1]=l2;
    aux[2]=l3;
    
    qsort(aux,3,sizeof(int),compare);
    
    l1=aux[0];
    l2=aux[1];
    l3=aux[2];
    
    cout << l1 << l2 << l3;
}