 #include <stdio.h>

/*Write a C program that reads one hexadecimal number from the keyboard (using scanf %x) 
and then sets the least significant 4 bits of the number to 1111. 
The resulting value is displayed using printf %x.*/


int main (void){


unsigned int value ;
unsigned int value0 ;
unsigned int mask = 0x0F ;


printf("Please enter a hexadecimal number from the keyboard: \n");
scanf("%x", &value);
	
	
	
value0 = value | mask ;

	printf(" HexaDecimal with the least 4 significant bits set to 4 is : 0x%x\n", value0);
	getchar();
	
	
	
	
	
}
