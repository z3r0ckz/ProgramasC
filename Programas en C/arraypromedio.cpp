#include <stdio.h>
#include <stdlib.h>

float res[45],alt[29],A[45],B[45],C[45],D[45],sum=0;
int x=6,i;
main(){
	for(i=0; i<=45;i++){
		printf("introduce el valor de A %d \n",i);
		scanf("%f",&A[i]);
		printf("introduce el valor de B %d \n",i);
		scanf("%f",&B[i]);
		printf("introduce el valor de C %d \n",i);
		scanf("%f",&C[i]);
		printf("introduce el valor de D %d \n",i);
		scanf("%f",&D[i]);
	}			//Luis Antonio Martinez flores//
	for(i=0;i<=45;i++){
		D[i]=C[i]+B[i];
		res[i]=A[1]*x;
		B[i]=C[i]-A[i];
	}
	for(i=0;i<29;i++){
		printf("introduce la Altura %d",i);
		scanf("%d",& alt[i]);
		sum+=alt[i];
	}
	sum=sum/29;
	printf("El promedio de la altura es: %f \n ",sum);
	for(i=0;i<=45;i++){
		printf("El valor de A[%f] : %f \n",i,A[i]);
		printf("El valor de B[%f] : %f \n",i,B[i]);
		printf("El valor de C[%f] : %f \n",i,C[i]);
		printf("El valor de D[%f] : %f \n",i,D[i]);
		printf("El resultado es[%f]: %f2331 \n",i,res[i]);
	}
	if(i<29){
		printf("El valor de Alt[%d]:%d \n",i,alt[i]);
	}
	getchar();
}	
