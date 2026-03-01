#include <stdio.h>

int main(void) {
    int n = 0;

    // TODO 1: keep asking until n > 0
    while (n <= 0) {
        printf("Enter a positive integer n (> 0): ");
        scanf("%d", &n);
        
        // Yanlış giriş (harf vb.) yapılırsa sonsuz döngü olmasın diye temizlik
        if (n <= 0) {
            while(getchar() != '\n'); 
        }
    }

    // TODO 2: print 1..n
    printf("\n=== Counting ===\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // TODO 3: compute sum
    printf("\n=== Sum 1..n ===\n");
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Total sum: %d\n", sum);

    // TODO 4: compute factorial
    printf("\n=== Factorial n! ===\n");
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("%d! = %llu\n", n, factorial);

    return 0;
}