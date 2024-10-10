#include <stdio.h>

int is_prime(int num) {
    
    if (num <= 1) return 0; 
    if (num == 2) return 1; 
    if (num % 2 == 0) return 0;

 
    for (int i = 3; i * i <= num; i += 2) { 
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
