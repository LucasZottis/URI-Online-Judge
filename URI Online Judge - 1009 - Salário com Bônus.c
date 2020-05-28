#include <stdio.h>

int main(){
	char nome[16];
	double salario, vendido, salario_total;
	gets(nome);
	setbuf(stdin, NULL);
	scanf("%lf", &salario);
	scanf("%lf", &vendido);
	system("CLS");
	salario_total = salario + (vendido * 0.15);
	printf("TOTAL = R$ %.2lf\n", salario_total);
	return 0;
}
