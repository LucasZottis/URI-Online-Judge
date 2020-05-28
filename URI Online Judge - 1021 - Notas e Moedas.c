#include <stdio.h>
#include <math.h>

int main(){
	float n, moeda_01, resto;
	int moeda_5, moeda_10, moeda_25, moeda_50, moeda_1, nota_2, nota_5, nota_10, nota_20, nota_50, nota_100;

	scanf("%f", &n);
	
	system("CLS");
	
	// Notas;
	nota_100 = n / 100;
	resto = fmod (n, 100);
	
	nota_50 = resto / 50;
	resto = fmod (resto, 50);
	
	nota_20 = resto / 20;
	resto = fmod (resto, 20);
	
	nota_10 = resto / 10;
	resto = fmod (resto, 20);
	
	nota_5 = resto / 5;
	resto = fmod (resto, 5);
	
	nota_2 = resto / 2;
	resto = fmod (resto, 2);
	
	// Moedas;
	moeda_1 = resto / 1;
	resto = fmod (resto, 1);
	
	moeda_50 = resto / 0.5;
	resto = fmod (resto, 0.5);
	
	moeda_25 = resto / 0.25;
	resto = fmod (resto, 0.25);
	
	moeda_10 = resto / 0.1;
	resto = fmod (resto, 0.1);
	
	moeda_5 = resto / 0.05;
	resto = fmod (resto, 0.05);
	
	moeda_01 = resto / 0.01;
	resto = fmod (resto, 0.01);
	
	printf("NOTAS:\n", n);
	printf("%d nota(s) de R$ 100.00\n", nota_100);
	printf("%d nota(s) de R$ 50.00\n", nota_50);
	printf("%d nota(s) de R$ 20.00\n", nota_20);
	printf("%d nota(s) de R$ 10.00\n", nota_10);
	printf("%d nota(s) de R$ 5.00\n", nota_5);
	printf("%d nota(s) de R$ 2.00\n", nota_2);
	
	printf("MOEDAS:\n"); 
	printf("%d moeda(s) de R$ 1.00\n", moeda_1);
	printf("%d moeda(s) de R$ 0.50\n", moeda_50);
	printf("%d moeda(s) de R$ 0.25\n", moeda_25);
	printf("%d moeda(s) de R$ 0.10\n", moeda_10);
	printf("%d moeda(s) de R$ 0.05\n", moeda_5);
	printf("%.f moeda(s) de R$ 0.01\n", moeda_01);
	
	return 0;
}
