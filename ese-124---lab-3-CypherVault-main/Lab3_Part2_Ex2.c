  #include <stdio.h>


/*

    2. Design a C program that reads decimal numbers from the keyboard. The program reads at least three numbers. 
	Find and display the smallest number, the second smallest number, and the third smallest number of the set. 
	The program ends if the largest number encountered does not change for n iterations (such as the largest number does not change 
	for the next n numbers since it changed). The value of n is read from the keyboard. Value n is greater or equal to 3. 

*/

int main (void){
	
	int n;
	float input;
	int initial;
	int add;
	float biggest;
	float middle;
	float smallest;
	
	printf("Enter a float value compatible decimal\n");
	scanf("%f", &input);
	printf("Enter the n iterations that in which the largest number doesnt change, it must be greater than or equal to 3. If it isnt the codde will make it so.\n");
	scanf("%d", &n);
	 
	 if (n<0){
	 printf("invalid\n");
	
}
	 else if (n<3){
	 	add = 3 - n;
	 	n = add + n;
 }
	 
	initial = n;
	biggest = input;
	
	printf("The largest number is %f. The 2nd smallest number is :N/A. The smallest number is: N/A\n", biggest);
	
	printf("Enter a floating decimal.\n");
	scanf("%f", &input);
	if (input>biggest){
		middle = biggest;
		biggest=input;
	}
	else if (input < biggest){
		middle=input;
	}
	else if ( input == biggest){
	 n = n - 1;
	printf("same value\n");
}	
	printf("The largest number is %f. The 2nd smallest number is :%f. The smallest number is: N/A\n", biggest, middle);
	printf("Enter a floating decimal.\n");
	scanf("%f", &input);
	
	if (input > biggest){
		smallest = middle; 
		middle = biggest;
		biggest = input;
	}
	else if (input > middle && input < biggest){
	smallest = middle;
	middle = input;
    }
	else if (input < middle){
		smallest = input;
	}
	else if ( input == biggest){
		n = n-1;
	}
	
	while ( n > 0 ){
		printf("%d interations left.", n);
		printf("The largest number is %f. The 2nd smallest number is :%f. The smallest number is: %f\n", biggest, middle, smallest);
		printf("Enter a floating decimal.\n");
		scanf("%f", &input);
	
	
if ( input < smallest ){
			smallest = input;
		
}
	
		else if ( input >  biggest){
		
		middle = biggest;
		biggest = input;
	}
	else if ( input > middle && input < biggest){
		smallest = middle; 
		middle = input;
	}	
		else if ( input < middle && input > smallest ){
		
	}	
		else if ( input == biggest){
			n = n-1;
		}
		
	}
}
