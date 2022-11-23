 #include <stdio.h>
#include <math.h>

/*

    1. Design a C program to compute the value of the fraction 1 / (1 – x) using the Taylor series expansion. 
	The value of the decimal x is input from the keyboard.
	 The computation ends when the precision of the sum drops below a, where the value a is input from the keyboard.


*/
int main(){
  
  
   double precisionA;

  
 //  printf("Enter the value of x: "); scanf("%lf", &x);
//   printf("Enter the value of a: "); scanf("%lf", &precisionA);
  
 	float x, epsilon, sum = 0, t = 1 , add = 1;

	int k = 0, count = 1; //initialize k
	
	double new_x = 1;
	double pow_x = 1;
	
	printf ("x:\n");
	scanf("%f", &x);

	
	printf("eps:\n"); //epsilon is a very small value
	scanf("%f", &epsilon);
	
	

	while ( fabs(add) >= epsilon) {	
	

		add = pow(x,k); 
		sum = sum + add;
		count++;
		k++;	 
			printf("1/1-x of(%f) = %f in %d iterations\n", x, sum, count);
  
	}

	
  
}




