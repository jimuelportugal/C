#include <stdio.h>
  
int main() {
    int input[5];
    int sum = 0;
    float average;
    
    printf("Enter scores:\n");
    for(int i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &input[i]);
        sum += input[i];
    }

    average = sum / 5.0;
    printf("The average score is : %.1f\n", average);

    return 0;
}
/*
Objective:
Create a simple program that prompts the user for 5 integer scores, stores them in an array, and then calculates and displays the average score.

Instructions:

Declare an integer array to hold 5 scores.
Use a loop to input 5 scores from the user.
Calculate the total and average score.
Display the average.
Expected Output:
Enter 5 scores: 85 90 78 88 92
The average is: 86.6
*/
