#include <stdio.h>

int main(){
	int x;
	float y, cm;
	scanf("%d", &x);
	scanf("%f", &y);
	system("CLS");
	cm = x/y;
	printf("%.3f km/l\n", cm);
	return 0;
}
