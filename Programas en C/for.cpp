#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	
    int Tabla, i, res;
    
    system("cls");
    printf ("Indique la tabla que desea conocer (de 1 a 10): ");
    scanf ("%d", &Tabla);
    i=1;
	while(i<11){
	res=Tabla*i;
	printf ("%d * %d = %d \n",Tabla, i, res);
	i++;
	   }
    return 0; 
          }


   
