#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    1. (Acknowledgement: This exercise is posted at http://www.gi.ce.t.kyoto-u.ac.jp/user/susaki/c_eng/pointer_e.html) 
	We want to show a string repeatedly by shifting the top character of the string to the right.
	 Refer to a below execution example. 
	 Write a below source code, complement the expression hidden by "******" to meet this requirement. Confirm whether it can execute properly.

    2. #include <stdio.h>
    3. 
    4. int main(void)
    5. {
    6.     char  str[20], *p;
    7. 
    8.     printf("Input about 10 characters of string\n");
    9.     scanf("%s",str);
    10. 
    11.     // Pointer variable refers to address of string 
    15.     // Show string by shifting top character of string to right
    21.     return (0);
    22. }
    23. (Execution example)
    24. $ ./a.out
    25. Input about 10 characters of string
    26. abcd1234EFGH
    27. abcd1234EFGH
    28. bcd1234EFGH
    29. cd1234EFGH
    30. d1234EFGH
    31. 1234EFGH
    32. 234EFGH
    33. 34EFGH
    34. 4EFGH
    35. EFGH
    36. FGH
    37. GH
    38. H
    39. 
    40. $

*/

int main (){
 char teststring1[20];
printf("Please enter a string.");
scanf("%s", &teststring1);







int i=0;
int x;

 
 x = strlen(teststring1);
 
 for( i=0; i<x; i++){
 
  char *testptr = teststring1+i;
  printf("%s\n",testptr);
}
	
	
	
	
//	char teststring1[20]="Streets";
	//char *testptr = teststring1;
	char teststring2[20]="SSSLSSS";
/*
char *testptr = (teststring1) malloc(20); 
	strcpy(testptr, teststring1);
	teststring1++;
	
	printf("%s\n", testptr);
	teststring1++;
	printf("%s\n" testptr);
	*/
}
