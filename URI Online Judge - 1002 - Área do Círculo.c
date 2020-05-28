#include <stdio.h>
#include <math.h>
#define n 3.14159

int main(){
	double raio, area;
	area = 0;
	scanf("%lf", &raio);
	system("CLS");
	area = (pow(raio, 2)) * n;
	printf("A=%.4lf\n", area);
	return 0;
}
