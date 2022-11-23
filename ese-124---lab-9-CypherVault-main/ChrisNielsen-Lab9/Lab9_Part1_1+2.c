 #include <stdio.h>
#define STATE_1 0
#define STATE_2 1
#define STATE_3 2
#define STATE_4 3
#define STATE_5 4
#define NUM_STATES 6
#define NUM_INPUTS 6

/*


    B. Part 1 (60 minutes)

Devise FSMs that implement the following functionalities (a separate FSM for each case): 

    1. Accepts any string containing FROG.
    2. Accepts any string containing MURMURS.

*/
int main ()
{

int next_state_table[NUM_STATES][NUM_INPUTS] = 
{
{STATE_2, STATE_1, STATE_1, STATE_1, STATE_1}, 
{STATE_2, STATE_3, STATE_1, STATE_1, STATE_1}, 
{STATE_2, STATE_1, STATE_4, STATE_1, STATE_1},
{STATE_2, STATE_1, STATE_1, STATE_5, STATE_1}, 
{STATE_2, STATE_1, STATE_1, STATE_1, STATE_1}


};

int output_table[NUM_STATES][NUM_INPUTS] = 
{
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
case 'F': 
column = 0;
break;
case 'R':
column = 1;
break;
case 'O':
column = 2;
break;
case 'G':
column = 3;
break;
default:
column  = 4;
break;

}

output = output_table[current_state][column];
//printf("\nCurrent state: %d\n", current_state);
//printf("\nCurrent column: %d\n", column);


printf("output: %d \n", output);
current_state = next_state_table[current_state][column]; 
}
}

