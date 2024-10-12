#include <stdio.h>

int main() {
    int ages[5];
    int i;
    int largest;
    
    for(i = 0; i < 5; i++) {
        printf("Enter age %d: ", i + 1);
        scanf("%d", &ages[i]);

        if(ages[i] >= 59 && ages[i] <= 100) {
            printf("Senior\n");
        }
        else if(ages[i] >= 35 && ages[i] <= 59) {
            printf("Adult\n");
        }
        else if(ages[i] >= 18 && ages[i] <= 34) {
            printf("Study Hard\n");
        }
        else if(ages[i] >= 6 && ages[i] <= 17) {
            printf("Go Play\n");
        }
    }
    largest = ages[0];

    for (int i = 1; i < 5; i++) {
        if (ages[i] > largest) {
            largest = ages[i];
        }
    }
    printf("The highest number is: %d\n", largest);

    return 0;
}

/*

CREATE A PROGRAM THAT WILL INPUT YOUR AGE
IF ABOVE 7 DISPLAY GO PLAY
IF ABOVE 18 DISPLAY STUDY HARD
IF ABOVE 35 DISPLAY ADULT
IF ABOVE 60 DISPLAY SENIOR

CREATE A PROGRAM THAT WILL INPUT FIVE NUMBERS
AND THAT WILL DISPLAY WHAT IS THE BIGGEST NUMBER 
FROM THE THREE NUMBERS
*/