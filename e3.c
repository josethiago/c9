#include <stdio.h>

 int main(void)
 {
 	double r = 0.1, t = 0, te = 80, ta = 20, dt = 0.01;
 	int i, n = 200;
 	
 	for(i=1; i<=n ;i++){

 	    te = te - r * (te - ta) * dt;
 	    t = t + dt;
 		
 		printf("%f %f\n", t, te);
 		
 	}
 	
 	return 0;
 }