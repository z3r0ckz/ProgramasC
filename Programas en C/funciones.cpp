#include<stdio.h>
#include<math.h>
#include<conio.h>
int suma () {
		int a,b,c;
	int *p,*p1;
	
	printf("introduce valor a\n");
		scanf("%d",&a);
	printf("introduce valor \n");
	scanf("%d",&b);
p=&a;
p1=&b;
c=a+b;
printf("el valor de la suma es %d",*p+*p1);
}
int resta (){
		int a,b,c;
	int *p,*p1;
	
	printf("introduce valor a\n");
		scanf("%d",&a);
	printf("introduce valor \n");
	scanf("%d",&b);
p=&a;
p1=&b;
c=a-b;
printf("el valor de la resta es %d",*p-*p1);
}
int multiplicacion (){
		int a,b,c;
	int *p,*p1;
	
	printf("introduce valor a\n");
		scanf("%d",&a);
	printf("introduce valor \n");
	scanf("%d",&b);
p=&a;
p1=&b;
c=a*b;
printf("el valor de la multiplicacion es %d",*p**p1);
}
int division (){
		int a,b,c;
	int *p,*p1;
	
	printf("introduce valor:	\n");
		scanf("%d",&a);
	printf("introduce valor:	 \n");
	scanf("%d",&b);
p=&a;
p1=&b;
c=a/b;
printf("el valor de la division es %d",(*p / *p1));
}
main(){

int opcion;
	printf( "\n 1suma  " );
        printf( "\n 2-resta " );
        printf( "\n 3-multiplicacion " );
        printf( "\n 4-division");
        printf(" \n 5-salir");
       

        scanf( "%d", &opcion );

  switch ( opcion  )
        {
            case 1: suma(); 
                    break;

            case 2: resta();
                    break;

            case 3: multiplicacion();
         			break;
         			
         	case 4: division();
                    break;
                    
	}
}
