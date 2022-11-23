#include <stdio.h>



/*2) Write a C program that reads one hexadecimal number from the keyboard (using scanf %x) 
and then sets the most significant p bits of the number to 0 and the least significant 8 - p bits to 1. 
The resulting value is displayed using printf %x. The value of variable p is read from the keyboard and is between 0 and 8.
*/



int main (void){
	
	unsigned int value ;
	unsigned int mask = 0x00 ;
	int input ;
	int range ;
	int rangecopy ;
	int stop = -1 ;
	unsigned int value0;
	while (1){
	
printf("Please enter a hexadecimal number bits long from the keyboard: \n");
scanf("%x", &value);
printf("Please enter the most significant p bits of the number youd like to change to 0, while setting the remaining 8-p bits as 1's.  \n");
scanf("%d", &input);


value0 = value & mask ;
		//printf ("The converted HexaDecimal is : 0x%x\n", value0);
range = 7 - input ;

 while ( range!= stop)	{
 	
 	value0 |= 1U << range ;
 	 
 	 rangecopy = range-1;
 	 range = rangecopy;
 	 

 }
	printf(" HexaDecimal is : 0x%x\n", value0);
	getchar();
}
}
