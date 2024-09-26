//For Loop 

#include <stdio.h>

int main() {
/*
Syntax:
for (initialization; condition; increment/decrement) {
    // Code to be executed
}
*/
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Print %d\n", i);
    }
    return 0;
}
/*
The loop starts with i = 1.
It will run as long as i <= 5.
After each iteration, i is incremented by 1 (i++).
Output:

Print 1
Print 2
Print 3
Print 4
Print 5
*/

//While Loop 

#include <stdio.h>

int main() {
/*
Syntax:
while (condition) {
    // Code to be executed
}
*/
    int i = 1;
    while (i <= 5) {
        printf("Print %d\n", i);
        i++;  
    }
    return 0;
}
/*
The loop starts with i = 1.
It will run as long as i <= 5.
After each iteration, i is incremented by 1 (i++).
Output:

Print 1
Print 2
Print 3
Print 4
Print 5
*/

//Do-While Loop

#include <stdio.h>

int main() {
/*
Syntax:
do {
    // Code to be executed
} while (condition);

*/
    int i = 1;
    do {
        printf("Print %d\n", i);
        i++; 
    } while (i <= 5);
    return 0;
}
/*
The loop starts with i = 1.
The code inside the loop is executed first.
After the execution, the condition i <= 5 is checked.
Output:

Print 1
Print 2
Print 3
Print 4
Print 5
*/

