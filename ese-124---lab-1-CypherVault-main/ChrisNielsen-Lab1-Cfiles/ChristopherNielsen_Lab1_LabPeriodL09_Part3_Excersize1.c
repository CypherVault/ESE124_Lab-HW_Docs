#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*    1) Write a C program that reads a floating point value (called x),
and then a character that describes an operation using the values x, and then displays the result. 
Extend the program, so that the two operations are repeated 10 times.

The operations associated to the characters are as follows:
e   e computes ex
/    / compute ln x
r   r computes the square root of x
m computes the absolute value of x     */

int main (){
	
	 int loop = 10 ;
	int loop2 ;
	float input ;
	float temp = 0 ;
	double inputx , result;
	float a ;
	float b ;
	float finalresult ;
	char opChoice;
	int operationNum ;
	float exponential ;
	
	
	
	printf("We're going to be computing with some float values. \nFirst, we'll read a value and then we'll pick an operation.\n This will be completed 10 ten times and each respective round's results will be displayed.\n");
while ( loop > 0){
	printf(" \nEnter a floating value.\n");
	scanf("%f", &input);
	printf("Enter a value that corresponds with the desired operation. \"e\" will compute e^x. \"/\" will compute ln(x).\"r\" will compute the square root of x. \"m\" will compute the absolute value of x.\n") ;
		getchar();
	scanf("%c", &opChoice);
	 
	
	inputx = input ;

	switch (opChoice){
		case 'e': 
			result = exp(inputx); 
			printf("Exponential of %.32lf = %.32lf", inputx, result); break;

		case '/': result = log(inputx); 
 
		if ( inputx <= 0 ){
		 printf("invalid response.") ; result = 0; }
		else {
		
		 printf("Natural Log of %f = %f", inputx, result);
	}
		break;
		
		case 'r':
		result = sqrt(inputx);
		printf("Square root of %.32lf =  %.32lf", inputx, result); break;
		
		case 'm':
		result = fabs(inputx);
		printf("|%.32lf| =  %.32lf\n", inputx, result); break;

		default: printf("%c is not a valid character \n", opChoice);
	}
	loop2 = loop - 1;
	loop = loop2 ;
	loop2 = 0 ;
}
	printf("all 10 uses of this program have expired. \n");
}

