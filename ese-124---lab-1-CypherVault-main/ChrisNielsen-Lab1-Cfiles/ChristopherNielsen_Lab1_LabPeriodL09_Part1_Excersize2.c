#include <stdio.h>
#include <stdlib.h>


int main(){
	

	
	
	int month ;
	int day ;
	int year ;
	
	printf("\n \n Please provide your date of choice in this format: 3/3/2002 ");
	printf("Enter the value of the Month, the Day, and the Year.");	scanf("%d%*c%d%*c%d" , &month, &day, &year);

	
	if ( day > 31 ) 
		printf("Invalid Date\n");
		else if ( day < 1)
		printf("Invalid Date\n");
		else if (month < 1 || month > 12)
		printf("Invalid Date");
		else if ( month == 2 && day > 28)
		printf("Invalid Date\n");
		else if (month == 4 && day > 30)
		printf("Invalid Date \n");
		else if ( month == 6 && day > 30)
		printf("Invalid Date\n");
		else if ( month == 9 && day > 30)
		printf("Invalid Date\n");
		else if ( month == 11 && day > 30)
		printf("Invalid Date\n");
		else if ( year < 1)
		printf("Invalid Date\n");
		else 
		printf(" \n The date you entered is: Mo %d - Day %d - Ye %d.", month, day, year);

getchar();

	
}
