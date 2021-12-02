#include<stdio.h>
#define tam 3 

void sumarMatriz(int **&ptrmatriz){	
printf("\n estamos en la funcion sumarMatriz\n");

for(int i=0; i<tam; i++){
	for(int j=0; j<tam; j++){
		printf("%d \t",ptrmatriz[i][j]);
	}
	printf("\n");
}
}





int main(){
	int matriz_a_llenar[tam][tam];
	int *ptrmatriz[3];
	int **q;
	//Ingresamos los elementos de la matriz 1
	printf("Ingresa los elementos de una matriz de 3x3\n\n");
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			printf("Dame el valor de [%d][%d]=",i,j);
			scanf("%d",&matriz_a_llenar[i][j]);
		}
	} 
	
	//Copiamos los elementos de la matriz1 al arreglo de apuntadores
	
	for(int i=0; i<tam;i++){
		ptrmatriz[i]=matriz_a_llenar[i];
	}	 
	//q apunta al vector ptrmatriz
	q=ptrmatriz;
	sumarMatriz(q);	
	return 0; 
}
