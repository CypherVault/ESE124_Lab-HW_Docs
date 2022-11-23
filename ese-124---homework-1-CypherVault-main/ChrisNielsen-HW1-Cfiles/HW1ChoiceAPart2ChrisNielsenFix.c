#include <stdio.h>

/*HW 1 DOBOLI CHOICE A Code 1 CHRIS NIELSEN*/


int main (void){
	
	
	
	/*sets the correct variables needed */
		
		char c ;
		int con = 0 ;
		int vow = 0 ;
		/*retrieves a number from the user.*/
	printf ("WARNING: If you enter a character that is not either a Capital or Lowercase letter on the standard American Keyboard the program will always return a Consonant. Please also press the ENTER key to proceed to have the code continue. \n Please enter a character of the alphabet. \n ");	
	scanf ("%c", &c);
	getchar ();
	printf ("  \n");

	/*checks what the input was in the case of all vowels and Y cause i think Y is a vowel and sets vow = true also if it doesnt then i set a useless variable because im lazy and releized i could do without it*/
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' )
		  vow = 1 ;
		else 
			con = 1  ;
			
			/*if it was a vowel itll say it, and read out the character along with its value and do the same with a consonant, 	also putting this in a while completely breaks this code i dont fuckin know man*/
			
	if ( vow == 1)
		printf("%c is a Vowel " , c);	
			else
			printf(" %c is a Consonant " , c);

	printf("and the ASCII value of %c is %d." ,c ,c);		

}
