#include <stdio.h>
#define none 0
#define M 1
#define MU 2
#define MUR 3
#define MURM 4
#define MURMU 5
#define MURMUR 6
#define MURMURS 7
#define NUM_STATES 8
#define NUM_INPUTS 8
	
/*


    B. Part 1 (60 minutes)

Devise FSMs that implement the following functionalities (a separate FSM for each case): 

    1. Accepts any string containing FROG.
    2. Accepts any string containing MURMURS.
`
*/
int main (){
	
	int next_state_table[NUM_STATES][NUM_INPUTS] = 
{
	{M,none,none,none,none},
	{M, MU, none, none, none},
	{M, none, MUR, none, none},
	{MURM, none, none, none,none},
	{M,MURMU, none,none,none },
	{ M, none, MURMUR, none, none},
	{MURM, none,none, MURMURS,none	}, 
	{M, none,none,none,none}
};


int output_table[NUM_STATES][NUM_INPUTS] = 
{
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0}, 
{0,0,0,0,0}, 
{0,0,0,1,0}, 
{0,0,0,0,0}, 

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
case 'M': 
column = 0;
break;
case 'U':
column = 1;
break;
case 'R':
column = 2;
break;
case 'S':
column = 3;
break;
default:
column  = 4;
break;

}

output = output_table[current_state][column];
	
	
printf("output: %d \n", output);
current_state = next_state_table[current_state][column]; 
	
	
	

	
}}
