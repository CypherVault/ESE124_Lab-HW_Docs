 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    1) Design a C program to convert a binary number into a decimal value. 
	Use hexadecimals to input the binary number. What is the largest binary number that your program can convert? 
*/

	////scanf("%*c%*c%c%*c%c%*c%c%*c%c", &aHexa, &bHexa, &cHexa, &dHexa);
//getchar();

int main (void){
	
	char hexaFull [5];
	char aHexa ;
	char bHexa;
	char cHexa ;
	char dHexa;
	char aStore;
	long int count =0;
	
	int abit, bbit, cbit, dbit, avalue, bvalue, cvalue, dvalue;
	
	unsigned int aDec, bDec, cDec, dDec ;
	
	int sum, a, b, c, d;

	printf("input the hexadeximal value, ONLY INPUT UP TO 4 HEXADECIMALS\n");
printf("enter the hexadecimal, include the 0x. If your hexadecimal is 0x66, please enter it as 0x0066.\n");
scanf("%*c%*c%s", &hexaFull)	;
getchar();
	switch(hexaFull[0]){
	case '0' : aDec= 0x0000 ; abit=0 ; break;
	case '1' : aDec= 0x0001 ; abit=1 ; break;
	case '2' : aDec= 0x0010 ; abit=2 ; break;
	case '3' : aDec= 0x0011 ; abit=3 ; break;
	case '4' : aDec= 0x0100 ; abit=4 ; break;
	case '5' : aDec= 0x0101 ; abit=5 ; break;
	case '6' : aDec= 0x0110 ; abit=6 ; break;
	case '7' : aDec= 0x0111 ; abit=7 ; break;
	case '8' : aDec= 0x1000 ; abit=8 ; break;
	case '9' : aDec= 0x1001 ; abit=9 ; break;
	case 'A' : aDec= 0x1010 ; abit=10 ; break;
	case 'B' : aDec= 0x1011 ; abit=11 ; break;
	case 'C' : aDec= 0x1100 ; abit=12 ; break;
	case 'D' : aDec= 0x1101 ; abit=13 ; break;
	case 'E' : aDec= 0x1110 ; abit=14 ; break;
	case 'F' : aDec= 0x1111 ; abit=15 ; break;
	default : printf("invalid input");
}
	
	switch (hexaFull[1]){
	case '0' : bDec= 0x0000 ; bbit=0 ; break;
	case '1' : bDec= 0x0001 ; bbit=1 ; break;
	case '2' : bDec= 0x0010 ; bbit=2 ; break;
	case '3' : bDec= 0x0011 ; bbit=3 ; break;
	case '4' : bDec= 0x0100 ; bbit=4 ; break;
	case '5' : bDec= 0x0101 ; bbit=5 ; break;
	case '6' : bDec= 0x0110 ; bbit=6 ; break;
	case '7' : bDec= 0x0111 ; bbit=7 ; break;
	case '8' : bDec= 0x1000 ; bbit=8 ; break;
	case '9' : bDec= 0x1001 ; bbit=9 ; break;
	case 'A' : bDec= 0x1010 ; bbit=10 ; break;
	case 'B' : bDec= 0x1011 ; bbit=11 ; break;
	case 'C' : bDec= 0x1100 ; bbit=12 ; break;
	case 'D' : bDec= 0x1101 ; bbit=13 ; break;
	case 'E' : bDec= 0x1110 ; bbit=14 ; break;
	case 'F' : bDec= 0x1111 ; bbit=15 ; break;
	default : printf("invalid input");
	
}

	switch (hexaFull[2]){
	case '0' : cDec= 0x0000 ; cbit=0 ; break;
	case '1' : cDec= 0x0001 ; cbit=1 ; break;
	case '2' : cDec= 0x0010 ; cbit=2 ; break;
	case '3' : cDec= 0x0011 ; cbit=3 ; break;
	case '4' : cDec= 0x0100 ; cbit=4 ; break;
	case '5' : cDec= 0x0101 ; cbit=5 ; break;
	case '6' : cDec= 0x0110 ; cbit=6 ; break;
	case '7' : cDec= 0x0111 ; cbit=7; break;
	case '8' : cDec= 0x1000 ; cbit=8; break;
	case '9' : cDec= 0x1001 ; cbit=9; break;
	case 'A' : cDec= 0x1010 ; cbit=10; break;
	case 'B' : cDec= 0x1011 ; cbit=11; break;
	case 'C' : cDec= 0x1100 ; cbit=12; break; 
	case 'D' : cDec= 0x1101 ; cbit=13; break;
	case 'E' : cDec= 0x1110 ; cbit=14; break;
	case 'F' : cDec= 0x1111 ; cbit=15; break;
	default : printf("invalid input");
	
}
	switch (hexaFull[3]){
	case '0' : dDec= 0x0000 ; dbit=0 ; break;
	case '1' : dDec= 0x0001 ; dbit=1; break;
	case '2' : dDec= 0x0010 ; dbit=2; break;
	case '3' : dDec= 0x0011 ; dbit=3; break;
	case '4' : dDec= 0x0100 ; dbit=4; break;
	case '5' : dDec= 0x0101 ; dbit=5; break;
	case '6' : dDec= 0x0110 ; dbit=6; break;
	case '7' : dDec= 0x0111 ; dbit=7; break;
	case '8' : dDec= 0x1000 ; dbit=8; break;
	case '9' : dDec= 0x1001 ; dbit=9; break;
	case 'A' : dDec= 0x1010 ; dbit=10; break;
	case 'B' : dDec= 0x1011 ; dbit=11; break;
	case 'C' : dDec= 0x1100 ; dbit=12; break;
	case 'D' : dDec= 0x1101 ; dbit=13; break;
	case 'E' : dDec= 0x1110 ; dbit=14; break;
	case 'F' : dDec= 0x1111 ; dbit=15; break;
	default : printf("invalid input");

}

 printf("Press ENTER key to convert");
 getchar();
 
 
 	avalue= abit*16*16*16;
	bvalue= bbit*16*16 ;
	cvalue= cbit*16 ;
	dvalue= dbit*1 ;
	
	sum = avalue+bvalue+cvalue+dvalue;
	 printf("value=%d", sum);
	
	
}
