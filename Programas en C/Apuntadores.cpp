#include <stdio.h>
#include <stdlib.h>
main(){
int a,b,c;
int *p,*p1;
int  r,e,s;
int *pr,*p2;
int  m,u,l;
int *pm,p3;
int  d,v,o;
int *pd,*p4;

printf("Suma\n");
printf("Ingresa un numero:\t");
scanf("%d",&a);
printf("ingresa un numero:\t");
scanf("%d",&b);
p=&a;
p1=&b;
printf("La suma es %d",*p+*p1);

printf("Resta");
printf("ingresa un numero:\t");
scanf("%d",&r);
printf("ingresa un numero:\t");
scanf("%d",&e);
pr=&r;
p2=&e;
printf("la resta es %d",*pr-*p2);

printf("multiplicacion");
printf("ingresa un numero:\t");
scanf("%d",&m);
printf("ingresa un numero.\t");
scanf("%d",&u);
pm=&m;
p3=&u;
printf("La multiplicacion es %d",*pm * *p3);

printf("Division");
printf("ingresa un numero:\t");
scanf("%d",&d);
scanf("%d",v);
pd=&d;
p4=&v;
printf("La division es %d",*pd,*p4);

getchar();
getchar();
}




