 #include <stdio.h>


/*


    2. Extend the previous C program, so that the scanner program also recognizes the operators
	 ++ (INCREMENT), -- (DECREMENT), = (ASSIGN), += (ADD ASSIGN), *= (MULTIPLY ASSIGN), == (EQUAL). 
	 The output file will include the words inside the round brackets for each recognized operator. 

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
		output = fopen("outputpart5.txt", "w");
		
	if ((file = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}
	
		if ((output = fopen ("outputpart5.txt", "w"))== NULL){ // "w" for write mode
		printf ("file outputpart5.txt cannot be opened.\n");
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
	default ://printf("X...")
	;
}

 	}
    
    
    
    
    
    
    
    
    
}
	}
	else if ( currentchar = '*'){
			if (nextchar = '='){
				fprintf (output, "(MULTIPLY ASSIGN) ");	}
			else {
				fprintf (output, "MULTIPLY ");	}
		}
		else if ( currentchar = '='){
			if (nextchar = '='){
		fprintf (output, "(EQUAL) ");	}
	else { fprintf (output, "(ASSIGN) ");
		}	}
		else if ( currentchar = '-'){
			if (nextchar ='-'){
				fprintf (output, "(DECREMENT) ");}
				else {fprintf (output, "MINUS ");}
		}
		else if ( currentchar = '/'){
			fprintf (output, "DIVIDE ");
		}
		else if (currentchar = '%'){
			fprintf (output, "MODULO ");
		}
		else if (currentchar = '@'){
			fprintf (output, "AT ");
		}
		else if	(currentchar = '&'){
			fprintf (output, "BITWISE AND ");
		}
		else if (currentchar = '^'){
			fprintf (output, "BITWISE OR ");
		}
	else {printf("X");
	}
			
		}
}	/*PLUS MINUS MULTIPLY, DIVIDE, MODULO, AT, BITWISE AND, BITWISE OR ,(INCREMENT),(DECREMENT),(ASSIGN),(ADD ASSIGN),(MULTIPLY ASSIGN),(EQUAL). 
		*/



