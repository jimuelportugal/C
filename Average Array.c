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
