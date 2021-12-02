#include <stdio.h>

int x,y,menu,MatA[3][3],MatB[3][3];
int *xx=&x;
int *yy=&y;
int *Ma[3]=&MatA[3];
int *Mb[3]=&MatB[3];
int **xxx,**yyy,**Maa[3],**Mbb[3];

int main()
{
    printf("* * * Programa que + - x / matrices  3x3 * * *\n");
    //llenado de matriz//
    printf("       llenado de matriz \n");
    printf("\n   Introduca numeros a la Matriz A: \n");
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++)
        {
        printf("\n   Introduzca la coordenada (%i,%i): ",x,y); 
				scanf("%d", &MatA[x][y]);
        }
    }
    printf("\n \n  Introduca los datos de la Matriz B:\n");
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++)
        {
        printf("\n   Introduzca la coordenada (%i,%i): ",x,y); 
				scanf("%d", &MatB[x][y]);
        }
    }
    printf("\n *** Que operacion desea Realizar ***\n \n");
    printf("     (1) Suma \n");
    printf("     (2) Resta \n");
    printf("     (3) Multiplicacion \n");
    printf("     (4) Division \n");
    scanf("\n   %d",&menu);
    
		switch(menu){
			case 1:
		
		//Suma//
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++) MatA[x][y]=MatA[x][y]+MatB[x][y];
				 //Se guarda el resultado de la suma en la matriz A//
    }
    
    printf("\n El resultado de la Matriz:\n\n");
    for(x=1;x<=3;x++)
    {	
        for(y=1;y<=3;y++) 
				printf("% d ",MatA[x][y]);
        printf("\n");
    }
        break;
    
  		case 2:{
  			//resta//
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++) MatA[x][y]=MatA[x][y]-MatB[x][y];
				 //Se guarda el resultado de la resta en la matriz A//
    }
    
    printf("\n El resultado de la Matriz:\n\n");
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++) 
				printf("% d ",MatA[x][y]);
        printf("\n");
    }
				break;
			}
			case 3:{
				//Multi//
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++) MatA[x][y]=MatA[x][y]*MatB[x][y];
				 //Se guarda el resultado de la x en la matriz A//
    }
    
    printf("\n El resultado de la Matriz:\n\n");
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++) 
				printf("% d ",MatA[x][y]);
        printf("\n");
    }
				break;
			}
			case 4:{
				//div//
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++) MatA[x][y]=MatA[x][y]/MatB[x][y];
				 //Se guarda el resultado de la div en la matriz A//
    }
    
    printf("\n El resultado de la Matriz:\n\n");
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=3;y++) 
				printf("% d ",MatA[x][y]);
        printf("\n");
    }
				break;
			}

		 
	}//fin del switch//
	getchar();
	return 0;
}//fin del main//
