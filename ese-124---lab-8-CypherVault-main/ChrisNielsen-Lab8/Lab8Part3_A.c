#include <stdio.h>

#include <ctype.h>

#include <string.h>
 # include <conio.h>

/*
Write a function, called ToPigLatin, which is described below:
    •   char* ToPigLatin (char* word);
This function receives a C-style string (word) as a parameter.
You are to define this function so that it converts the incoming string (character array) to its “Pig Latin” version, and then have the function return a pointer to the string.
For our purposes, we will use the following as the rules for translation of a word into “Pig Latin”:
        1. A word is a consecutive sequence of letters (a-z, A-Z) or apostrophes. You may assume that the input to the function will only be a single "word". Examples: Zebra , doesn't , apple
        2. If a word starts with a vowel, the Pig Latin version is the original word with “way” added to the end.
        3. If a word starts with a consonant, or a series of consecutive consonants, the Pig Latin version transfers all consonants up to the first vowel to the end of the word, and adds “ay” to the end.
        4. The letter ‘y’ should be treated as a consonant if it is the first letter of a word, but treated as a vowel otherwise.
        5. If the original word is capitalized, the new Pig Latin version of the word should be capitalized in the first letter (i.e. the previous capital letter may not be capitalized any more).
The main() program prompts the user to type in 5 words, then it calls the function for each of them and prints the converted version of each of the 5 strings. Note that the main() function does all of the output -- your function should do NO output (just the appropriate conversion and return). 
Sample Runs
(user input is underlined, to distinguish it from output)
Sample Run 1
Input 5 words: Flower yellow bypass apple Igloo
Pig Latin version of the 5 words:
Owerflay ellowyay ypassbay appleway Iglooway
Sample Run 2
Input 5 words: string Hamburger Rhythm queen zippitydoodah
Pig Latin version of the 5 words:
ingstray Amburgerhay Ythmrhay ueenqay ippitydoodahzay
*/
char topiglatin(char userinput[200], char endinginput[200],
  char holdword[200], char * token, int a, int n, char wayending[3],
  int tokencount, char holdcon[200], int f, char holdconclear[200],
  int j, char ayending[2], char charToRemove, int i) {

  //printf("%s", userinput);
  token = strtok(userinput, " ");
  while (token != NULL) { // this grabs a single word from the string inputted
    a = strlen(token);

    if ((token[0]) == 'a' || (token[0]) == 'e' || (token[0]) == 'i' || (token[0]) == 'o' || (token[0]) == 'u' ||
      (token[0]) == 'A' || (token[0]) == 'E' || (token[0]) == 'I' || (token[0]) == 'O' || (token[0]) == 'U') {
// this checks if the first letter is a vowel and just applies the appropriate piglatin ending to the end
      strcat(token, wayending);
      strcpy(holdword, token);// it then holds that
    } 
	
	else if ((token[0]) == 'b' || (token[0]) == 'c' || (token[0]) == 'd' || (token[0]) == 'f' ||
      (token[0]) == 'g' || (token[0]) == 'h' || (token[0]) == 'i' || (token[0]) == 'j' ||
      (token[0]) == 'k' || (token[0]) == 'l' || (token[0]) == 'm' || (token[0]) == 'n' || // then it checs if it starts with a consonant
      (token[0]) == 'p' || (token[0]) == 'q' || (token[0]) == 'r' || (token[0]) == 's' ||
      (token[0]) == 't' || (token[0]) == 'v' || (token[0]) == 'w' || (token[0]) == 'x' ||
      (token[0]) == 'y' || (token[0]) == 'z') {

      while (f != 0) {
// if it does it then iterates through all the characters in the string until a letter it encounters is not a consonant 
        for (n = 0; n != a; n++) {

          if ((token[n]) == 'b' || (token[n]) == 'c' || (token[n]) == 'd' || (token[n]) == 'f' ||
            (token[n]) == 'g' || (token[n]) == 'h' || (token[n]) == 'i' || (token[n]) == 'j' ||
            (token[n]) == 'k' || (token[n]) == 'l' || (token[n]) == 'm' || (token[n]) == 'n' ||
            (token[n]) == 'p' || (token[n]) == 'q' || (token[n]) == 'r' || (token[n]) == 's' ||
            (token[n]) == 't' || (token[n]) == 'v' || (token[n]) == 'w' || (token[n]) == 'x' ||
            (token[n]) == 'y' || (token[n]) == 'z') {

            strcat(holdcon, (token[n]));
            charToRemove = token[n];// these functions remove the earliest case of the characers, so the final word doesnt have the characters that should be removed 

            for (i = 0; i < a; i++) {
              if (token[i] == charToRemove) {
                for (j = i; j < a; j++) {
                  token[j] = token[j + 1];
                }
                i = a;
              }
            }

          } else {
            f = 0;// when a vwoel letter is encountereed , we then end the loop and we can proceed to attach the ending approportae for this type of word
          }

        }

      }

      strcat(token, holdcon);
      strcat(token, ayending); //attaching and storing the word
      strcpy(holdword, token);

    }

    strcat(holdcon, holdconclear);
    strcat(endinginput, holdword); // attach the new foud word in the ending string to return later
   //printf("\n%s\n", endinginput);
    token = strtok(NULL, " ");

  }
  return (endinginput); // return string after all tokens ahve been taken
}

int main(void) {
  int a, n, j, i, f = 1, tokencount = 0; // iteration tools
  char userinput[200];
  char charToRemove;

  char ayending[2] = "ay";
  char wayending[3] = "way"; // the only 2 versions of the endings to be attached for ease of use
  char endinginput[200]; // resulting sring used to store answer
  char holdcon[200]; //this holds the consonants to be attached at the end 
  char holdconclear[200]; // this variable holds the value to clean out holdcon for another go
  char holdwordtemp[200]; // this holds temporary word variables
  char * token;

  printf("Enter the user inputted string.\n");
  scanf("%[^\n]%*c", userinput);
  getchar();

  printf("Converted Piglatin Phrase:%s", topiglatin(userinput, endinginput, holdwordtemp, token, a, n, wayending, holdcon, holdconclear, f, ayending, charToRemove, i, tokencount, j));

}
