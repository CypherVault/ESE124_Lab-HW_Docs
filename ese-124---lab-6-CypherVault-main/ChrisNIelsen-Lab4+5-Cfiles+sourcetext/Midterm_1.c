 #include <stdio.h>
 #include <stdlib.h>


/*

    1) Devise a C program that determines whether a 1D array of char (string) is a sparse array or not.
	 The 1D array has dimensions 15 elements.
	  We define an array to be sparse if its number of letters 
	  (lower case or capitals) is at least twice as large as the number of the rest of the characters in the string. 
	  The program reads the strings from an input file. The results re displayed on the screen.  

*/

int main (void){
		FILE *input;
		int i = 0;
		char p;
		char checker;
		char string[32];
		int letterCount=0;
		int notLetterCount=0;
		
		input = fopen("inputsparse.txt","r");
		
	if ((input = fopen ("inputsparse.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file inputsparse.txt cannot be opened.\n");
		exit (1);
	}
	
	
	
	for ( i; i<15; i++ ){
		
		string[i]=fgetc(input);
		
		if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z' ){
			letterCount++;
			
		}
		else {
			notLetterCount++;
		};
	};
	
	if ( letterCount >= 2*notLetterCount){
		printf("sparse array");
	}
	else{
		printf ("not sparse array");
	}



	return (0);
	
};
	
