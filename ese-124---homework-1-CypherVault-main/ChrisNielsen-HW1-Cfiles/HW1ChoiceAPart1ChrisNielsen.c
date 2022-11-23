#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 


/*library functions^^^^^^*/
/*HW 1 DOBOLI CHOICE A Code 1 CHRIS NIELSEN*/


int main (void) {
	
	
	int num1 ;
	char num1Result[30] ; 
	int num1Win = 0 ;
	char num1Even [30] = "The 1st number is even" ;
	char num1Odd [30] = "The 1st number is odd" ;
	int num1swap ;
	int num1compare ;
	
	int num2 ;
	char num2Result[30]; 
	int num2Win = 0 ;
	char num2Even [30] = "The 2nd number is even" ;
	char num2Odd [30] = "The 2nd number is odd" ;
	int num2swap ;
	int num2compare ;

	int nullWin = 0 ;
	
	while (1) {
		/*this whole section gets the inputs */
		
		printf ("\nWe're going to compare numbers, and later we'll see their even or odd characteristics. Input the first number. \n") ;
		scanf ("%d", &num1) ; /*reads the 1st input and writes it to num 1*/
		
		
		printf (" Enter the second number. \n") ;		
		scanf ("%d", &num2) ; /*reads the 2nd input and writes it to num 2*/
	
		/*printf ("Enter the last number. \n" ) ;
		scanf ("%d", &num3) ; /*reads the 3rd input and writes it to num 3 */
		
		num1swap = num2 ;
		num2swap = num1 ;
		num1compare = num1;
		num2compare = num2;
		
			if (num1compare % 2 == 0)
			strcpy(num1Result, num1Even);
		else 
			strcpy (num1Result, num1Odd);
			
		if (num2compare % 2 == 0)
			strcpy (num2Result, num2Even);
		else 
			strcpy (num2Result, num2Odd);
	
		if ( num1compare > num2compare )
      num1Win = 1 ;
	  	else if ( num2compare > num1compare )
      num2Win = 1 ;
	  else   
			nullWin = 1;
	
		
		num1 = 0 ;
		num2 = 0;
		num1 = num1swap ;
		num2 = num2swap ;
	
		
		
		printf ("Numbers 1 and 2 have been swapped. num1 = %d, num2 = %d. \n", num1 , num2);
		
		
		
		/*this checks for even or odd values and then sets a char variable to a odd or even statement.*/
		
	

	/* listing off all the results of the divisible numbers */
	
	printf("The results are: %s , %s ", num1Result, num2Result ) ;
		
	if ( num1Win == 1 )
		 printf(" %d is the largest number! \n" , num2swap);
	else 
		 printf (" \n");
		 
	if (num2Win == 1 )
	 printf(" %d is the largest number! \n", num1swap);
	 else 
		 printf (" \n");

		 
	 if (nullWin == 1)
	 	printf("A comparison could not be drawn between your numbers. Please try again. \n");
	 else
		 printf (" ");
		
	
	printf("Thanks for using my code. \n");
		
	}

}
