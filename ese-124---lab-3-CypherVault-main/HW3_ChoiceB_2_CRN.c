 #include <stdio.h>
#include <math.h>

/*

    1. Design a C program to compute the value ln(x) using the Taylor series expansion. 
	The value of the decimal x is input from the keyboard.
	 The computation ends when the precision of the sum drops below a, where the value a is input from the keyboard.

*/


int main(){
  

 	float x, epsilon, sum = 0, t = 1 ;

	int k = 1, count = 1; //initialize k
	
	printf ("first number please. x cannot be 0 or 1. 1 is already computed \nx:\n");
	scanf("%f", &x);

	
	printf("eps:\n"); //epsilon is a very small value
	scanf("%f", &epsilon);
	
	
	while (fabs(t) >= epsilon) {
	 
		 t = (pow((x-1),k))*((pow(-1,(k+1)))/k);
		
		
		sum = sum + t;
		count++;
		k++;
		
	}
	 printf("ln(%f) = %f in %d iterations\n", x, sum, count);
  
}




