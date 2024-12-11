#include <stdio.h>

int main() {
    int num, larg;

    if (scanf("%d", &num) == 1) {
        larg = num;
    } else {
        return 1; 
    }

    while (scanf("%d", &num) == 1) {
        if (num > larg) {
            larg= num;
        }
    }

    printf("%d\n", larg);

    return 0;
}
// Write a program that finds the largest value in a given array.
