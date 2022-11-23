 #include <stdio.h>


/*

    4) Devise a C program that counts the number of positive, zero, and negative values that are read from an input file.
	 The three counts are displayed on the screen.


*/

int main (void){
	
	FILE *input;
	
	int num;
	int positivecount = 0, zerocount =0, negativecount=0;
	
	input = fopen("numbersfile.txt","r");
		
	if ((input = fopen ("numbersfile.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file numbersfile.txt cannot be opened.\n");
		exit (1);
	}
	
	
		 while ((fscanf(input, "%d", &num)) != EOF){
		 	
		 	if (num>0){
		 		positivecount++;
			 }
			 else if( num<0){
			 	negativecount++;
			 }
			 else {zerocount++;
			 }
		 	
		 }
	printf("+:%d, 0:%d, -:%d", positivecount, zerocount, negativecount );
	
}
