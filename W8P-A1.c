#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
 for(a = 0; a < 20; a++) {
        for(b = 1; b < a; b++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
Write a program in C that uses a loop to display the following output. 
*
**
***
****
*****
******
*******
********
*********
**********
***********
************
*************
**************
***************
****************
*****************
******************
*/
