#include <stdio.h>
  
  
  
    
int main() {
 
 
 
	FILE *input;
	int i,j,n,a,p=0,advance=0,x,k;
	int num;		
    int number[30];
	int numstore;

	

		input = fopen("kbiggest.txt","r");
	if ((input = fopen ("kbiggest.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file kbiggest.txt cannot be opened.\n");
		exit (1);
	}

 
       
        printf("Enter the value of N\n");
        scanf("%d", &n);
        printf("Enter the value of k\n");
        scanf("%d", &k);
       
	   
	  //number entering
	  
	  
        for (i = 0; i < n; ++i)
	        fscanf(input, "%d", &number[i]);
 
        /*  sorting begins ... */
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("The numbers arranged in descending order are given below\n");
 
        for (i = 0; i < k; ++i) 
        {
            printf("%d\n", number[i]);
        }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    }
