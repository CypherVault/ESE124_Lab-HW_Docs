 #include <stdio.h>
 #include <ctype.h>


/*
Implement the following C functions and then call them repeatedly in the main program. Call each C function at least twice in the main function.
    • ####Function my_isalpha returns 1 if its parameter is an upper or lower case letter, otherwise it returns 0.
    • Function my_isdigit returns 1 if its parameter is a digit, otherwise it returns 0.
    • Function my_alnum  returns 1 if its parameter is a letter (upper or lower case) or a digit, otherwise it returns 0.
    • ####Function my_is_upper returns 1 if its parameter is an upper case letter, otherwise it returns 0.
    • ####Function my_is_lower retruns 1 if its parameter is a lower case letter, otherwise it returns 0. 
    • ####Function my_to_upper returns the upper case letter if the parameter is a lower case letter. Otherwise it returns the argument.
    • ####Function my_to_lower returns the lower case letter if the parameter is an upper case letter. Otherwise is returns the argument.

*/

int my_isalpha (char c){
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		return (1);}
		else return(0);
}



int my_is_upper(char c){
	if (c >= 'A' && c <= 'Z')
	return (1);
	else return (0);
}

int my_is_lower(char c, int r){
		if (c >= 'a' && c <= 'z'){
		
	r = 1; return (r);}
	else r=0; return (r);
}

int my_to_upper(char c, char up){
		if (c >= 'a' && c <= 'z'){
		
		up = c-32;
		return (up);}
		else return (c);
}

int my_to_lower(char c, char low){
	
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
	if (c >= 'A' && c <= 'Z'){
	
		low = c+32;
		return (low);}
		else  return(c);
	}
}


int main (void){
	
	char c, lowerconvertchar, upperconvertchar;
	int alnumresult;
	int times=0;
	while (1){
		
		 printf("Please enter a character. Times the program has run:%d\n", times);
		 scanf("%c", &c);getchar();
		//////////////////////////////////////////
		
		
		printf("Result:%d for my_isalpha\n", my_isalpha(c));
		
	 if (isdigit(c) == 0){
	 	printf("Result:0 for my_isdigit\n");}
	 	else{	printf("Result:1 for my_isdigit\n");
		 }
	 
	 
	 
			alnumresult = isalnum(c);
			
	if ( alnumresult==1 ){
		printf("Result:1 for my_isalnum\n");
	}else {
	printf("Result:0 for my_isalnum\n");}
	
	printf("Result:%d for my_isupper\n", my_is_upper(c));
    printf("Result:%d for my_islower\n", my_isalpha(c));
    printf("Result:%c for my_isalpha\n", my_isalpha(c));
	printf("Result:%c for my_isalpha\n", my_isalpha(c));
	
	
		
	times = 0;
		
	}
	

}
