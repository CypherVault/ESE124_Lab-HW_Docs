#include <stdio.h>

/*
    3. (Acknowledgement: This exercise is presented at https://condor.depaul.edu/ntomuro/courses/309/notes/pointer_exercises.html):
	
	 Write a function that returns a pointer to the maximum value of an array of double.

*/

int main (){
	double array[]= {120.1 , 110.029 , 201.22, 230.4, 4.008, 495.4 , 65.004, 89.007, 8339.001, 89.000003 };
	double *arrayptr;
	int i, x, pointernum=0;
	
	double max;
	arrayptr = array;
	max=0;
	x=(sizeof(array)/sizeof(array[0]));
	printf("number of elements:%d", x);
	
		 for (i=0;i<x;i++){
		 	
		 	if (array[i]>max){
		 		max=array[i];
		 		printf("\nMax detected: %lf", max);
		 		pointernum=i;
			 }
			 else{
			 	
			 }
		 	
		 }
		 

	printf("\nAdress from pointer reffering to largest number:%p\n", arrayptr+pointernum);	
printf("Element of array with the largest value.%d", pointernum);
		//	printf("\n%p", &array[pointernum]);
		
	//pointmax(array);
	
}
 /*
 int pointmax(int array){
 	int x;
 	
 	for 
 	
 	
 	x = 
 	return ()
 }
*/
