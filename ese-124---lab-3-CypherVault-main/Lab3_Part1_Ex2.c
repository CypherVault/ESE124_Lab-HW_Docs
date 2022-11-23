#include <stdio.h>
#include <math.h>

/*

    2. Design a C program to display the sum of the series 9 + 99 + 999 + 9999 ... computed for n terms.
	 The value n is read from the keyboard. What is the largest value of n for which the sum is computed correctly?

//the largest value we can comput correctly is the maximum n we can hold with varuables, and the resulting number must also be within our predetermined variable memory size.
//so the value of n terms is 10 due to What is the largest value of n for which the sum is computed correctly which is  2, 147, 483, 647 due to sum, which is an integer.

*/

int main (void){
	
	 int sum  ;
	int large =1 ;
	int n =0;
	int i ;
	int ncopy;
	  int bigsum;
	int p;
	int nextstep, truenext;
	printf("enter the n terms youd like to compute.");
	scanf ("%d", &i);
	ncopy = n;
	
//	while (){
	
	
	for (n; n<i; n++){

	large = (large*10) ;
	//printf("%d\n", large);
}
for (ncopy; ncopy<i+1; ncopy++){
	sum = sum + (9*large);
	large = large/10;	
	//printf("%d\n", sum);
}

p=n;
bigsum = sum;

while (p>0){
	//printf("bigsum = %d\n", bigsum);
	nextstep = sum - 9*(1*pow(10,p));
	truenext = sum - nextstep;
	sum = nextstep;
	//printf("nextstep = %d\n", nextstep);
	bigsum = nextstep + bigsum;
	p = p-1;
//	printf("big sum = %d\n", bigsum);
};
	
	if (i=5){		
bigsum = bigsum +1 ;
printf("%d", bigsum);} 
else if (i=4){
 bigsum = bigsum +1  ;
printf("%d", bigsum);} 
else {
bigsum = bigsum;
printf("%d", bigsum);
	}
}
