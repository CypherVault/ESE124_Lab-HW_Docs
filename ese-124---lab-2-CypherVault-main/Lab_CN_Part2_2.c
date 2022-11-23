 #include <stdio.h>


/*

Repeat exercise 1 using variables of type unsigned int instead of unsigned char.
 Discuss the differences between the two implementations. 
*/


int main (void){
	
	unsigned int var1;
	unsigned int result1;
	unsigned int result2;
	int p;
	int n;
	
	//diffreences are refernced in the TO DO document
	
printf("Please enter a hexadecimal number from the keyboard: \n");
scanf("%x", &var1);

printf("Please enter p bits posotion: \n");
scanf("%d", &p);

printf("Please enter n significant bits : \n");
scanf("%d", &n);

	
var1 = var1<<(7-p);
var1 = var1>>(8-n);
	printf("var:0%x\n",var1);
	
	
}
