 #include <stdio.h>

#include <string.h>

# include < conio.h >

  /*

  Implement the following C functions and then call them repeatedly in the main program. Call each C function at least twice in the main function.
      • ####Function my_strcmp compares two strings and returns 0 if the strings are equal, otherwise it returns 1.
      • ####Function my_strncmp compares the first n characters of two strings. The function returns 0 if they are equal, otherwise 1.
      • Function my_strcpy copies the second string into the first string. The function returns the starting address of the first string.
      • Function my_strncpy copies the first n characters of the second string into the first string. The function returns the starting address of the first string.
      • #####Function my_strcat appends (attach) the second string at the end of the first string. The function returns the starting address of the first string.
      • Function my_reverse stores the reversed second string into the first string. The function returns the starting address of the first string. 


  */

  int my_strcmp(char input1[50], char input2[50]) {
    int flag = 0;

    while ( * input1 != '\0' || * input2 != '\0') {
      if ( * input1 == * input2) {
        input1++;
        input2++;
      } else if (( * input1 == '\0' && * input2 != '\0') ||
        ( * input1 != '\0' && * input2 == '\0') ||
        * input1 != * input2) {
        flag = 1;
        return (1);
        break;
      }

    }

    if (flag == 0) {
      return (0);
    }
  }

int my_strncmp(char input1[50], char input2[50], int n, int i, int counter) {
  for (i = 0; i != n; i++) {
    if (input1[i] == input2[i]) {

      counter++;
    } else {}
    if (counter == n) {
      return (0);
    } else return (0);
  }
}

const char * my_strcat(char input1[50], char input2[50], char appended[200], int b, int j) {
  while (input1[b] != '\0') {
    appended[j] = input1[b];
    b++;
    j++;
  }

  b = 0;
  while (input2[b] != '\0') {
    appended[j] = input2[b];
    b++;
    j++;
  }
  appended[j] = '\0';
  return (appended);
}
const char * my_strcpy(char input1[50], char input2[50], int i, char input1copy[50]) {
  for (i = 0; input1[i] != '\0'; ++i) {
    input1copy[i] = input1[i];
  }

  input1copy[i] = '\0';

  for (i = 0; input2[i] != '\0'; ++i) {
    input1copy[i] = input2[i];
  }

  input1copy[i] = '\0';
  return (input1copy);
}
const char * my_reverse(char input1[50], char input2[50], int i, int b, char temp[1]) {
  for (i = 0; i < strlen(input2) / 2; i++) {
    b = strlen(input2) - 1;
    temp = input2[i];
    input2[i] = input2[b];
    input2[b--] = temp;
  }
  for (i = 0; input2[i] != '\0'; ++i) {
    input1[i] = input2[i];
  }

  return (input2);
}
const char * my_strncpy(char input1[50], char input2[50], int n, char input1copy[50]) {
  strncpy(input1copy, input2, n);
  return (input1copy);
}

int main() {

  char input1[50] = "She";
  char input1copy[50];
  char input2[50];
  char temp[1];
  char input2copy[50];
  char appended[200];
  int n = 0;
  int b = 0;
  char result3[50];
  int i = 0;
  int j = 0;
  int counter;

  while (1) {
    printf("Enter a value for n\n");
    scanf("%d", & n);
    getchar();
    printf("Enter the second string.\n");
    scanf("%[^\n]%*c", input2);

    printf("Result:%d\n ^my_strcmp\n", my_strcmp(input1, input2));
    printf("Result:%d\n ^my_strncmp\n", my_strncmp(input1, input2, n, i, counter));
    printf("Result:%s\n ^my_strcpy\n", my_strcpy(input1, input2, i, input1copy));
    printf("Result:%s\n ^my_strncpy\n", my_strncpy(input1, input2, n, input1copy));
    printf("Result:%s\n ^my_strcat\n", my_strcat(input1, input2, appended, b, j));
    printf("Result:%s\n ^my_reverse\n", my_reverse(input1, input2, temp, b, i));

  }
  return (0);
}
