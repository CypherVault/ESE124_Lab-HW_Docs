#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define MAX 100
int main(void) {

  //	hangmansource.txt
  FILE * input;
  char eachletterfromsource;
  int index = 0;
  char wordtoguess[MAX];
  int solved = 1;
  int g = 6;
  char playersprogress[MAX];
  char playerletterattempt;
  int i = 0;
  int correctanswerposition;
  int finishfor = 0;
  int valueofeachcharinstring;
  int j = 0;

  if ((input = fopen("hangmansource.txt", "r")) == NULL) { //"r" for the read mode
    printf("file hangmansource.txt cannot be opened.\n");
    exit(1);
  }

  while ((fscanf(input, "%c", & eachletterfromsource)) != EOF) {
    if ((eachletterfromsource >= 'a' && eachletterfromsource <= 'z') || (eachletterfromsource >= 'A' && eachletterfromsource <= 'Z') || eachletterfromsource == ' ') {
      wordtoguess[index] = eachletterfromsource;
      index++;
    } else {}
  }
  for (j = 0; j <= index - 1; j++) {

    playersprogress[j] = '#';
  }

  printf("enter the number of guesses\n");
  	scanf("%d", &g);
  getchar();

  printf("This program allows the user %d incorrect guesses before the program ends.", g);
  while ((g != 0) && (solved != 0)) {
    solved = strcmp(playersprogress, wordtoguess);

    printf("\nGuess progress: %s", playersprogress);
    printf("\nEnter a letter\n");
    scanf("%c", & playerletterattempt);
    getchar();

    finishfor = 0;

    for (i = 0; i <= (index); i++) {
      if (playerletterattempt == wordtoguess[i]) {
        playersprogress[i] = playerletterattempt;
        finishfor = 1;
        correctanswerposition = i;
      }

    }

    if (finishfor == 1) {
      printf("that was a correct guess! your letter appeared at position: %d \n\n", correctanswerposition + 1);
      i = 0;
      finishfor = 0;
    } else {
      g--;

      printf("incorrect guess, current guesses remaining: %d", g);
    }
    printf("\nplayer progress : %s", playersprogress);
    solved = strcmp(playersprogress, wordtoguess);
  }

  if (g == 0) {
    printf("You failed to guess the word or phrase. The answer was: %s.", wordtoguess);
  } else {
    printf("You guessed the word %s, great job!", wordtoguess);
  }

}
