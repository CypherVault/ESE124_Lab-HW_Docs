 #include <stdio.h>

/*

    3. Design a C program that repeatedly checks if a character is a vowel or a consonant.  
	The character is input from the keyboard. The program ends when the character ‘#’ is input.


*/
	
	int main (){
	char c;
	
	printf("letter: (ends when # is entered)\n");
	scanf("%C", &c);
	getchar(); //so it won't read the 'enter' after the input
	
	while (c!= '#'){
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' ){
	printf("Character %c is a vowel\n", c);	}
	
		else if ( c == 'b' || c == 'c' || c == 'd' ||c == 'f' ||c == 'g' ||c == 'h' ||c == 'j' ||c == 'k' ||c == 'l' ||c == 'm' ||c == 'n' ||c == 'p' ||c == 'q' ||c == 'r' ||c == 's' ||c == 't' ||c == 'v' ||c == 'w' ||c == 'x' ||c == 'z' || c == 'B' || c == 'C' || c == 'D' ||c == 'F' ||c == 'G' ||c == 'H' ||c == 'H' ||c == 'K' ||c == 'L' ||c == 'M' ||c == 'N' ||c == 'P' ||c == 'Q' ||c == 'R' ||c == 'S' ||c == 'T' ||c == 'V' ||c == 'W' ||c == 'X' ||c == 'Z' ){
		{printf("Character %c is a consonant\n", c);	
	}}else 
		printf("The inputted character is not a letter\n", c);
		
		 
	printf("\nletter:(ends when # is entered)\n");
	scanf("%C", &c);
	getchar(); //so it won't read the 'enter' after the input
	
	}
		


}

