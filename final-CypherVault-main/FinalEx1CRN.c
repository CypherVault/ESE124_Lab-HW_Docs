#include <stdio.h>
#include <math.h>
#include <string.h>



struct monthexpenses {
    int Jan;
    int Feb;
    int Mar;
    int Apr;
    int May;
    int Jun;
    int Jul;
    int Aug;
    int Sep;
    int Oct;
    int Nov;
    int Dec;
    
}month_data;

struct monthexpenses data[12], aux;


void commands(char elementselect, struct monthexpenses * data, int j, int i, int swapped, FILE * o) {
	printf("Please elementselect your command:\nM:Display most expensive month.\nI:Display most expensive ammenity.\nA:Average for each month.\nO:Displays Months in order, and creates the output file with that data.\nF:Displays most expensive for that month.\n");
	scanf("\n%c", &elementselect);
	int monthsums[5];
	int temp;
	
	int JanA;
    int FebA;
    int MarA;
    int AprA;
    int MayA;
    int JunA;
    int JulA;
    int AugA;
    int SepA;
    int OctA;
    int NovA;
    int DecA;
	int JanSum=0;
    int FebSum=0;
    int MarSum=0;
    int AprSum=0;
    int MaySum=0;
    int JunSum=0;
    int JulSum=0;
    int AugSum=0;
    int SepSum=0;
    int OctSum=0;
    int NovSum=0;
    int DecSum=0;
    int arraysums[12];
	//calculates totals with all data
		for (i=0; i!=12; i++){
			
	 JanSum= data[i].Jan+JanSum;
     FebSum= data[i].Feb+FebSum;
     MarSum= data[i].Mar+MarSum;
     AprSum= data[i].Apr+AprSum;
     MaySum= data[i].May+MaySum;
     JunSum= data[i].Jun+JunSum;
     JulSum= data[i].Jul+JulSum;
     AugSum= data[i].Aug+AugSum;
     SepSum= data[i].Sep+SepSum;
     OctSum= data[i].Oct+OctSum;
     NovSum= data[i].Nov+NovSum;
     DecSum= data[i].Dec+DecSum;
    	
}

//stores the sums in array for later sorting

 arraysums[0]=JanSum;
 arraysums[1]= FebSum;
    arraysums[2]= MarSum;
   arraysums[3]=  AprSum;
   arraysums[4]=  MaySum;
    arraysums[5]= JunSum;
    arraysums[6]= JulSum;
 arraysums[7]=  AugSum;
  arraysums[8]=   SepSum;
     arraysums[9]=OctSum;
    arraysums[10]= NovSum;
    arraysums[11]= DecSum;



//caculates averages

//	printf("%d", SepSum);
	
	
	
	if(elementselect=='M'){
	
			swapped = 1; 
			 
            while (swapped == 1) { //while there's swapping happening, the sorting will continue
                swapped = 0; 
                for (j = 0; j < i - 1; j++) { // j < i - 1 is the condition, because of the j+1
                    if ((arraysums[j] < arraysums[j + 1])) {
                        temp = arraysums[j];
                        arraysums[j] = arraysums[j + 1]; //taking the entire element and move them as a whole instead of doing it one by one
                        arraysums[j + 1] = temp;
                        swapped = 1;
                    }
                }
            }
			printf("The Highest months total:%d", arraysums[0]);
			

			
		}
	
	else if (elementselect=='I' ){
		
		
		
	}
	else if (elementselect=='A'){
	int JanA=JanSum/12;
    int FebA=FebSum/12;
    int MarA=MarSum/12;
    int AprA=AprSum/12;
    int MayA=MaySum/12;
    int JunA=JunSum/12;
    int JulA=JulSum/12;
    int AugA=AugSum/12;
    int SepA=SepSum/12;
    int OctA=OctSum/12;
    int NovA=NovSum/12;
    int DecA=DecSum/12;
    
    printf("Average for Each month:J:%d,F:%d,M:%d,A:%d,M:%d,J:%d,J:%d,A:%d,S:%d,O:%d,N:%d,D:%d", JanA, FebA, MarA, AprA,MayA,JunA,JulA,AugA,SepA,OctA,NovA,DecA );
	}

	
		
	
	
	else if (elementselect=='O' ){
	
		swapped = 1; 
			 
            while (swapped == 1) { 
                swapped = 0; 
                for (j = 0; j < i - 1; j++) { // j < i - 1 is the condition, because of the j+1
                    if ((arraysums[j] < arraysums[j + 1])) {
                        temp = arraysums[j];
                        arraysums[j] = arraysums[j + 1]; //taking the entire element and move them as a whole instead of doing it one by one
                        arraysums[j + 1] = temp;
                        swapped = 1;
                    }
                }
            } 
			printf("All Data sorted by decreasing total expenses, most expensive month is shown first. " );
            for (j = 0; j < i; j++) {
               printf("%d", arraysums);
            }
		
	}
	else if (elementselect== 'C'){
		
		swapped = 1; 
			 
            while (swapped == 1) { 
                swapped = 0; 
                for (j = 0; j < i - 1; j++) { // j < i - 1 is the condition, because of the j+1
                    if ((arraysums[j] < arraysums[j + 1])) {
                        temp = arraysums[j];
                        arraysums[j] = arraysums[j + 1]; //taking the entire element and move them as a whole instead of doing it one by one
                        arraysums[j + 1] = temp;
                        swapped = 1;
                    }
                }
            } printf( "All Data sorted by decreasing total expenses, most expensive month is shown first. " );
            for (j = 0; j < i; j++) {
               //fprintf( FILE *o ("arraysums[j]); 
               // this line is supposed to be used to output to the file, but i just couldnt get the syntax right.
            }
		
	}
	else if (elementselect== 'F'){
monthsums[0]= (data[0].Jan+ data[0].Feb+data[0].Mar+data[0].Apr+data[0].May+data[0].Jun+data[0].Jul+data[0].Aug+data[0].Sep+data[0].Oct+ data[0].Nov +data[0].Dec);
monthsums[1]= (data[1].Jan+ data[1].Feb+data[1].Mar+data[1].Apr+data[1].May+data[1].Jun+data[1].Jul+data[1].Aug+data[1].Sep+data[1].Oct+ data[1].Nov +data[1].Dec);
monthsums[2]= (data[2].Jan+ data[2].Feb+data[2].Mar+data[2].Apr+data[2].May+data[2].Jun+data[2].Jul+data[2].Aug+data[2].Sep+data[2].Oct+ data[2].Nov +data[2].Dec);
		monthsums[3]= (data[3].Jan+ data[3].Feb+data[3].Mar+data[3].Apr+data[3].May+data[3].Jun+data[3].Jul+data[3].Aug+data[3].Sep+data[3].Oct+ data[3].Nov +data[3].Dec);
	monthsums[4]= (data[4].Jan+ data[4].Feb+data[4].Mar+data[4].Apr+data[4].May+data[4].Jun+data[4].Jul+data[4].Aug+data[4].Sep+data[4].Oct+ data[4].Nov +data[4].Dec);
	}
	else {
		printf("\nNo valid command\n");
	}
	
		swapped = 1; 
			 
            while (swapped == 1) { 
                swapped = 0; 
                for (j = 0; j < i - 1; j++) { // j < i - 1 is the condition, because of the j+1
                    if ((monthsums[j] < monthsums[j + 1])) {
                        temp = monthsums[j];
                        monthsums[j] = monthsums[j + 1]; //taking the entire element and move them as a whole instead of doing it one by one
                        monthsums[j + 1] = temp;
                        swapped = 1;
                    }
                }
            } printf( "All Data sorted by decreasing total expenses, most expensive month is shown first. " );
            for (j = 0; j < i; j++) {
               printf ("%d", monthsums[j]); 
              
            }
	
	

}
int main() {
	FILE * f; 
	FILE * o;//*filename is the pointer to the file
	int i=0;
int	j=0;
	char elementselect;
	char highestfoundmonth; 
	char highestexpense;
	int swapped;
	
    if ((f = fopen("expenses.txt", "r")) == NULL) {
printf("could not read file.");
    
    }
    
    	
    if ((o = fopen("output.txt", "w")) == NULL) {
printf("could not open output file.");
    
    }
    //	printf("read and worked");
    while (fscanf(f, "%d %d %d %d %d %d %d %d %d %d %d %d ", &data[i].Jan, &data[i].Feb, &data[i].Mar, &data[i].Apr, &data[i].May, &data[i].Jun, &data[i].Jul, &data[i].Aug, &data[i].Sep, &data[i].Oct, &data[i].Nov, &data[i].Dec) != EOF) { //fscanf from file f //the & is pointing the address to the varioiable 
        
        i++;

    }
	

	
	 commands(elementselect, data, j, i, swapped, o);

	
}
