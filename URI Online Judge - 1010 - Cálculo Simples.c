#include <stdio.h>

int main(){
	int cod, n, cod2, n2;
	float valor, valor2, valor_total;
	scanf("%d %d %f", &cod, &n, &valor);
	scanf("%d %d %f", &cod2, &n2, &valor2);
	system("CLS");
	valor_total = (n*valor) + (n2*valor2);
	printf("VALOR A PAGAR: R$ %.2f\n", valor_total);
	return 0;
}
