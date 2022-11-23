#include <stdio.h>
#define w 0
#define A 1
#define AA 2
#define AAA 3
#define NUM_STATES 4
#define NUM_INPUTS 4
/*

    C. Part 2 (1 hour and 30 minutes) 

Devise FSMs that implement the following functionalities (a separate FSM for each case): 

    1. Accepts strings with exactly 3 A's.
   
(Acknowledgment: Based on the exercises posted at
 http://www.cs.cmu.edu/~tom7/211/fsm1-answers.html)

*/

int main (void){
	
		int next_state_table[NUM_STATES][NUM_INPUTS] = 
{
	
	{A,w},
	{AA, w},
	{AAA, w},
	{w, w}
};
	
	
int output_table[NUM_STATES][NUM_INPUTS] = 
{
	{ 0,0 },
	{ 0, 0},
	{ 1,0 },
	{0 ,0 },
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
case 'A': 
column = 0;
break;
default:
column  = 1;
break;

}

output = output_table[current_state][column];
	
	
printf("output: %d \n", output);
current_state = next_state_table[current_state][column]; 
	
	
	
}
}
