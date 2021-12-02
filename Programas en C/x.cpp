#include <stdlib.h>
#include <stdio.h>
#define tam 5

int x,y,array[tam][tam];

main(){
	for (x=0;x<tam; x++){
		for(y=0;y<=tam;y++){
			if(x==y)
			array[x][y]=1;
			else if
			((x+y)==tam -1 )
			array[x][y]=1;
			else
			array[x][y]=0;
		}
	}
	for(x=0;x<tam;x++){
		for(y=0;y<tam;y++){
			printf("%d",array[x][y]);
		}
		printf("\n");
	}
}
