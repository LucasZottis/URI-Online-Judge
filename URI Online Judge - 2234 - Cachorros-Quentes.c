#include <stdio.h>
int main(){
    int h,p;
    float media;
	scanf("%d%d",&p,&h);
	system("CLS");
	if((h >= 1) && (p <= 1000)){
    	printf("%.2f\n",media=(float)p/h);
	}
	return 0;
}
