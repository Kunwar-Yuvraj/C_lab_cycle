/*
To accept two numbers and perform basic arithmetic
operations (+, - *, /, %)
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition = %d", a+b);
    printf("Subtraction = %d", a-b);
    printf("Multiplication = %d", a*b);
    printf("Division = %f", a/(float)b);
    printf("Modulo Division = %d", a%b);
    
    return 0;
}