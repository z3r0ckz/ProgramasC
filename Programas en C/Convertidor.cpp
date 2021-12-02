#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//int contador, pesos;
float dolares,euros,yenes,contador;

main(){
	system("cls");
	printf("Pesos \t Dolares \t Euros \t \t Yenes \n 1 \t 0.055 \t \t 0.047 \t \t 6.026 \n");

for(contador=5;contador<=500;contador+=5){
	dolares=contador/18; //dolares=contador*0.055
	euros=contador/21; //euros=contador*0.047
	yenes=contador*0.026;
	
printf("%f \t %f \t %f \t %f \n",contador,dolares,euros,yenes);
}

getchar();
getchar();
}
