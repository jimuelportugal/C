#include <stdio.h>
#include <stdlib.h>

int main() {
int pass = 123456;
int user;
printf("Enter Password: ");
do
{
    scanf("%d",&user);
    if (pass != user)
    {
    printf("Incorrect Password Please Try Again\n");
    printf("Enter Password: ");
    }
    else
    {
    printf("Correct Password\n");
    }
    
   } while (pass != user);
     return 0;
}

// Create a basic C program that validates a password input. 
// You may choose between the for, while, or do-while loop constructs to implement your solution.
