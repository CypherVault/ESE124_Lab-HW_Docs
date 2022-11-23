 #include <stdio.h>


/*

    4. Integrate all the programs developed in parts B and C as a single scanner program. 
	This program will be extended next week to complete the scanner program. 


*/
int main (void){


		FILE *file, *output;
		char currentchar;
		int text[2000];
		char nextchar;
		char letter;
		char letter2;
		int i = 0, b=0;
		int n = 0;
	int	icopy;
	
		
		file = fopen("textfilecopy.txt","r");
		output = fopen("outputpartfinale.txt", "w");
		
	if ((file = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}
	
		if ((output = fopen ("outputpartfinale.txt", "w"))== NULL){ // "w" for write mode
		printf ("file outputpartfinale.txt cannot be opened.\n");
		exit (1);
	}
	
	
	

while ((letter = fgetc(file)) != EOF){
 //	printf("no");
	fprintf (output, "%c", letter);
	
 }

	fclose(file);
	
		file = fopen("textfilecopy.txt","r");
		if ((file = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}
	
 while ((letter2 = fgetc(file)) != EOF ){
 
 
 if (letter2 >='a' && letter2 <= 'z')
 {
 	letter2 = letter2 -32;
 	fprintf (output, "%c", letter2);
 }
 
 
 else if ((letter2 >='A' && letter2 <= 'Z' )||(letter2 == '_')){
 		fprintf (output, "%c", letter2);
 }
 
}

 fprintf (output, "%c", letter2);
 
	

	


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

//printf("%c", currentchar);
//printf("%c\n\n", nextchar);
    
    
    
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
	
	
	
	
	default : ;
}
 	}
    
}
