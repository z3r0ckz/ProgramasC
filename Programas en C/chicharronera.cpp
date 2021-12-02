#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	int a,b,c,anws,x1,x2;
	
	printf("Introduce A: ");
	scanf("%d",&a);
	printf("Introduce B: ");
	scanf("%d",&b);
	printf("Introduce C: ");
	scanf("%d",&c);
	
	anws=(b*b-(4*a*b));
	     x1=((b*-1)+(anws))/2*a;
	     x2=((b*-1)-(anws))/2*a;
	     
	     printf(" El resultado de X1: %d",x1);
	     printf(" El resultado de X2: %d",x2);
}


