#include <stdio.h>
#include <stdlib.h>


int main (){
	
	float a ;
	float b ;
	float bucket = 0 ;
	
		printf("Lets begin to add floating point numbers infinitely.\n \n");
	
	while (1) {
		
	
		printf("The current accumulative number is: %.3f \n" , bucket);
		printf("Enter a floating point input. \n");
		scanf("%f" , &a);
		printf(" Input: %.3f \n" , a);
	 	b = bucket + a ;
		bucket = b ;
		b = 0 ;
		a = 0 ;
		printf("Sum: %.3f \n \n" , bucket) ;
		
	}
	
}
