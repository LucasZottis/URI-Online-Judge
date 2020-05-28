#include <stdio.h>

int main(){
	float distancia, litros;
	int tempo, vm;
	scanf("%d", &tempo);
	scanf("%d", &vm);
	system("CLS");
	distancia = tempo * vm;
	litros = distancia/12;
	printf("%.3f\n", litros);
	return 0;
}
