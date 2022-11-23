 #include <stdio.h>


/*

    2. Design a C program that reads characters from a text file and recognizes the identifiers in the text file. 
	It ignores the rest of the characters. An identifier is a sequence of letters, digits, and underscore characters,
	where the first character is always a letter or an underscore character. 
	Lower and upper case characters can be part of the identifier. The recognized identifier are output into the output text.


*/

int main (void){
	
		FILE *input, *output;
		char letter;
		input = fopen("textfilecopy.txt","r");
		output = fopen("outputpart2.txt", "w");
		
	if ((input = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}
	
		if ((output = fopen ("outputpart2.txt", "w"))== NULL){ // "w" for write mode
		printf ("file outputpart2.txt cannot be opened.\n");
		exit (1);
	}
	
	
 while ((letter = fgetc(input)) != EOF ){
 
 if ( (letter >='a' && letter <= 'z' ) || (letter >='A' && letter <= 'Z' ) || (letter == '_') )
 {
 
 	fprintf (output, "%c", letter);}
 }

	
}
