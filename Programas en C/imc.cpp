#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>
#define tam 50

int main(){
	float al[tam],pes[tam],res[tam],alt, alt2;
	int i;
	
	srand(time(NULL));
	for(i=0;i<tam;i++){
	
		do{
			alt=(rand()%140)+1;
		}	while(alt<15 || alt>140);
		do{
			alt2=(rand()/1.99)+1;
		}	while((alt2<1.0 || alt2>1.99)+1);
			al[i]=alt2;
			res[i]=pes[i]/(al[i]*al[i]);
}
	printf("NP \t Altura \t Peso \t IMC \t Observación \n\n");
	for(i=0;i<tam;i++){
		printf("%d \t %f \t %f \%f", i+1, al[i], pes[i], res[i]);
		if {
		(pes[i]=30.00);
		printf ("usted tiene obesidad \n");}
		if{
		(pes[i]=24.9);
		printf("su peso es el indicado \n");}
		else{
		printf("usted tiene sobre peso"); }
	}
	getchar();
}

