#include <stdio.h> 
#include <stdlib.h>
#include <windows.h>

float KWH, pago, exceso, cont;
main(){
        system("cls");
        printf("dame los KW hora que usaste  \n");
        scanf("%f" ,&KWH);
        for(KWH<=14; KWH<300; cont++){
             pago=30;}
			  
             if(KWH>65){ 
                    exceso=KWH-65;
                    pago=30 + (51+0.5)+(exceso*0.25);
           }
        else{
                    exceso=KWH-14;
                    pago=30+(exceso*0.50);
        }
    printf("su pago debe de ser %f \n",pago);
    printf("este semestre se excedio de f KWH ",exceso);
    getchar();
    getchar();
    }

                    
