#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(){
	double a, b, c, area_tri, area_circ, area_trap, area_quad, area_ret;
	scanf("%lf %lf %lf", &a, &b, &c);
	system("CLS");
	area_tri = (a*c)/2;
	area_circ = pi * pow(c, 2);
	area_trap = ((a+b) * c) / 2;
	area_quad = pow(b, 2);
	area_ret = a*b;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", area_tri, area_circ, area_trap, area_quad, area_ret);
	return 0;
}
