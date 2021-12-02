#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
 
struct pilas
{
int d;
pilas *a;
}*c,*e;
 
void menu(void);
void nuevoelemento(void);
void sacarelemento (void);
void actualizar(void);
 
main()
{
menu();
}
void menu(void)
{
int y,opc;
 for(;;)
 {	printf("\n      Pila C++");
 	printf("\n   Menu de Opciones\n \n");
 	printf("\n   (1) Ingresar Numero");
 	printf("\n   (2) Sacar Numero \n \n");
 	
 	scanf("%d",opc);
 
 	switch(opc){
 	
	 case 1:
 		nuevoelemento();
 		break;
 		
	case 2: 
		sacarelemento();
 		break;
 	
 }
actualizar();
	printf("\n Oprima una tecla para continuar");
getch();
 }
}
 
void nuevoelemento (void)
{
 if(!c)
 {
 c=new(pilas);
 printf("\n Ingresar Numero:");
 scanf("%d",c->d);
 c->a=NULL;
 return;
 }
 
 e=new(pilas);
 printf("\n Ingresar Numero:");
 scanf("%d",e->d);
 e->a=c;
 c=e;
}
 
void sacarelemento(void)
{
 if(!c)
 {
 	printf("\n No hay elementos en la Pila");
 	return;
 }
 
 e=new(pilas);
 e=c;
 printf("\n Numero eliminado del tope",e->d);
 c=e->a;
 delete(e);
 
}
void actualizar(void)
{
 int y=2,i,ca=0;
 e=c;
 while(e)
 {
 ca++;
 e=e->a;
 }
 
for(i=0;i<=ca;i++)
 {
 	printf("");
 }
 //muestro lo que tiene la pila!!
 i=0;
 e=c;
 while(e)
 {
 	i++;
 	printf(" - ");
 
 e=e->a;
 }
}

