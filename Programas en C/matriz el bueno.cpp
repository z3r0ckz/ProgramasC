
#include<stdio.h>

int a[3][3],b[3][3],c[3][3],i,j;

main(){
	printf("Este programa hace operaciones de 3x3");
	printf("introduce valores de la matriz a:");
	
	for(i=1;i<=3;i++){
		
		for(j=1;j<=3;j++){
			printf("\n (%i,%i): ",i,j); 
				scanf("%d", &a[i][j]);
		}
	}
	printf("introduce valores de la matriz b:");
	
	for(i=1;i<=3;i++){
		
		for(j=1;j<=3;j++){
			printf("\n(%i,%i): ",i,j); 
				scanf("%d", &b[i][j]);
			
		}}
		printf("la suma de las 2 matrices a+b=es: \n");
		for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++) 
		c[i][j]=a[i][j]+b[i][j];
	
    }
    for(i=1;i<=3;i++)
    {	
        for(j=1;j<=3;j++) 
				printf("% d ",c[i][j]);
        printf("\n");
    }
	printf("la resta de la matriz a-b=es: \n");
		for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++) 
		c[i][j]=a[i][j]-b[i][j];
	
    }
    
    for(i=1;i<=3;i++)
    {	
        for(j=1;j<=3;j++) 
				printf("% d ",c[i][j]);
        printf("\n");
    }
	printf("la multiplicacion de la matriz a*b=es: \n");
	for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++) 
		c[i][j]=a[i][j]*b[i][j];
	
    }
    for(i=1;i<=3;i++)
    {	
        for(j=1;j<=3;j++) 
				printf("% d ",c[i][j]);
        printf("\n");
    }
	printf("la division de la matriz a/b=es:  \n");
		for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++) 
		c[i][j]=a[i][j]/b[i][j];
	
    }
    for(i=1;i<=3;i++)
    {	
        for(j=1;j<=3;j++) 
				printf("% d ",c[i][j]);
        printf("\n");
    }
		}
			

