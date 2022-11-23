 #include <stdio.h>


/*

    1. Design a C programs that recognizes the following operators in the text input file: +, -, *, /, %, @, &, ^.
	 The corresponding text output file will contain only the recognized operators denoted as follows:
	  PLUS for + in the input file, MINUS for – in the input file, MULTIPLY, DIVIDE, MODULO, AT, BITWISE AND, BITWISE OR.  


*/

int main (void){
	
		FILE *input, *output;
		char letter;
		
		/*
		char plus
		char minus
		char multiply
		char multiply
		char
		char
		char
		char
		*/
		
		input = fopen("textfilecopy.txt","r");
		output = fopen("outputpart4.txt", "w");
		
	if ((input = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}
	
		if ((output = fopen ("outputpart4.txt", "w"))== NULL){ // "w" for write mode
		printf ("file outputpart4.txt cannot be opened.\n");
		exit (1);
	}
	
	
 while ((letter = fgetc(input)) != EOF ){
 
 switch (letter){

	case '+' :  	fprintf (output, "PLUS ");     break;
	case '-' :		fprintf (output, "MINUS "); 	break;
	case '*'	:	fprintf (output, "MULTIPLY"); 	break;
    case '/' :			fprintf (output, "DIVIDE "); break;
	case '%'	:	fprintf (output, "MODULO "); 	break;
    case '@'	:	fprintf (output, "AT "); 	break;
	case '&'	:	fprintf (output, "BITWISE AND "); 	break;
	case '^'	:	fprintf (output, "BITWISE OR "); 	break;
	default :printf("X...");
}

}
}
