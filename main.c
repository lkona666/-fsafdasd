
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double a,b,c;
	double x1,x2,d;
	
	while (1){
		printf("vvedite a:\n");
		scanf("%lf", &a);
	
		printf("vvedite b:\n");
		scanf("%lf", &b);
	
		printf("vvedite c:\n");
		scanf("%lf", &c);
	
		d = pow(b,2) - 4*a*c;
	
		if (d < 0) printf("kornei net\n");
		
		if (d == 0) {
			x1 = (-b)/(2*a);
			printf("only one root x = %lf\n", x1);
		}
		
		if (d > 0) {
			x1 = (-b - sqrt(d))/(2*a);
			x2 = (-b + sqrt(d))/(2*a);
		
			printf("x1 = %lf\n", x1);
			printf("x2 = %lf\n", x2);
			printf("d = %lf\n", d);
		}
	}
	
	
	
	return 0;
}