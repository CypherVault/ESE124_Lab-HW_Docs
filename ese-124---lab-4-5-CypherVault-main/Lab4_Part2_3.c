 #include <stdio.h>


/*

    1. Design a C programs that recognizes the following operators in the text input file: +, -, *, /, %, @, &, ^.
	 The corresponding text output file will contain only the recognized operators denoted as follows:
	  PLUS for + in the input file, MINUS for – in the input file, MULTIPLY, DIVIDE, MODULO, AT, BITWISE AND, BITWISE OR.  


    2. Extend the previous C program, so that the scanner program also recognizes the operators
	 ++ (INCREMENT), -- (DECREMENT), = (ASSIGN), += (ADD ASSIGN), *= (MULTIPLY ASSIGN), == (EQUAL). 
	 The output file will include the words inside the round brackets for each recognized operator. 

    3. Extend the previous C program, so that the scanner also recognizes the following special characters: 
	. (DOT) , (COMMA) ; (SEMICOLON) : (COLON)


*/

int main (void){


		FILE *file, *output;
		char currentchar;
		int text[2000];
		char nextchar;
		int i = 0, b=0;
		int n = 0;
	int	icopy;
	
		
		file = fopen("textfilecopy.txt","r");
		output = fopen("outputpart6.txt", "w");
		
	if ((file = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}
	
		if ((output = fopen ("outputpart6.txt", "w"))== NULL){ // "w" for write mode
		printf ("file outputpart6.txt cannot be opened.\n");
		exit (1);
	}
	
	
	


////////////////////////////////////////////////////////////////////////////////////////

	if ((file = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		//printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}

    while ((currentchar = fgetc(file)) != EOF ){
    	//printf("%c", currentchar);
    	text[i]= currentchar;
      i++;
    }
    fclose(file);

    text[i] = '\0';

    for (i = 0; text[i] != '\0'; i++){
      printf("%c", text[i]);
      
  }
 	 icopy = i;
    printf("%d\n", i); 
    
    for (n; n<icopy ; n++){
currentchar = text[n];
nextchar = text[n+1];

printf("%c", currentchar);
printf("%c\n\n", nextchar);
    
    
    
 switch (currentchar){

	case '+' :   
	if (nextchar == '+') {
	n++; fprintf (output, "(INCREMENT) ");}
	else if( nextchar == '='){
		n++; fprintf (output, "(ADD ASSIGN )");} 
	else {	fprintf (output, "PLUS ");  
	}
break;
////////////////
	case '-' :	
	if ( nextchar == '-'){
	n++; fprintf (output, "(DECREMENT) "); }
	else{fprintf (output, "MINUS ");  }
	
break;
////////////////	
	case '*' :	 	
	if ( nextchar == '='){
	n++;fprintf (output, "(MULTIPLY ASSIGN) "); }
	else{fprintf (output, "MULTIPLY ");  }
	
break;
////////////////
	case '=' :	 
	if ( nextchar == '='){
	n++; fprintf (output, "(EQUALS) "); }
	else{ fprintf (output, "(ASSIGN )");  }
	
break;
////////////////
    case '/' :	fprintf (output, "DIVIDE "); break;
	case '%' :	fprintf (output, "MODULO "); 	break;
    case '@' :	fprintf (output, "AT "); 	break;
	case '&' :	fprintf (output, "BITWISE AND "); 	break;
	case '^' :	fprintf (output, "BITWISE OR "); 	break;
	case '.' : fprintf (output, "(DOT) "); 	break;
	case ',' : fprintf (output, "(COMMA) "); 	break;
	case ';' : fprintf (output, "(SEMICOLON) "); 	break;
	case ':' : fprintf (output, "(COLON) "); 	break;
	//. (DOT) , (COMMA) ; (SEMICOLON) : (COLON)
	default ://printf("X...")
	;
}

 	}
    
    
    
    
    
    
    
    
    
}
