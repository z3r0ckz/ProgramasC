#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 
int main ( ) {
    
    double x = 1.53464;
    int i, N = 10;
    double s = 0;
    int prod = 1;
 
    for (i = 0; i < N; i++) {
        if ( i >= 2 ) prod *= i;
        s = s + pow(x, i) / (double) prod;
    }
 
    printf( "El valor es: %lf\n", s );
    return 0;
}
