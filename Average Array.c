#include <stdio.h>

int main() {
    int test[4];
    int sum = 0;
    
    for (int i = 0; i < 4; i++) {
        scanf("%d", &test[i]);
        sum += test[i];
    }
    
    float average = (float)sum / 4;
    printf("%.f\n", average);

    return 0;
}
//Write a program that takes an array of integers with exactly 4 elements and returns the average of those elements. The average should be calculated as the sum of all elements divided by the number of elements.
