#include <stdio.h>
#include <math.h>
#include <string.h>
#define none 0
#define g 1
#define ga 2
#define gag 3

	
/*
        Use a Finite State Machine (FSM) to solve the following problem: A sequence detector receives integers at its input, one integer at a time. The FSM outputs a 1 (integer) only if among the last three inputs exactly two were odd numbers. Otherwise, the FSM outputs a 0 (integer).

*/
	
int main() {
	FILE * f; 
	char str[10];

	int i=0;
int	j=0;

	
    if ((f = fopen("expenses.txt", "r")) == NULL) {
printf("could not read file.");
    
    }
    
    	
    //	printf("read and worked");
    while (fscanf(f, "%s" )  != EOF) {
	*str = fscanf(f, "%s" ); 
	
}
	
	
	
	
	
	
	
	int next_state_table[][3] = 
{
g,none,none,
g,ga,none,
gag,none,none,
g,ga,none




};


int output_table[][3] = 
{
0,0,0,
0,0,0,
0,0,0,
0,1,0


};
	
	
int current_state = 0;
int output = 0;

while(1)
{
int c; 
char letter;
int column;

scanf(/* here it is supposed to scan from the file*/ "%c", &letter); //you can use scanf here too. there is no difference


if (c=='g'){
c=0;
}else if (c=='a'){
	c=1;
}else{
	c=2;
}



switch(c)
{
case 0: 
column = 0;
break;

case 1:
column = 1;
break;

case 2:
column = 2;
break;


default:
printf("how did you do that?...");
break;
}

output = output_table[current_state][column];
printf("Output: %d \n", output);


current_state = next_state_table[current_state][column]; 
	
	
	

	
}
}
