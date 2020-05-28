#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(){
	double raio, volume;
	scanf("%lf", &raio);
	system("CLS");
	volume = (4/3.0) * pi * (pow(raio, 3));
	printf("VOLUME = %.3lf\n", volume);
	return 0;
}
