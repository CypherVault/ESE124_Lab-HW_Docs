 #include <stdio.h>

/*    2) Assign the following hexadecimal constants to four C variables of type unsigned char – 0x12; 0xda; 0x3b; 0xbe.
        a. Initialize the variables when you define them $
        b. Use scanf %x $
        c. Use printf %x, %d, and %c to display the results. !!!!!!Explain the differences.!!!!!!
        
        
        d. Perform the following bitwise operations between the first variable and the second variable; 
		and between the third and fourth variables: bitwise and, bitwise or, and bitwise exclusive or.
		 Display the results using printf %x and manually verify the results. */
		 
		 
int main (void){
	
	unsigned int uc1 = 0x12 ;

	unsigned int uc2 = 0xda ;

	unsigned int uc3 = 0x3b ;

	unsigned int uc4 ;

	unsigned int resulta1 ;
	unsigned int resulta2 ;
	unsigned int resulta3;
	unsigned int result2 ;
	unsigned int result3 ;
	unsigned int result4 ;
/*unsigned short us ;
	unsigned int ui ;
	unsigned long ul ;*/
	
	
//printf("Please enter a hexadecimal number to be assigned to unisgned char from the keyboard: \n");
//scanf("%x", &uc1);
//printf("Please enter a hexadecimal number to be assigned to unsigned short from the keyboard: \n");
//scanf("%x", &uc2);
//printf("Please enter a hexadecimal number to be assigned to unisgned int from the keyboard: \n");
//scanf("%x", &uc3);

printf("Please enter the hexadecimal number (0xbe) to be assigned from the keyboard: \n");
scanf("%x", &uc4);

//print all variables

printf ("%x, %d, and %c \n",uc1,uc1,uc1);
printf ("%x, %d, and %c \n", uc2,uc2,uc2);
printf ("%x, %d, and %c \n", uc3,uc3,uc3);
printf ("%x, %d, and %c \n", uc4,uc4,uc4);
//calculation section

resulta1 = uc1&uc2 ;
resulta2 = uc1|uc2 ;
resulta3 = uc1^uc2 ;

result2 = uc3&uc4 ;
result3 = uc3|uc4 ;
result4 = uc3^uc4 ;



//results section

	printf(" uc1 * uc2 = %x \n", resulta1);	
		printf(" uc1 | uc2 = %x \n", resulta2);	
		printf(" uc1 ^ uc2 = %x \n", resulta3); 
		
	printf(" uc3 * uc4 = %x \n", result2);	
		printf(" uc3 | uc4 = %x \n", result3);	
		printf(" uc3 ^ uc4 = %x \n", result4);
	
	return (0);
}
