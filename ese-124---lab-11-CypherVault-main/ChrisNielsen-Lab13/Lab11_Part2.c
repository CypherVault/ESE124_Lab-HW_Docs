#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    2. (Acknowledgement: This exercise is presented at https://condor.depaul.edu/ntomuro/courses/309/notes/pointer_exercises.html): 
	Write code which prints the characters in a string in a reverse order.
    5. char s[10] = "abcde";
    6. char* cptr;
    7. 
    8. // WRITE YOUR CODE HERE

*/


#include<stdio.h>
 
int string_length(char*);
void reverse(char*);
 
main() 
{
   char string[100];
 
   printf("Enter a string\n");
   gets(string);
 
   reverse(string);
 
   printf("Reverse of entered string is \"%s\".\n", string);
 
   return 0;
}
 
void reverse(char *string) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = string_length(string);
 
   begin = string;
  // printf("begin:%s\n", begin);
   end = string;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
 //printf("%s", end);
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      temp = *end;
      //printf("\nend is :%s", end );
     
	 
	  *end = *begin;
      //printf("%s", end );
    
	
	  *begin = temp;
      //printf("\nbegin is :%s", begin );

      begin++;
      //printf("%s", begin);
      end--; //printf("\nNew edition:%s\n", string);
   }

}
 
int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer+c) != '\0' )
      c++;
 
   return c;
}
