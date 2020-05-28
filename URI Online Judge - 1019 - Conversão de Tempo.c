#include <stdio.h>

int main(){
	int seg, min, hora, resto, i;
	scanf("%d", &seg);
	system("CLS");
	
	hora = seg / 3600;
	resto = seg % 3600;
	min = resto / 60;
	seg = seg % 60;
		
	printf("%d:%d:%d\n", hora, min, seg);
	return 0;
}
