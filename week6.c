#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Char
    char char_variable;
    char_variable = 'C';
    printf("Char variable %c\n", char_variable);


    // String
    char string_type[] = "This is a string \n";
    printf("%s", string_type);

    // BAD DATA
  int var1,var2,var3;
  scanf("%d %d",&var1, &var2);

  printf("%d \n",var1);
  printf("%d \n",var2);




    return 0;
}
//  char 'c' %c
// integer i %i
// integer f %f
// string "string" %s
/*
Executable Code
Expressions consist of legal combinations of
Ø constants
Ø variables
Ø operators
Ø function calls

Executable Code Operators
— Arithmetic: +, -, *, /, %
— Relational: ==, !=, <, <=, >, >=
— Logical: !, &&, ||
— Bitwise: &, |, ~, ^
— Shift: <<, >>

Precedence Example
Find the average of three variables a, b and c

Do not use: a + b + c / 3
Use: (a + b + c ) / 3

% modulus operator returns the remainder

7 % 5 → 2
5 % 7 → 5
12 % 3 → 0
*/
