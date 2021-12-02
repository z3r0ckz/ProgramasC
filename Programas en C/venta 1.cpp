# include <stdio.h>
# include <stdlib.h>

float bono, venta1, venta2, venta3, venta4, venta5, sueldo=7500, suelCBono;
int con=1;

main (){
	printf("introduce tu venta %d ,con");
	scanf("%f",&venta1);
	con++;
	if(venta1>=2000){bono=venta1*0.5;
					printf ("Bono : %f \n" ,bono);}
	
	printf("introduce tu venta %d ,con");
	scanf("%f",&venta2);
	con++;
	if(venta2>=2000)bono=bono+venta2*0.05;
	
	printf("introduce tu venta %d ,con");
	scanf("%f",&venta3);
	con++;
	if(venta2>2000)bono=bono+venta3*0.05;
	
	printf("introduce tu venta %d ,con");
	scanf("%f",&venta4);
	con++;
	if(venta2>2000)bono=bono+venta4*0.05;
	
	printf("introduce tu venta %d ,con");
	scanf("%f",&venta5);
	con++;
	if(venta2>2000)bono=bono+venta5*0.05;
	
	sueldo+=bono;
	
	printf("lograste un bono de %f \n", bono);
	printf("sueldo de la quincena es %f \n ",sueldo);
	
	getchar();
	getchar();
	
}
