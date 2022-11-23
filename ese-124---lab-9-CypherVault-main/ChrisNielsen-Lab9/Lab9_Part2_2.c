 #include <stdio.h>
#define none 0
#define C 1
#define CY 2
#define CYB 3
#define CYBO 4
#define CYBOT 5
#define CYBOTelse 6
#define NUM_STATES 8
#define NUM_INPUTS 8
	
/*

    C. Part 2 (1 hour and 30 minutes) 

Devise FSMs that implement the following functionalities (a separate FSM for each case): 

  
    2. Accepts CYBOT followed by any characters.
(Acknowledgment: Based on the exercises posted at
 http://www.cs.cmu.edu/~tom7/211/fsm1-answers.html)

*/

int main (void){
		int next_state_table[NUM_STATES][NUM_INPUTS] = 
{
	{C,none,none,none,none,none },
	{C,CY,none,none,none,none },
	{C,none,CYB,none,none,none },
	{C,none,none,CYBO,none,none },
	{C,none,none,none,CYBOT,none },
	{CYBOTelse,CYBOTelse,CYBOTelse,CYBOTelse,CYBOTelse,CYBOTelse },
	{C,none,none,none,none,none }
};


int output_table[NUM_STATES][NUM_INPUTS] = 
{
	{0,0,0,0,0,0 },
	{0,0,0,0,0,0 },
	{0,0,0,0,0,0 },
	{0,0,0,0,0,0 },
	{0,0,0,0,0,0 },
	{1,1,1,1,1,1 },
	{0,0,0,0,0,0 }
	
	
	
};



int current_state = 0;
int output = 0;

while(1)
{
char c; 
int column;
printf("Please enter a charecter: "); //ABFROG
c = getchar(); //you can use scanf here too. there is no difference
getchar();
switch(c)
{
case 'C': 
column = 0;
break;
case 'Y':
column = 1;
break;
case 'B':
column = 2;
break;
case 'O':
column = 3;
break;

case 'T':
	column =4;
	break;

default:
column  = 5;
break;

}

output = output_table[current_state][column];
	
	
printf("output: %d \n", output);
current_state = next_state_table[current_state][column]; 
	
	
	

	
}
}




