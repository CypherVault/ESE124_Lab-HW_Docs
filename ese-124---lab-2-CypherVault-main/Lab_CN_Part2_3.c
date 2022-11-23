 #include <stdio.h>


/*
    3) Write a C program that reads two hexadecimal values from the keyboard and then stores the two values into two variables of type unsigned char.  
	Read two int values p and n from the keyboard, where the values are less than 8. 
	Replace the n bits of the first variable starting at position p with the last n bits of the second variable. 
	The rest of the bits of the first variable remain unchanged. Display the resulting value of the first variable using printf %x.
*/

int main (void){
unsigned int var1;
unsigned int var1store;
unsigned int var2;
unsigned int mask1 = 0xff;
unsigned int mask2 = 0xff;
int p;
int n;
		printf("Please enter the p position ");
	scanf("%d", &p);
	getchar();
	printf(" please enter the n amount of bits ");
	scanf("%d", &n);
		getchar();
	printf("Please enter first hexadecimal number from the keyboard with the prefix 0x: \n");
	scanf("%x", &var1);
	
	printf("Please enter second hexadecimal number from the keyboard with the prefix 0x: \n");
	scanf("%x", &var2);
	
mask1 = mask1<<(8-n);
mask1 = mask1>>(7-p);
mask1 = ~mask1;

var1 = var1&mask1;
//printf("var1&mask:%x\n", var1);

mask2 = mask2>>(8-n);
var2 = var2&mask2;

var2 = var2<<(p-n+1);
var1 = var1|var2;
printf("result:%x\n", var1);	
}
