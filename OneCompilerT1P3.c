#include <stdio.h>
int main()
{
  char user[1000];
printf("Enter a usering: ");
scanf("%s", user);
int len = strlen(user);
for (int i = 0; i < len / 2; i++) {
    char temp = user[i];
    user[i] = user[len - i - 1];
    user[len - i - 1] = temp;
}
printf("Reversed usering: %s\n", user);

}

/* 
Write a program to reverse a string input by the user using a character array.

Input-Output Examples:
Input: "hello"
Output: "olleh"
Input: "OpenAI"
Output: "IAnepO"
Input: "ChatGPT"
Output: "TPGtahC"
Input: "12345"
Output: "54321"
Input: "A man a plan a canal Panama"
Output: "amanaP lanac a nalp a nam A"
*/
