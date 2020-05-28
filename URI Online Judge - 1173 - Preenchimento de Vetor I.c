#include <stdio.h>
 
int main() {
	int n[10];
	int i,x;
	scanf("%d",&x);
	system("CLS");
	if(x <= 50){
		for (i = 0; i < 10; i++){
			n[i] = x;
			x = x * 2;
			printf("N[%d] = %d\n",i,n[i]);
		}
	}
    return 0;
}
