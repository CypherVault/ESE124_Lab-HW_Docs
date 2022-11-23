#include <stdio.h>


/*

    1. Devise a C program that reads up to 30 decimal numbers from an input file, and then sorts them in decreasing order. 
	The sorted decimal values are saved in an output file. Perform sorting using the bubble-sort algorithm. 

Steps: 
    • TAs will explain the pseudocode of bubble-sort
    • Select the variables of the C program
    • Devise the code to read decimal numbers from an input file
    • Devise the code to write decimal values into an output file
    • Code the pseudocode
    • Complete the C program
    • Test your C program


*/
int main (void){
	FILE *input, *output;
	//	char letter;
		int b = 20;
		int p=0;
		int n=0;
		int j;
		int q;
		int index=0;

	int numbers [30];
	int i;
	int temp;
		
		input = fopen("decimalinput.txt","r");
		output = fopen("decimaloutput.txt", "w");
		
	if ((input = fopen ("decimalinput.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file decimalinput.txt cannot be opened.\n");
		exit (1);
	}
	
		if ((output = fopen ("decimaloutput.txt", "w"))== NULL){ // "w" for write mode
		printf ("file decimaloutput.txt cannot be opened.\n");
		exit (1);
	}
	

	 //printf("no");
	
while ((fscanf(input,"%d", &q)) != EOF){
  //printf("no");
	numbers [index++]= q;
	n++;
	
 }   
        for (i = 0 ; i < ( n - 1 ); i++){
                for (j= 0 ; j < n - i - 1; j++){
                        if(numbers[j] < numbers[j+1]){
                                temp=numbers[j];
                                numbers[j]   = numbers[j+1];
                                numbers[j+1] = temp;
                        }
                }
        }
        //printf("\nSorted list in descending order : ");
        for ( i = 0 ; i < n ; i++ ){
		
                fprintf(output, " %d ", numbers[i]);
                printf(" %d ", numbers[i]);}
        return 0;
	
}
