#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;


    while (scanf("%d", &arr[n]) == 1) {
        n++;
    }

    int j;
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
  
    return 0;
}
//Write a program that takes an array as input and dislays the array in reverse order.
