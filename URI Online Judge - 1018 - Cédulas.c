#include <stdio.h>

int main(){
	int n, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1, resto, total;
	scanf("%d", &n);
	
	system("CLS");
	
	nota_100 = n / 100;
	resto = n % 100;
	
	nota_50 = resto / 50;
	resto = resto % 50;
	
	nota_20 = resto / 20;
	resto = resto % 20;
	
	nota_10 = resto / 10;
	resto = resto % 10;
	
	nota_5 = resto / 5;
	resto = resto % 5;
	
	nota_2 = resto / 2;
	resto = resto % 2;
	
	nota_1 = resto / 1;
	resto = resto % 1;
	
	printf("%d\n", n);
	printf("%d nota(s) de R$ 100,00\n", nota_100);
	printf("%d nota(s) de R$ 50,00\n", nota_50);
	printf("%d nota(s) de R$ 20,00\n", nota_20);
	printf("%d nota(s) de R$ 10,00\n", nota_10);
	printf("%d nota(s) de R$ 5,00\n", nota_5);
	printf("%d nota(s) de R$ 2,00\n", nota_2);
	printf("%d nota(s) de R$ 1,00\n", nota_1);
	return 0;
}
