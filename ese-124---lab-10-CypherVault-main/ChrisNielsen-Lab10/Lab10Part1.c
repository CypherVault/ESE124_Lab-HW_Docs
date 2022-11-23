 #include <stdio.h>
#include <math.h>

/*

Implement a C function to compute the integral of a function using the trapeze method. Compute the integral value for different interval values, number of discretization points, and functions.
    • The integral function has the following four parameters: the left limit, the right limit, the number of discretization points, and a pointer to a function with one input parameter of type float and which returns a float value.
    • The trapeze method approximates an integral by the sum of the areas of the set of trapeze that represent the area below the function curve.
    • The main program computes the integral for the following functions:
	 square root, ln, exponential, square, and cubic.
    • Observe the precision of the computed integrals for 5 different values of the left limit - right limit pairs, 
	and five sets of discretization points which are subsequently getting closer to each other (e.g., more discretization points are being used).    



*/

double SQRT (double N){ return sqrt(N);
}

double myLN(int k, double x, double result){
	result =((pow(-1, (k+1)))/k )* (x-1);
	return result;
	k++;
}

double myex(double x, double result){

	result=exp(x);
	
	return (result);
}

double mysquare(double n, double result){
	result=(pow(n,2));
	return (result);
}


double mycube(double n, double result){
	result=(pow(n,3));
	return result;
}



int main (void){
	double a,b,h,sum=0, integralsqrt, integralln , integralex, integralsquare, integralcube,x, result;
	int n; int i;
	
	int k=1;
	printf("Enter the lower limit.");
	scanf("%lf", &a);
	getchar();
	printf("Enter the upper limit.");
		scanf("%lf", &b);
	getchar();
	printf("Enter the number of sub intervals.");
		scanf("%d", &n);
	getchar();
	
	h=(b-a)/n;
	
	for (i=1; i<n;i++){
		x=a+i*h;
		sum =sum+SQRT(x);
	}
	integralsqrt = h/2.0*(SQRT(a)+2*sum+SQRT(b));
	printf("\nThe Integral of SQRT for the given values is %lf", integralsqrt);
	sum=0;
	
	
	
	for (i=1; i<n;i++){
		x=a+i*h;
		sum =sum+myLN(x, result, k );
		
	}
	integralln = h/2.0*(myLN(a, result, k)+2*sum+myLN(b , result, k));
	printf("\nThe Integral of Ln for the given values is %lf", integralln);
	sum=0;
	
	
	for (i=1; i<n;i++){
		x=a+i*h;
		sum =sum+myex(x, result);
	}
	integralex = h/2.0*(myex(a, result)+2*sum+myex(b, result));
	printf("\nThe Integral of e^x for the given values is %lf", integralex);
	sum=0;
	
	
	for (i=1; i<n;i++){
		x=a+i*h;
		sum =sum+mysquare(x, result);
	}
	integralsquare = h/2.0*(mysquare(a, result)+2*sum+mysquare(b, result));
	printf("\nThe Integral of SQUARE for the given values is %lf", integralsquare);
	sum=0;
	
	for (i=1; i<n;i++){
		x=a+i*h;
		sum =sum+mycube(x, result);
	}
	integralcube = h/2.0*(mycube(a, result)+2*sum+mycube(b, result));
	printf("\nThe Integral of CUBE for the given values is %lf", integralcube);
	sum=0;
	
	
	
	
	
}
