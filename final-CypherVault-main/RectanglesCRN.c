#include <stdio.h>

#include <string.h>

#include <stdlib.h>




struct rectangles {
  int x1;
  int y1;
  int x2;
  int y2;

}rect_data;

void Store(/*FILE *f, * data*/){
	 // if ((f = fopen("rect.txt", "r")) == NULL) {
        //printf("File rect.txt cannot be opened.\n");

       // exit(1);
    
   //	printf("read and worked");
   // while (fscanf(f, "%d,%d,%d,%d", data[i].x1, data[i].y1, & data[i].x2, & data[i].y2) != EOF) { //fscanf from file f //the & is pointing the address to the varioiable 
        
     //   i++;

        //converting from the string to the corresponding label //refer line 11

        //increment i (keeps reading rows from input file and stores the index)

    }


int checkoverlap(struct rectangles * arr, int f){




return (f);
}

void displayi(struct rectangles * arr, int elementselect){
	
	printf("Data for rectangle %d: x1:%d, y1:%d, x2:%d, y2:%d.", elementselect, arr[elementselect].x1, arr[elementselect].y1, arr[elementselect].x2, arr[elementselect].y2);
	
	
}
void removei(struct rectangles * arr, int elementrselect){
	  arr[elementrselect].x1=0;
	  arr[elementrselect].y1=0;
	  arr[elementrselect].x2=0;
	  arr[elementrselect].y2=0;
}

void NrRect(int i){
	printf("Number of rectangles initially collected:%d", i);
}

struct rectangles data[100], aux; //global variable (accessible to any function) //books is a vectors (1D array)

int main() {
    FILE * f; //*filename is the pointer to the file
    int i = 0, j = 0;
    int swapped = 1;
int select;
    int elementselect;
    int elementrselect;
    //	printf("test");

  //This stores the data
    //store(f, data);
    
    if ((f = fopen("rect.txt", "r")) == NULL) {
        printf("File books.txt cannot be opened.\n");

        exit(1);
    }
    //	printf("read and worked");
    while (fscanf(f,f, "%d,%d,%d,%d", data[i].x1, data[i].y1, & data[i].x2, & data[i].y2) != EOF) { //fscanf from file f //the & is pointing the address to the varioiable 
        
        i++;

        

    }
    
    
    // this prints all the data.
    
            for (j = 0; j < i; j++) {
                printf(" Rectangle Data for index:%d.  %d,%d,%d,%d", j, data[i].x1, data[i].y1, & data[i].x2, & data[i].y2);
            }
    
    
    printf("which rectangle's info do you want displayed?");
    scanf("%d", &select);
  printf("which rectangle's info do you want displayed?");
    scanf("%d", &elementrselect);

 
 
 
    printf(" if the result is 1, that means they overlapped at index i and j. Did they?:%d", checkoverlap(data, f));
    
    displayi(data, elementselect);
    
    removei( data, elementrselect);
    
    NrRect(i);
    
	}
