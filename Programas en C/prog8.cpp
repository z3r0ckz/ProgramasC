#include <stdio.h>
#include <string.h>

main (){
	char y[4];
	char x[10];
	strcpy(x,"como estas?");
	strcpy(y,"bien");
	printf("%u %s %u %s \n", &x, x,&y, y);
	getchar ();
}
