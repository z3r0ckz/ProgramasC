#include<stdio.h>
#include<stdlib.h>

	float area;
	int  b, h;
	
main(){
	
	while (area<=10)	
 	{
	printf("Ingresa el valor de b \n");
	scanf("%d",&b);
	printf("Ingresa el valor de h \n");
	scanf("%d",&h);
	
	area=b*h/2;
	
	}
	printf("El resultado de el area del triangulo es %f",area);
	
	return 0;
	
}
