#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

    6) Devise a C program that reads a set of characters from an input file.
	 The program counts the number of occurrences of every letter in the file, 
	 and then creates an output file that includes each letter and its number of occurrences. 
	 Lower and upper case letters are counted as the same letter, e.g., ‘a’ and ‘A’ are counted together. 


*/

int main (void){
//	Alphaoutput.txt
//	lettersin.txt
	
	FILE *input, *output;
	int aCount=0,bCount=0,cCount=0,dCount=0,eCount=0,fCount=0,gCount=0,hCount=0,iCount=0,jCount=0,kCount=0,lCount=0,mCount=0,nCount=0,oCount=0,pCount=0,qCount=0,rCount=0,sCount=0,tCount=0,uCount=0,vCount=0,wCount=0,xCount=0, yCount=0,zCount=0;
	char letter;
	
		input = fopen("lettersin.txt","r");
		output = fopen("Alphaout.txt", "w");
		
	if ((input = fopen ("lettersin.txt", "r"))== NULL){ //"r" for the read mode
		printf ("file lettersin.txt cannot be opened.\n");
		exit (1);
	}
		if ((output = fopen ("Alphaout.txt", "w"))== NULL){ // "w" for write mode
		printf ("file Alphaout.txt cannot be opened.\n");
		exit (1);
	}
	
	
	
	while ( (letter= fgetc(input))!= EOF){
		
		
		if ( letter == 'a' || letter == 'A'){
			aCount++;
		}
		else if( letter == 'b' || letter == 'B'){
			bCount++;
		}else if( letter == 'c' || letter == 'C'){
			cCount++;
		}else if( letter == 'd' || letter == 'D'){
			dCount++;
		}else if( letter == 'e' || letter == 'E'){
			eCount++;
		}else if( letter == 'f' || letter == 'F'){
			fCount++;
		}else if( letter == 'g' || letter == 'G'){
			gCount++;
		}else if( letter == 'h' || letter == 'H'){
			hCount++;
		}else if( letter == 'i' || letter == 'I'){
			iCount++;
		}else if( letter == 'j' || letter == 'J'){
			jCount++;
		}else if( letter == 'k' || letter == 'K'){
			kCount++;
		}else if( letter == 'l' || letter == 'L'){
			lCount++;
		}else if( letter == 'm' || letter == 'M'){
			mCount++;
		}else if( letter == 'n' || letter == 'N'){
			nCount++;
		}else if( letter == 'o' || letter == 'O'){
			oCount++;
		}else if( letter == 'p' || letter == 'P'){
			pCount++;
		}else if( letter == 'q' || letter == 'Q'){
			qCount++;
		}else if( letter == 'r' || letter == 'R'){
			rCount++;
		}else if( letter == 's' || letter == 'S'){
			sCount++;
		}else if( letter == 't' || letter == 'T'){
			tCount++;
		}else if( letter == 'u' || letter == 'U'){
			uCount++;
		}else if( letter == 'v' || letter == 'V'){
			vCount++;
		}else if( letter == 'w' || letter == 'W'){
			wCount++;
		}else if( letter == 'x' || letter == 'X'){
			xCount++;
		}else if( letter == 'y' || letter == 'Y'){
			yCount++;
		}else if( letter == 'z' || letter == 'Z'){
			zCount++;
		}
		else {
			printf("invalid character detected");
		}
		
		
		
	}
		fprintf (output, "A:%d, B:%d C:%d D:%d E:%d F:%d G:%d H:%d I:%d J:%d K:%d L:%d M:%d N:%d O:%d P:%d Q:%d R:%d S:%d T:%d U:%d V:%d W:%d X:%d Y:%d Z:%d ", aCount, bCount, cCount,dCount,eCount, fCount, gCount, hCount, iCount, jCount, kCount, lCount, mCount, nCount, oCount, pCount, qCount, rCount,sCount,tCount,uCount,vCount,wCount,xCount, yCount, zCount );
	
}
