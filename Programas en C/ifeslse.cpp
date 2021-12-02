#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int p, s, r;

main(){
 printf("Dame el valor de P \n");
 scanf("%d",&p);
printf("Dame el valor de S \n");
 scanf("%d",&s);
printf("Dame el valor de R \n");
 scanf("%d",&r);
if (p>s){
	if(p>r){
		if(s>r){
			printf("%d, %d, %d",p,s,r);
			
				else
					printf("%d, %d, %d",p,r,s);
					
				else{
					printf("%d, %d, %d",r,p,s);
					}
					}
				}
				else{
				}
					if(s>r){
						if(p>r){
							printf("%d, %d, %d",s,p,r);
							else{	
								printf("%d, %d, %d",s,r,p);
						}
						}
				else{
					printf("%d, %d, %d",r,s,p);
			}	
		}
		}}	
	getchar();	
	getchar();
}					
