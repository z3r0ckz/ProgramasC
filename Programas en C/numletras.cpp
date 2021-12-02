#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
 
int main() {
 
   int numero, n1, n2, n3, n4, n5;
   printf("Escribe un numero del 1-10000: \n ");
   scanf("%d", &numero);
   n1 = numero / 10000;
   n2 = (numero / 1000) % 10;
   n3 = (numero / 100) % 10;
   n4 = (numero / 10) % 10;
   n5 = (numero % 10);
   
   //if else //
   //Luis Mtz//
   //programa 2 //
   
   if(numero > 10000){
      printf("excede el rango");
   }else{
      if(n1 == 1){
      printf("Diez mil");
      }
      //xxxx miles//
      if(n2 == 1){
         printf(" mil");
      }else if(n2 == 2){
         printf(" dos mil ");
      }else if(n2 == 3){
         printf(" tres mil ");
      }else if(n2 == 4){
         printf(" cuatro mil ");
      }else if(n2 == 5){
         printf(" cinco mil ");
      }else if(n2 == 6){
         printf(" seis mil ");
      }else if(n2 == 7){
         printf(" siete mil ");
      }else if(n2 == 8){
         printf(" ocho mil ");
      }else if(n2 == 9){
         printf(" nueve mil ");
      }
      //1xx//
      if(n3 == 1 && n4 == 0 && n5 == 0){
         printf(" cien ");
      }else if(n3 == 1){
         printf("ciento ");
      }else if(n3 == 2){
         printf("doscientos ");
      }else if(n3 == 3){
         printf("trescientos ");
      }else if(n3 == 4){
         printf("cuatrocientos ");
      }else if(n3 == 5){
         printf("quinientos ");
      }else if(n3 == 6){
         printf("seiscientos ");
      }else if(n3 == 7){
         printf("setecientos ");
      }else if(n3 == 8){
         printf("ochocientos ");
      }else if(n3 == 9){
         printf("novecientos ");
      }
      //10-dieci//
      if(n4 == 1 && n5 == 0){
         printf(" diez");
      }else if(n4 == 1 && n5 == 1){
         printf(" once");
      }else if(n4 == 1 && n5 == 2){
         printf(" doce");
      }else if(n4 == 1 && n5 == 3){
         printf(" trece");
      }else if(n4 == 1 && n5 == 4){
         printf(" catorce");
      }else if(n4 == 1 && n5 == 5){
         printf(" quince");
      }else if(n4 == 1){
         printf("dieci");
      }//20,30,40 20y 30y 40y//
      if(n4 == 2 && n5 == 0){
         printf(" veinte");;
      }else if(n4 == 2){
         printf("veinti");
      }else if(n4 == 3 && n5 == 0){
         printf("treinta");
      }else if(n4 == 3){
         printf("treinta y ");
      }else if(n4 == 4 && n5 == 0){
         printf("cuarenta");
      }else if(n4 == 4){
         printf("cuarenta y ");
      }else if(n4 == 5 && n5 == 0){
         printf("cincuenta ");
      }else if(n4 == 5){
         printf("cincuenta y ");
      }else if(n4 == 6 && n5 == 0){
         printf("sesenta");
      }else if(n4 == 6){
         printf("sesenta y ");
      }else if(n4 == 7 && n5 == 0){
         printf("setenta");
      }else if(n4 == 7){
         printf("setenta y ");
      }else if(n4 == 8 && n5 == 0){
         printf("ochenta");
      }else if(n4 == 8){
         printf("ochenta y ");
      }else if(n4 == 9 && n5 == 0){
         printf("Noventa");
      }
      else if(n4 == 9){
         printf("noventa y ");
      }
      //1-10//
      if(n5 == 1 && n4 > 1){
         printf("uno");
      }else if(n5 == 1 && n4 == 0){
         printf("uno");
      }else if(n5 == 2 && n4 > 1){
         printf("dos");
      }else if(n5 == 2 && n4 == 0){
         printf("dos");
      }else if(n5 == 3 && n4 > 1){
         printf("tres");
      }else if(n5 == 3 && n4 == 0){
         printf("tres"); 
      }else if(n5 == 4 && n4 > 1){
         printf("cuatro");
      }else if(n5 == 4 && n4 == 0){
         printf("cuatro"); 
      }else if(n5 == 5 && n4 > 1){
         printf("cinco");
      }else if(n5 == 5 && n4 == 0){
         printf("cinco");
      }else if(n5 == 6){
         printf("seis");
      }else if(n5 == 7){
         printf("siete");
      }else if(n5 == 8){
         printf("ocho");
      }else if(n5 == 9){
         printf("nueve");
      }
   }
}

//  </X>   //
