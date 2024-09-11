#include <stdio.h>
#include "nr.h"

void get_eps(float *eps){
	*eps = 1.f;
	while(1 + *eps != 1) {
		*eps /= 2;
	}
	*eps *= 2;	

}	

void get_double_eps(double *eps) {
	*eps = 1.0;
	while(1 + *eps != 1) {
		*eps /= 2;
	}
	*eps *= 2;	
}

int main(){
	int ibeta, it, irnd, ngrd, machep, negep, iexp, minexp, maxexp;
	float eps, epsneg, xmin, xmax;
	double deps, depsneg, dxmin, dxmax;	
	machar(&ibeta, &it, &irnd, &ngrd, &machep, &negep, &iexp, &minexp, &maxexp,
			&eps, &epsneg, &xmin, &xmax);
	printf("Machine Accuracy (machar): \t%0.23f\n", eps);

	get_eps(&eps);
	printf("Machine Accuracy (get_eps): \t%0.23f\n", eps);

	machar_double(&ibeta, &it, &irnd, &ngrd, &machep, &negep, &iexp, &minexp, &maxexp,
			&deps, &depsneg, &dxmin, &dxmax);
	printf("Machine Accuracy (machar_double): \t%0.52f\n", deps);
	get_double_eps(&deps);
	printf("Machine Accuracy (get_double_eps): \t%0.52f\n", deps);	
	return 0;
}

