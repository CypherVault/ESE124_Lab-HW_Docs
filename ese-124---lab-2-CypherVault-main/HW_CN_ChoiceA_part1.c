#include <stdio.h>

int main (void){


/*1) Write a C program that reads from the keyboard (using scanf %x) 
and then sets the most significant 2 bits of the number to 00 and the lest significant 2 bits to 11. 
The resulting value is displayed using printf %x. */

unsigned int value ;
unsigned int mask11 = 0x03 ;
unsigned int mask00 = 0x3F ;
unsigned int result1 ;
unsigned int result2 ;

while (1) {


printf("Please enter a hexadecimal number bits long from the keyboard: \n");
scanf("%x", &value);

result1 = value & mask00;
result2 = result1 | mask11 ;
	
	
	printf ("The converted HexaDecimal is : 0x%x\n", result2);



}








/*getchar();

for (i = 0 ; i < 8; i++){
	printf(" You entered a hexadecimal that is equivalent to :%d", value ) ;
printf("Here is your converted value with the most significant 2 bits of the number cleared to 00 and the least significant 2 bits set to 11.");
printf("%x", value);
	printf(" You entered a hexadecimal that is equivalent to :%d", !!((value << i)&0x80));
getchar();


	i = 1 ;
	*/
}




