#include <stdio.h>

int main(){
	int cod, quant;
	float valor;
	
	scanf("%d %d", &cod, &quant);
	system ("CLS");
	
	switch (cod){
		case 1:{
			valor = quant * 4.00;
			break;
		}
		
		case 2:{
			valor = quant * 4.50;
			break;
		}
		
		case 3:{
			valor = quant * 5.00;
			break;
		}
		
		case 4:{
			valor = quant * 2.00;
			break;
		}
		
		case 5:{
			valor = quant * 1.50;
			break;
		}
	}
	
	printf("Total: R$ %.2f\n", valor);
	
	return 0;
}
