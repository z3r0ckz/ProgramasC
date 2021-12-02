#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//lista que lleva un apuntador
typedef struct producto{
	float num;
	struct producto *sig;
}*apuntadorlista;

//variables
producto *a=NULL,*b=NULL;//cuando llegue a Null es el Final de la Lista//
int contador=0,aux=0;//contador y un auxiliar//
float n=0,promedio=0,x=0;
char c,nombre;

//funcion
producto *s(void);

producto *s(void){
	producto *a = (producto*)malloc(sizeof(producto));//Malloc Memory Allocation//
		if(!a){
		printf("Error\n");
	}
	return a;
}
void promediolista();
void promediolista(){
	do{
	printf("%2f\n",b->num);
	x=(b->num);
	promedio+=x;
	}while((b = b->sig));
	promedio /=x;
	free(a);
	getchar();
}
int main(){
	do{
		printf("Introduce el nombre del producto=");
		scanf("%s",&nombre);
		printf("Costo del producto %d:\t",contador++);
		scanf("%f",&n);
		a=s();
		a->num=n;
		a->sig=b;
		b=a;
		printf("Quieres introducir otro valor? ( S \ N )");
		c=getch();
		x++;
		putchar('\n');
	}while(c=='s'|| c=='S');
	putchar('\n');
	promediolista();
	putchar('\n');
	printf("Promedio = %4.2f\n",promedio);
	system("pause");
}
