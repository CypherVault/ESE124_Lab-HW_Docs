#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*


Design and implement a basic text editor in C. The initial text is read from an input file, and the modified file is then saved into an output file. The input file consists of consecutive lines of words, every line having at most 10 words. The input file can have at most 10 lines. The maximum length of a word is 32 characters. Every line of the input file is stored as a separate row of a 2D array. A 2D array is used to store the text, each word being stored in the corresponding 2D array element. The line in the input file decides the row of the 2D array, and the position of the word in the line decides the column in the 2D array.

The text editor performs the following interactive commands:
    • I m sequence of words – inserts a new line (e.g., sequence of words) after line m.
    • D m n – deletes all lines between line m and line n.
    • R m n – replaces the lines between lines m and n with new lines that are input from the keyboard.
    • E – terminates editing.   
*/

int main (void){
	
	FILE *input;
	//txt
	char inputstring[60], commandchar, buf[200];
	int Lineselect1,Lineselect2;
	
	input = fopen("input7_part2.txt", "r");
	
	
	
	while (1){
		printf("Enter command in the following format:\nCMDLTTR-LineNumber1-LineNumber2\nStringofcharacters\n");
		scanf("%c%*c%d%*c %d", &commandchar, &Lineselect1, &Lineselect2);
		getchar();
	 
	 if (fgets(inputstring, sizeof(inputstring), stdin) != NULL)
	 
    printf("%s", inputstring);
	
	switch (commandchar){
		/////////
		case 'I':
		
		
		
		break;
		//////////
		case 'D':
		
		break;
		///////////
		case 'R':
		
		break;
		//////////
		case 'E':
		
		return (0);
		break;
		///////////
		default:
			printf("Invalid character letter");
			break;
		
	}
	 
		
	}
	return (0);
	
}
