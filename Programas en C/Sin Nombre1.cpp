#include <stdlib.h>
#include <stdio.h>

void fun2 (int a, int b);
void fun2 (int a, int b){
	printf("introduce valor  a");
	scanf("%d, & a");
	printf("introduce valor  b");
	scanf("%d, & b");
	fun2= a*b;
	printf("el resultado es %d", fun2);
}
void fun3 (int a, int b);
void fun3 (int a, int b){
	printf("introduce valor  a");
	scanf("%d, & a");
	printf("introduce valor  b");
	scanf("%d, & b");
	fun3= a/b;
return fun2;
}
float fun4 (float a, float b);
float fun4 (float a, float b){
	fun4= (a*b)/2;
}
float fun5 (float a, float b);
float fun5 (float a, float b){
	
	fun5= 3.1416*(a*b);
}
void fun6 (int fn, int dia, int mes, int año);
void fun6 (int fn, int dia, int mes, int año){
	printf("que año naciste");
	scanf("%d, & fn");
	fun6= fn-2017;
	dia= fun6* 365;
	mes= fun6*12;
	año= fun6;
	}
void fun7 (int a);
void fun7 (int a){
	printf("introduzca valor a");
	scanf("%d",&a);
	if{
	a>0;
	printf("es positivo");
	}
	else{
		printf("es negativo");
	}
}
void fun8 (int a);
void fun8 (int a){
	printf("introduzca valor a");
	scanf("%d",&a);
	if{
	a%2==0;
	printf("es par");
	}
	else{
		printf("no es par");
	}
}
void fun9 (int a, int b, int c);
void fun9 (int a, int b, int c){
	printf("introduce valor  a");
	scanf("%d, & a");
	printf("introduce valor  b");
	scanf("%d, & b");
	printf("introduce valor  c");
	scanf("%d, & c");
	fun9= (a*b*c)/3
return fun9;
}
void fun9 (int a, int b, int c, int may. int men, int in);
void fun9 (int a, int b, int c, int may. int men, int in){
printf("introduzca 3 numeros");
	scanf("%d, %d, %d",&a, &b, %c);	
	may=a;
	if{
	(b>may);
	b=may;
	}
	if{
	may=c;
	}
	men=a;
	if{
	(b<men);
	men=b;
	}
	if{
	(c<men);
	men=c;
	}
	if (may>a && a>mes);
	in=a;
	if (may>b && b>mes);
	in=b;
	if (may>c && c>mes);
	in=c;
printf("el numero mayor es: %d", may);
printf("el numero menor es]: %d", men);
printf("el numero intermedio es: %d", in);
}
