#include <stdio.h>

int main(void) {
    // TASK 1: Print sizes (Using %zu for size_t)
    printf("=== Sizes of Data Types (bytes) ===\n");
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("char: %zu\n", sizeof(char));

    // TASK 2: Read input from user
    int age = 0;
    double height = 0.0;
    char firstLetter = '?';

    printf("\nEnter your age: ");
    scanf("%d", &age); // %d for int

    printf("Enter your height in meters (e.g., 1.72): ");
    scanf("%lf", &height); // %lf for double

    printf("Enter the first letter of your name: ");
    scanf(" %c", &firstLetter); // Space before %c is crucial to skip the newline character

    // TASK 3: Print summary
    printf("\n=== Summary ===\n");
    printf("User '%c' is %i years old and %.2f meters tall.\n", firstLetter, age, height);

    return 0;
}