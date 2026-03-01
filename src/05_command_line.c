#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // 1. Check if we have the correct number of arguments (Program name + op + num1 + num2)
    if (argc != 4) 
    {
        printf("Usage: ./05_command_line <operation> <num1> <num2>\n");
        printf("Operations: add, sub, mul, div\n");
        return 1;
    }

    // 2. Parse operation and numbers
    char *op = argv[1];
    // strtol is safer than atoi for converting strings to long integers
    long a = strtol(argv[2], NULL, 10);
    long b = strtol(argv[3], NULL, 10);

    // 3-5. Implement operations
    if (strcmp(op, "add") == 0) 
    {
        printf("Result: %ld\n", a + b);
    } 
    else if (strcmp(op, "sub") == 0) 
    {
        printf("Result: %ld\n", a - b);
    } 
    else if (strcmp(op, "mul") == 0) 
    {
        printf("Result: %ld\n", a * b);
    } 
    else if (strcmp(op, "div") == 0) 
    {
        // Handle division by zero
        if (b == 0) 
        {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        printf("Result: %ld\n", a / b);
    } 
    else 
    {
        printf("Unknown operation: %s\n", op);
        return 1;
    }

    return 0;
}