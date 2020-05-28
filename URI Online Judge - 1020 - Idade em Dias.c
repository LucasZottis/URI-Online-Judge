#include <stdio.h>

int main(){
	int idade, dia, mes, ano, resto;
	scanf("%d", &idade);
	system("CLS");
	
	ano = idade / 365;
	resto = idade % 365;
	
	mes = resto / 30;
	resto = resto % 30;
	
	dia = resto;
	
	printf("%d ano(s)\n", ano, mes, dia);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);
	return 0;
}
