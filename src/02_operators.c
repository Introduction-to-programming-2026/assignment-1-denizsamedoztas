#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);

    printf("\n=== Arithmetic ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    // Division and Modulo check
    if (b != 0) 
    {
        printf("a / b (Integer division) = %d\n", a / b);
        printf("a %% b (Remainder) = %d\n", a % b); // We use %% to print the percent sign
    }
    else 
    {
        printf("Cannot divide by zero.\n");
    }

    printf("\n=== Comparison ===\n");
    if (a > b) 
    {
        printf("a is greater\n");
    }
    else if (b > a) 
    {
        printf("b is greater\n");
    }
    else 
    {
        printf("they are equal\n");
    }

    printf("\n=== Logical checks ===\n");
    // Check if BOTH are positive
    if (a > 0 && b > 0) 
    {
        printf("BOTH numbers are positive.\n");
    }

    // Check if AT LEAST ONE is negative
    if (a < 0 || b < 0) 
    {
        printf("AT LEAST ONE number is negative.\n");
    }

    return 0;
}