 #include <stdio.h>


/*


    1. Design a C program that reads characters from a text input file and writes them into a text output file. 
	The input and output files must be identical.  

*/

int main (void){
	FILE *input, *output;
		char letter;
		input = fopen("textfilecopy.txt","r");
		output = fopen("outputtextfilecopy.txt", "w");
		
	if ((input = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}
	
		if ((output = fopen ("outputtextfilecopy.txt", "w"))== NULL){ // "w" for write mode
		printf ("file outputtextfilecopy.txt cannot be opened.\n");
		exit (1);
	}

 while ((letter = fgetc(input)) != EOF){
 //	printf("no");
	fprintf (output, "%c", letter);
 }

}
