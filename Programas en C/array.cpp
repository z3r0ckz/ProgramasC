#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x,y,array[100];
	
	for(x=1; x<=100; x++){
		array[x]=x;
	}
	for (x=1; x<=100; x++){
		printf("%d \n", array[x]);
	}
	for(y=1; y<=100; y++){
		array[y]=y;
	}
	for (y=100; y>=1; y--){
		printf("%d \n",array[y]);
	}
	return 0;
}
