#include <stdio.h>
#include <string.h>

main (){
	int y=12;
	char x[5];
	strcpy(x,"hola");
	printf("%u %s %u %d \n", x, x,&y, y);
	getchar ();
}
