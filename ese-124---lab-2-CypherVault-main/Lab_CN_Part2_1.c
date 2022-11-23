 #include <stdio.h>

//Write a C program that reads a hexadecimal value from the keyboard and then stores the value into an unsigned char variable.
// Read two int values p and n from the keyboard, where the values are less than 8. Change the initial hexadecimal value in the following way: 
//Shift the n bits starting at position p, so that they form the n least significant bits of the result. 
//The remaining bits of the result are set to 0. Display the result using printf %x.


int main (void){
	
	unsigned char var1;
	unsigned int result1;
	unsigned int result2;
	int p;
	int n;
	
	
	
printf("Please enter a hexadecimal number from the keyboard: \n");
scanf("%x", &var1);

printf("Please enter p bits posotion: \n");
scanf("%d", &p);

printf("Please enter n significant bits : \n");
scanf("%d", &n);

	
var1 = var1<<(7-p);
var1 = var1>>(8-n);
	printf("var:0x%x\n",var1);
	
	
}
