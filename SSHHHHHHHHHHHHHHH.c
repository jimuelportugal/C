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
