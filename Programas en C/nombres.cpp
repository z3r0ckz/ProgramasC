#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Variables globales //

char name[5];
int x,comp,i;

main(){
	
	printf("Ingrese 5 nombres para ver cual es el mas largo: \n");
	for (x=0;x<5;x++){
	printf("Ingrese nombre:  ");
	scanf("%s",& name[x]);
	}
	printf("El nombre mas largo es: \n",name);
  return(0);

}


