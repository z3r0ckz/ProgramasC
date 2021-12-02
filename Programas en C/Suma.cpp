#include<stdio.h>
#include<math.h>
#include<conio.h>
main(){
	int a,b,c;
	int *p,*p1;
	scanf("%d",&a);
	printf("introduce valor a");
		scanf("%d",&a);
	printf("introduce valor b");
	scanf("%d",&b);
p=&a;
p1=&b;
c=a+b;
printf("el valor de la suma es %d",*p+*p1);
}
