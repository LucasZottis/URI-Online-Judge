#include <stdio.h>

int main(){
	int cod,hora;
	float valor_hora,salario;
	scanf("%d", &cod);
	scanf("%d", &hora);
	scanf("%f", &valor_hora);
	system("CLS");
	salario = valor_hora * hora;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", cod, salario);
	return 0;
}
