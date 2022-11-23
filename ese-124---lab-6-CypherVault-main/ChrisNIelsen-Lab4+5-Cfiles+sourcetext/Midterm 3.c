 #include <stdio.h>


/*


    3) Devise a program in C to display the sum of the series 9 + 99 + 999 + 9999 ... for n terms, where n is read from the keyboard.
	 What is the largest n for which the sum is correctly computed? 
	 [ This exercise was discussed in a previous lab, however, try now to solve it by yourselves. ]

*/

int  main(){  

		long int readterms,iterate,a=9;
				int sum =0;



printf("input terms of 9 to be generated :");
scanf("%ld",&readterms);


for (iterate=1;iterate<=readterms;iterate++)
{ 
sum +=a;
 
 a=a*10+9;
}


printf("\nThe sum of the 9 series at the term %d is = %d \n",readterms, sum);
} 

