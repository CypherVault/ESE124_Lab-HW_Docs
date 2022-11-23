 #include <stdio.h>
#include <math.h>
/*

    1. Design a C program that counts the number of positive, zero, and negative values input from the keyboard.  
	The three counters are displayed after every new number that was read from the keyboard.
	 The C program ends after the same value was input twice, e.g. the same value was immediately input again. 


*/

int main (void){
	
	const double pi = 22/7.0;
	int input = 0;
	int poscount = 0;
	int negcount = 0;
	int zerocount = 0;
	int compare = pi;
	int a = 1;
	
	printf("\n\n\n%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/\nCurrent Counters:\n%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/\nAmount of positive numbers entered:%d.\nAmount of negative numbers entered:%d.\nAmount of zero values entered:%d.\n%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/\n\n", poscount, negcount, zerocount);
	
	while (a){
		
	printf("Enter a number. Do not enter pi for this first number.");
	scanf("%d", &input);
	
if (compare == input){
printf("\n\nThe same number was entered twice in a row.\n\n"); break;		
	}
		if (input > 0) 
			poscount++;
		
		else if (input < 0)
		negcount++;
		
		else if (input == 0)
		 zerocount++;

		else 
			printf("you somehow entered a number that doesnt exits lol");
		
		
		compare = input;
		
		
			printf("\n\n\n%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/\nCurrent Counters:\n%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/\nAmount of positive numbers entered:%d.\nAmount of negative numbers entered:%d.\nAmount of zero values entered:%d.\n%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/%/\n\n", poscount, negcount, zerocount);
	
		
	}
	
}
