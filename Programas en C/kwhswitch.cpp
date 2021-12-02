#include <stdio.h> 
#include <stdlib.h>
#include <windows.h>
int luz;
float KWH, pago, exceso;
main(){
        system("cls");
        printf("Cuantos KW hora usaste?  \n");
        scanf("%f" ,&KWH);
    {
    	switch(luz){
		
		case 1:
					(KWH<=14);
	            	pago=30;
	            	printf("su pago es de: %f \n",pago);
    printf("este semestre se excedio de %f KWH ",exceso);
	            	break;
			 
        case 2:
		            (KWH>65); 
                    exceso=KWH-65;
                    pago=30 + (51+0.5)+(exceso*0.25);
                    printf("su pago es de: %f \n",pago);
    printf("este semestre se excedio de %f KWH ",exceso);
                    break;
        case 3:
		    
                    exceso=KWH-14;
	                pago=30+(exceso*0.50);
	                printf("su pago es de: %f \n",pago);
    printf("este semestre se excedio de %f KWH ",exceso);
	                break;
    }
	}
    
}
    
    
