#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

#define VL 7200
#define VF 8800
#define P 6000
#define A 6400

main(){
	srand(time(NULL));
	
	int emp[N], falt, i, tipo [N], ext;
	float vent, km, viat, op;
	
	for(i=0;i<N;i++){
		tipo[i]=(rand()%3)+1;
		
		switch(tipo[i]){
			
			case 1:
				do{
					vent=(rand()%5000)+1;
			}while(vent<2000 || vent>5000);
			emp[i]+=(vent*.25)+VL;
			break;
			
			case 2:
				viat=(rand()%1800);
				emp[i]=VF+((viat/15)*3500);
				break;
				
				case 3:
					
					do{
						op=(rand()%7000)+1;
			}while(op<700 || op>7000);
			
			if
			(op>5000){
					emp[i]=P;
				}
			break;
			
			default:
				ext=rand()%3;
				falt=rand()%3;
				
				if
				(falt==0&&((ext*4)>=8))
				emp[i]=A+1500;
				
				else
				emp[i]=A;
				
				break;
			}
}
printf("1: VEN LOCAL \t 2: VEN FORANEO \t 3: PRODUCT \t 4: ADMIN \n\n");

printf("EMPLEADO \t TIPO DE EMPLE\t SUELDO MENS $$\n \n");
for(i=0;i<N;i++)
printf("%d\t\t %d \t\t %d \n",i+1,tipo[i],emp[i]);

getchar();
getchar();
			
}
