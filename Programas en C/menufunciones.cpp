 n#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void fun1 (int a, int b);
void fun1 (int a, int b){
	printf("introduce valor  a: ");
	scanf("%d", & a);
	printf("introduce valor  b: ");
	scanf("%d", & b);
	int c= a*b;
	printf("el resultado es:  %d", c);
}
void fun2 (int a, int b);
void fun2 (int a, int b){
	int c;
	printf("introduce valor  a:");
	scanf("%d", & a);
	printf("introduce valor  b:");
	scanf("%d", & b);
	c= a/b;
	printf("el resultado es:  %d", c);
}
void fun3 (float x, float y);
void fun3 (float x, float y){
	float w;
	w= (x*y)/2;
	printf("el resultado es:  %f", w);
}
float fun4 (float x, float y);
float fun4 (float x, float y){
	
	float c= 3.1416*(x*y);
}
void fun5 (int f, int dia, int mes, int ano);
void fun5 (int f, int dia, int mes, int ano){
	printf("que ano naciste: ");
	scanf("%d, & f");
	int c= f-2017;
	dia= c* 365;
	mes= c*12;
	ano= c;
	}
void fun6 (int a);
void fun6 (int a){
	printf("introduzca valor a");
	scanf("%d",&a);
	if(a>0)
	printf("es positivo");

	else{
		printf("es negativo");
	}
}
void fun7 (int a);
void fun7 (int a){
	printf("introduzca valor a");
	scanf("%d",&a);
	if(	a%2==0)
	printf("es par");
	
	else{
		printf("no es par");
	}
}
void fun8 (int a, int b, int c);
void fun8 (int a, int b, int c){
	printf("introduce valor  a");
	scanf("%d, & a");
	printf("introduce valor  b");
	scanf("%d, & b");
	printf("introduce valor  c");
	scanf("%d, & c");
	float n9= (a*b*c)/3;
}
void fun9 (int a, int b, int c, int may, int men, int in);
void fun9 (int a, int b, int c, int may, int men, int in){
printf("introduzca 3 numeros");
	scanf("%d, %d, %d",&a, &b, &c);	
	may=a;
	if(b>may);
	b=may;
	
	if(may==c)
	  men=a;
	if	(b<men)
	men=b;
	if	(c<men)
	men=c;
	if (may>a && a>men)
	in=a;
	if (may>b && b>men)
	in=b;
	if (may>c && c>men)
	in=c;
printf("el numero mayor es: %d", may);
printf("el numero menor es]: %d", men);
printf("el numero intermedio es: %d", in);
}
int main()
{
    int n, opcion,a,b,c,f,dia,mes,ano;
    float x,y; 

    do
    {	
    	printf( "\n   *****             Menu de Funciones:            ***** \n \n" );
        printf( "\n   1. Funcion que lee 2 numeros enteros" );
        printf( "\n   2. dos numeros enteros, el primero divide al segundo" );
        printf( "\n   3. Area del triangulo" );
        printf( "\n   4. Area de un circulo" );
        printf( "\n   5. de tu Nacimiento determina tu edad, Dia,Mes,Año" );
        printf( "\n   6. nos dice si un numero es positivo o negativo" );
        printf( "\n   7. Determina si el nm es Par o Impar" );
        printf( "\n   8. Lee 3 numeros y saca el promedio" );
        printf( "\n   9. lee 3 numeros y dice cual es el Mayor, medio y menor" );
        printf( "\n   10. lee num del 1-9 y escribe los primeros 10 multiplos." );
        printf( "\n   11. Funcion que invierte numeros" );
        printf( "\n   12. Funcion que genera portada de la universidad" );
        printf( "\n   13. lee numeros primos y escribe los primeros num primos" );
        printf( "\n   14. Salir." );
        printf( "\n\n   Introduzca opci%cn (1-14): " );

        scanf( "%d", &opcion );

        
        switch ( opcion )
        {
            case 1: fun1(a,b); 
                    break;

            case 2: fun2(a,b);
                    break;

            case 3: printf("introduce valor  x:");
					scanf("%f", & x);
					printf("introduce valor  y:");
					scanf("%f", & y);
					fun3(x,y);
            		break;
            
			case 4: printf("introduce valor  x:");
					scanf("%f", & x);
					printf("introduce valor  y:");
					scanf("%f", & y);
					fun3(x,y);
                    break;

            case 5: fun5(f,dia,mes,ano);
            		printf("Tu edad es:\n",f);
            		dia= f* 365;
					mes= f*12;
					ano= f;
            		printf("Los dias que tienes son:\n ",dia);
            		printf("Los meses que tienes son:\n ",mes);
					printf("Los anos que tienes son:\n ",ano);
                    break;

            case 6: 
            		break;   
			
			case 7: 
                    break;

            case 8: 
                    break;

            case 9: 
            		break;
			
			case 10: 
                    break;

            case 11:
                    break;

            case 12:
            		break;
			
		    case 13: 
                    break;

           						
         }

        

    } while ( opcion != 14 );

    return 0;
}

