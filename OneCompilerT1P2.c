#include <stdio.h>

int array_sum(int arr[]) {
    int sum = 0;
    int i = 0;
    
    while (arr[i] != 0) {
        sum += arr[i];
        i++;
    }

    return sum;
}

int main() {

    int array1[] = {1, 2, 3, 4, 0};
    int array2[] = {-1, -2, -3, 0}; 
    int array3[] = {0, 0, 0}; 
    int array4[] = {5, 10, 15, 20, 0};
    printf("Array 1: %d\n", array_sum(array1));
    printf("Array 2: %d\n", array_sum(array2));
    printf("Array 3: %d\n", array_sum(array3));
    printf("Array 4: %d\n", array_sum(array4));
    
    return 0;
}

/*
Write a function that takes an array of integers and returns the sum of its elements.

Examples:
Input: [1, 2, 3, 4]
Output: 10
Input: [-1, -2, -3]
Output: -6
Input: [0, 0, 0]
Output: 0
Input: [5, 10, 15, 20]
Output: 50
*/
