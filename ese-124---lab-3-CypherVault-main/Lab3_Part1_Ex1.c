 #include <stdio.h>


/*

   
    1. Design a C program that reads from the keyboard 15 decimal values and computes 
	(a) the average value of the positive values and (b) the average of the negative values. Display the two average values on the screen.
*/

int main() {

float sumPositive = 0.0f;
float sumNegative = 0.0f;
int numPositive = 0; 
int numNegative = 0;

float inputNumber;

int i;

for (i = 0; i < 15; i++) //i = i + 1
{
printf("please enter a number: ");
scanf("%f",  &inputNumber);

if(inputNumber > 0) 
{
sumPositive = sumPositive + inputNumber;
numPositive++;
}
else
{
sumNegative = sumNegative + inputNumber;
numNegative++;
}
}




if(numPositive !=0) 
{
printf("Average of all the positive numbers = %f\n", sumPositive / numPositive);
}
else
{
printf("No positive values were inputted.\n");
}



if(numNegative !=0)
{
printf ("the average of all of the negative numbers = %f\n", sumNegative / numNegative);
}
else 
{
printf("No negative values were inputted.\n");
}


if(numNegative && numPositive == 0)
{
printf("No positive or negative values found.");
}
return (0);

}

