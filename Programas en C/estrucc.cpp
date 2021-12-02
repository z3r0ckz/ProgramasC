#include<stdio.h>
#include<stdlib.h>
struct curso{
	char nombreC[15];int Hrs;float costo;char prof[30];
}curso1;

struct VAprendizaje{
	char cve[6];char nombre[30];int hT;int hp;int creditos;
}apren;

main(){
printf("inserte nombre del curso");
scanf("%s",&curso1.nombreC);
printf("inserte las horas del curso");
scanf("%d",&curso1.Hrs);
printf("inserte el costo");
scanf("%f",&curso1.costo);
printf("inserte nombre del profe");
scanf("%s",&curso1.prof);

printf("inserte la clave");
scanf("%s",&apren.cve);
printf("inserte el nombre de la unidad");
scanf("%s",&apren.nombre);
printf("inserte horas teoricas");
scanf("%d",&apren.hT);
printf("inserte horas practicas");
scanf("%d",&apren.hp);
printf("inserte creditos");
scanf("%d",&apren.creditos);

printf("el nombre del curso es %s",curso1.nombreC);
printf("las horas del curso son %d",curso1.Hrs);
printf("el costo es %f",curso1.Hrs);
printf("el nombre del profesor es %s",curso1.prof);

printf("la clave es %s",apren.cve);
printf("el nombre de la unidad es %s",apren.nombre);
printf("las horas teoricas son %d",apren.hT);
printf("las horas practicas son %d",apren.hp);
printf("los creditos son %d",apren.creditos);

getchar();
getchar();
}
