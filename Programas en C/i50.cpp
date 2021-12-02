#include<stdio.h>
#include<stdlib.h>

	int  i, sum, x, answ;
	
main(){
	
	for (sum=0; sum<=50; sum++)	
 	{
 		printf("Ingresa el valor de i \n");
	scanf("%d",&i);
	printf("Ingresa el valor de X \n");
	scanf("%d",&x);
	
	answ=i*5/x;
	
	printf("El resultado es:%d \n", answ);
	}
	return 0;
	
}
