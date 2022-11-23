
#include <string.h>
#include <stdio.h>
#include <stdlib.h>	
#include <math.h>


#define STR_LENGTH 32


	
	int main(){
		
		FILE *input, *output;
		char currentchar;
		int text[2000];
		char nextchar;
		char letter;
		char letter2;
		int p = 0, b=0;
		int n = 0;
		int	icopy;	
		float sum = 0.0f;
		char exitchar;
	
		char word [STR_LENGTH];
		char e [STR_LENGTH];
	
		char c;
		int i,k, m = 1;
	float avg = 0.0f;
	float A = 0.0f, B = 0.0f;
float x = 0.0f;
	
		
		input = fopen("textfilecopy2.txt","r");
		output = fopen("outputpartfinale.txt", "w");

	
	
	
	
	
	
/*	

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
 */
	
	fprintf(output, "\nSum of all numbers:%f\n", sum);
	fprintf(output, "\nAverage of all numbers:%f\n", avg);
	
while ((letter = fgetc(input)) != EOF){
 //	printf("no");
	fprintf (output, "%c", letter);
	
 }

	fclose(input);
	
		input = fopen("textfilecopy.txt","r");
		if ((input = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}
	
 while ((letter2 = fgetc(input)) != EOF ){
 
 
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

	if ((input = fopen ("textfilecopy.txt", "r"))== NULL){ //"r" for the read mode
		//printf ("file textfilecopy.txt cannot be opened.\n");
		exit (1);
	}

    while ((currentchar = fgetc(input)) != EOF ){
    	//printf("%c", currentchar);
    	text[i]= currentchar;
      p++;
    }
    fclose(input);

    text[p] = '\0';

    for (p = 0; text[p] != '\0'; p++){
      printf("%c", text[i]);
      
  }
 	 icopy = p;
    printf("%d\n", p); 
    
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
