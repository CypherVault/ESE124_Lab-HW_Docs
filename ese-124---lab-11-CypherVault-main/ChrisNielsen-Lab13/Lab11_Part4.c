#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 20
#define MAX_LEN_2 10
#define NR_BOOKS 100
/*

    1. The program reads a text file that has the following structure. 
	The first row includes the number of following rows in the file. 
	Then, every line of the text file includes the following information:
	first name (string) last name (string) zip code (integer) age (integer) GPA (float).
    Write a C function that reads the input file and stores the information for each person in a dynamically created array of struct elements.
    2. "D" Write a C function that displays the content of the array storing the input file.
    
	
	3. "O" Write a C function that orders the array in the decreasing order of the person’s GPA.
  
  
    4. "A" Write a C function that orders the array in alphabetic order of the person’s last name.
    
	
	5. "Z" Write a C function that reads a zip code from the keyboard and then displays all the persons with this zipcode.
    6. Write a main program that repeatedly reads and implements the following commands:
	 D for the function at step 2; O for the function at step 3; A for the function at step 4; Z for the function at step 5.    
*/

 struct Books{ 
	char firstname[50];
	char lastname[50];
    int zipcode;
	int age;
	char select;
	float gpa;
	
} Book_data;

struct Books data[NR_BOOKS], aux; //global variable (accessible to any function) //books is a vectors (1D array)


void commands(char select, struct Books, int j, int i, char searchzip, int swapped){

	while (select!='e'){
	printf("\nPlease enter your command.\n");
	scanf("%c", &select);
	
	if (select=='D'){
	for (j = 0; j < i; j++){
		printf ("First Name: %s Last Name: %s\n zipcode: %d \nAge: %d \nGPA :%f ", data[j].firstname, data[j].lastname, data[j].zipcode, data[j].age, data[j].gpa);
}
}else if (select =='O'){

		swapped = 1; //swapped outside the while loop so at least the program will read it 
	while (swapped == 1){ //while there's swapping happening, the sorting will continue
	swapped = 0; //reset swap to 0
		for (j = 0; j < i - 1 ; j++){ // j < i - 1 is the condition, because of the j+1
			if ( (data[j].gpa > data[j+1].gpa)){ 
				aux = data[j];
				data[j] = data[j+1]; //taking the entire element and move them as a whole instead of doing it one by one
				data [j+1] = aux;
				swapped = 1;

			}
		}
	}
	for (j = 0; j < i; j++){
		printf ("All Data sorted by decreasing gpa. First Name: %s Last Name: %s\n zipcode: %d \nAge: %d \nGPA :%f ", data[j].firstname, data[j].lastname, data[j].zipcode, data[j].age, data[j].gpa);
}}
else if (select =='A'){
	
	 //swapped outside the while loop so at least the program will read it 
	while (swapped == 1){ //while there's swapping happening, the sorting will continue
	swapped = 0; //reset swap to 0
		for (j = 0; j < i - 1 ; j++){ // j < i - 1 is the condition, because of the j+1
			if (strcmp (data[j].lastname, data[j+1].lastname) > 0){ 
				aux = data[j];
				data[j] = data[j+1]; //taking the entire element and move them as a whole instead of doing it one by one
				data [j+1] = aux;
				swapped = 1;
			}		
		}
	}
		for (j = 0; j < i; j++){
		printf ("Data sorted by alphabetical first name order. First Name: %s Last Name: %s\n zipcode: %d \nAge: %d \nGPA :%f ", data[j].firstname, data[j].lastname, data[j].zipcode, data[j].age, data[j].gpa);
}

}
else if (select == 'Z'){
	printf("Please enter a zip code of your choice, to see if anyone has that zipcode.");
	scanf("%d", &searchzip);
		for (j = 0; j < i - 1 ; j++){ // j < i - 1 is the condition, because of the j+1
			if ( (data[j].zipcode == searchzip)){ 
					printf ("First Name: %s Last Name: %s\n", data[j].firstname, data[j].lastname);

			}
		}
	}
	
}else{printf("No valid input detected");
}
}


int main (){
	FILE *f; //*filename is the pointer to the file
	int i = 0, j = 0;
	int swapped=1;
	char searchzip;
	char s [MAX_LEN_2];
	char select;
	float Total_paper = 0.0; //initailize to 0 because computing sum
	float Total_electronic = 0.0; 
//	printf("test");
	
	if ((f = fopen ("students.txt", "r")) == NULL){
		printf ("File books.txt cannot be opened.\n");
	
		exit (1);
	}
//	printf("read and worked");
	while (fscanf (f, "%s %s %d %d %f", data[i].firstname, data[i].lastname, &data[i].zipcode, &data[i].age, &data[i].gpa) !=  EOF){ //fscanf from file f //the & is pointing the address to the varioiable 
	//&Books[i].price is pointer to and address of variable //title, author, courseID is an array is already a pointer so we don't need to put & in front of it
	//using s for FORMAT_TYPE because they're not strings, they're labels
	//	printf("test");
		i++;
	
	//converting from the string to the corresponding label //refer line 11

			
 //increment i (keeps reading rows from input file and stores the index)
		
	}
	
	commands(select, Books, j ,i, searchzip, swapped);
	
}

