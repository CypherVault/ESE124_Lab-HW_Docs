 #include <stdio.h>
#include <math.h>

/*

    1) Write a C program that reads a hexadecimal value from the keyboard and then stores the value into an unsigned char variable. 
	Read two int values p and n from the keyboard, where the values are less than 8. Implement the following commands:
S – sets the n bits starting at position p to 11..1
R – resets the n bits starting at position p to 00…0
F – flips the n bits starting at position p to their inverse bit
D – displays the value of the variable
I – reads a new hexadecimal value from the keyboard

*/

int main (void){
	
unsigned char var1;

unsigned int result;
unsigned int mask1 = 0xff;
unsigned int mask2 ;
int p;
int n;
char op;


	printf("Please enter the char chocie \n");
	scanf("%s", &op);
	
	printf("Please enter first hexadecimal number from the keyboard: \n");
	scanf("%x", &var1);
	
	printf("Please enter the p position from the keyboard: \n");
	scanf("%d", &p);
	
	printf("Please enter the n bits from the keyboard: \n");
	scanf("%d", &n);


	mask1 = mask1 >> (8-n);
	mask1 = mask1 << (8-p-1);
    mask2 = mask1;

switch (op){
	case 'S':
		result = var1 | mask1;
		printf(" HexaDecimal is : 0x%x\n", result);
	break;
	
	case 'R':
		result = var1 & ~(mask1);
		printf(" HexaDecimal is : 0x%x\n", result);
	break;

	case 'F':	
	result = var1^mask1;
		printf(" HexaDecimal is : 0x%x\n", result);
	break;

	case 'D':
		printf(" HexaDecimal is : 0x%x\n", var1);
	break;


	case 'I':
		printf("Please enter a hexadecimal number from the keyboard: \n");
	scanf("%x", &var1);
	printf(" HexaDecimal is : 0x%x\n", var1);
		break;
	
	default :
	 printf(" invalid");

}
	
	
}
