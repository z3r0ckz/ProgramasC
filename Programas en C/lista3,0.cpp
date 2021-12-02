#include<stdio.h>
#include<stdlib.h>
struct nodo{
 	int dato;
 	nodo *siguiente;
 	nodo *izq;
 	nodo *der;
 };
 int menu();
 void *crear(void*);
 void *eliminar(void*);
 void *buscar(void*);
 void mostrar(void*);
 void ordenar (void*);
  void mostrarasc(void*);
 void mostrardesc(void*);

 main()
 {
 	void *p=NULL;
 	int eleccion;
 	do{
 		eleccion=menu();
 		switch(eleccion)
 		{
 			case 1:p=crear(p);continue;
 			case 2:p=eliminar(p);break;
 			case 3:p=buscar(p);continue;
 			case 4:mostrar(p);continue;
 			case 5:mostrarasc(p);continue;
 			case 6:mostrardesc(p);continue;}
	 }while(eleccion<7);
	 return 0;
 }
 
 int menu()
 {
 	int eleccion,x;
 	do{
 	printf("\n\t\t Lista \n");
 	printf("\t (1)-Meter numero: \n");
 	printf("\t (2)-Eliminar numero : \n");
 	printf("\t (3)-Buscar en lista: \n");
 	printf("\t (4)-Mostrar Lista: \n");
 	printf("\t (5)-Ordenar ascendente Lista: \n");
 	printf("\t (6)-Ordenar descendente Lista: \n");
 	printf("\t (7)-SALIR \n\t\t \n ");
 	scanf("%d",&eleccion);
 }while(eleccion<1||eleccion>7);
 putchar('\n');
 return(eleccion);
}
void *crear(void*p){
nodo *q,*aux,*aux1;
int x;
putchar('\n');
printf("Mete numero:  ");
scanf("%d",&x);
q=(nodo *)malloc(sizeof(nodo));

q->dato=x;
q->siguiente=NULL;
q->izq=NULL;
q->der=NULL;

if(p==NULL)
p=q;
else{
	
	
	aux1=aux=(nodo*)p;
	if(x<aux->dato){
		q->der=aux;
		aux->izq=q;
		p=q;
	}
	else{
		while(aux!=NULL&&aux->dato<x){
			aux1=aux;
			aux=aux->der;
		}
		aux1->der=q;
		q->izq=aux1;
		if(aux!=NULL){
               q->der=aux;
		     aux->izq=q;
          } 
	}
}
return(p);
}
void*eliminar(void* s){
	if(s==NULL)
	printf("\n Vaciar lista");
	else{
		
		
		
	
		nodo *p,*aux;
		int x;
		printf("Que numero quieres eliminar: ");
		scanf("%d",&x);
		aux=p=(nodo*)s;
		if(p->der==NULL&&aux->dato==x)
		s=NULL;
		else{
			while(p->der!=NULL&&p->dato<x){
				aux=p;
				p=p->der;
			}
			if(p!=NULL)
			if(p->dato==x && p==s)
			s=p->der;
			else if(p->dato==x)
			aux->der=p->der;
			else
			printf("Dato no encontrado");
		}
		free(p);
	}
	return(s);
}
void*buscar(void* s){
		nodo *p,*aux;
		int x;
		printf("que elemento quieres buscar: ");
		scanf("%d",&x);
		aux=p=(nodo*)s;
		if(aux->dato==x)
		printf("el numero es: %d",x);
		else{
			while(p->der!=NULL&&p->dato<x){
				aux=p;
				p=p->der;
			}
			if(p!=NULL)
			if(p->dato==x && p==s)
			s=p->der;
			else if(p->dato==x)
			aux->der=p->der;
			else
			printf("Dato no encontrado");
		}
	return(s);
}
void mostrar(void *p){
	nodo *s;
	s=(nodo*)p;
	
	if(p==NULL)
	printf("Vacias lista");
	else
	do{
		
		printf("%d  -  ",s->dato);
		s=s->der;
	}while(s!=NULL);
}
void mostrarasc(void *p)  {

		nodo *s;
		s=(nodo *)p;
          if(p==NULL)
          printf("LISTA VACIA");
          else 
          do{
               printf("%d  -  ",s->dato);
               s=s->der;
          }while(s!=NULL);
     }
void mostrardesc(void *p){
	     nodo *s;
		s=(nodo *)p;
          if(p==NULL)
          printf("LISTA VACIA");
          else{
               while(s->der!=NULL)
               s=s->der;
          do{
               printf("%d  -  ",s->dato);
               s=s->izq;
          }while(s!=NULL);  
     }
} 

 
 


 
