 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

    2) Devise a C program that reads strings from an input file, and modifies each string by removing all consecutive duplicate characters.
	 The strings with the removed characters are saved in an output file. (e.g., input “Mississippi” is saved as “misisipi” in the output file)


*/


	
	
int main (void){
		FILE *input, *output;
		int i;
		int o;
		int ci=0;
		
		
		
		char p;
		char letter;
		char lastletter=']';
		char inputstrings[100];
		char convertedstrings;
		char check;
	
		
		input = fopen("mississippistrings.txt","r");
		output = fopen("converted.txt", "w");
		
	if ((input = fopen ("mississippistrings.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file mississippistrings.txt cannot be opened.\n");
		exit (1);
	}
	
		if ((output = fopen ("converted.txt", "w"))== NULL){ // "w" for write mode
		printf ("file converted.txt cannot be opened.\n");
		exit (1);
	}

	
	 while ((letter = fgetc(input)) != EOF)
        {
        	check=letter;
        	
			if (check == lastletter){
				printf("-");
			}
			else if (check != lastletter) {
		
				printf("%c", letter);
				putc(letter, output);
			}
			lastletter=check;
					
			
	}
		
		fclose(input);
		fclose(output);
		
		
	}
	
	
	

