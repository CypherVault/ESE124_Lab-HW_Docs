 #include <stdio.h>


/*
Design and implement a C program that performs the following operations on a 2D array with 5 rows and 5 columns. 
The array elements are decimal numbers that are read from an input file. Every array row appears on a separate line of the input file. 
 
    1. The program finds the sum of three rows of the 2D array. The row numbers are read from the keyboard. The sum is displayed.
    2. Displays the upper triangular part of the 2D arrays, and then compute the sum of its elements.
    3. Swaps rows m and n in the 2D array. The values of m and n are read from the keyboard. The resulting 2D array is displayed. 
    4. Multiplies the 2D arrays with its transpose. The resulting array is displayed.

 

*/
#define num_rows 5
#define num_cols 5


int main(){
	
	float A[num_rows][num_cols], B[num_rows][num_cols], C[num_rows][num_cols], temp1[num_rows][num_cols], temp2[num_rows][num_cols];
	int i, j, p, n, a,b;
	float row1sum=0, row2sum=0, row3sum=0;
	float sum=0;
	int row1select, row2select, row3select;
	FILE *input,*output;
	int colsize=num_cols;
	float holdswap;
	int printiteration=0;
	
	input = fopen("part7_1input.txt", "r");
printf("enter row identifiers. cannot be bigger than: %d\n\nROW1:0\nROW2:1\nROW3:2\netc....\n\n", colsize-1);
		printf("enter 1st row identifier.\n");
		scanf("%d", &row1select);
		if( row1select>colsize){
			printf("invalid input");
			return(0);
		}
		
		getchar();
		printf("enter 2 row identifier\n");
			scanf("%d", &row2select);
			if( row2select>colsize){
			printf("invalid input");
			return(0);
		}
	
		getchar();
		printf("enter 3rd row identifier\n");
		scanf("%d", &colsize);
	getchar();
	
			if( row3select>colsize){
			printf("invalid input");
			return(0);
		}
	if ((input = fopen ("part7_1input.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file part7_1input.txt cannot be opened.\n");
		exit (1);
	}
	
	
	
	for (i=0; i<num_rows; i++){
		for (j=0; j<num_cols; j++){
			fscanf(input , "%f", &A[i][j]);
		}
	}
	
	
	for (p=0; p<num_cols; p++){
	row1sum+= A[row1select][p];
	row2sum+= A[row2select][p];
	row3sum+= A[row3select][p];
	
	}
	sum=row1sum+row2sum+row3sum;
		printf("%f", sum);
		printf("\n");

/*	
	for (i=0; i<num_rows; i++){
		for (j;j!=0;j--){
		printf( "%f", A[i][j]);
		printf("\n");
		}
	}
	*/	
	
	
	fclose(input);
	
	input = fopen("part7_1input.txt", "r");
	
	for (i=0; i<num_rows; i++){
		for (j=0; j<num_cols; j++){
			fscanf(input , "%f", &A[i][j]);
		}
	}
	
	for (i=0; i<num_rows; i++){
		for (j=0; j<num_cols; j++){
		A[i][j]=  A[i][j] * A[j][i];
		}
			printf("Transposed value of[%d][%d]: %d: %f ", i,j, printiteration++, A[i][j]);	
	}
	
	printf("\n\nTRIANGLE\n\n");
	
	
	n=colsize;
	for (i=0; i<num_rows; i++){
		for (j=0; j<n-i; j++){
		printf("%f ", A[i][j]);	
		}printf("\n");
		}
	//	printf("column amount:%d", n);


//swap mn function

printf("enter the two rows to swap.");
scanf("%d %d" ,&a,&b);
for (i=0; i<num_rows; i++){
temp1[i] = A[a][i];
 temp2[i] = A[b][i];//this throws an error just cause its not a compatible type? no idea why only this wont work
 A[b][i] = temp1[i];
 A[a][b] = temp2[i];
}
	for (i=0; i<num_rows; i++){
		for (j=0; j<num_cols; j++){
			printf("%f", &A[i][j]);
		}
		printf("\n");
	}

return (0);
}
