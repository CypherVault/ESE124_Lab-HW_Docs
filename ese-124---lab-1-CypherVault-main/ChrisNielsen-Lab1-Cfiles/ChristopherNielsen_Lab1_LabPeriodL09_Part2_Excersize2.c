1#include <stdio.h>
#include <stdlib.h>

/*   2) Write a C program that displays the following information:
H. Smith /78 \ aaa #67 “ggg”
mmm */

int main (){
	
	char text [80] = "H. Smith /78 \\ aaa #67 ";
	
	printf("%s \"ggg\"\n"  , text) ;
	printf("mmm");
	
	
	return (0);
	getchar();
}
