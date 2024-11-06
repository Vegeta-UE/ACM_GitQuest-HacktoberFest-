#include <stdio.h>

int main() {
    int n, sum = 0, last_digit;

    printf("Enter the number of integers you want to sum the last digits of: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int number;
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &number);

        // Get the last digit
        last_digit = number % 10;
        
        // Add the last digit to the sum
        sum += last_digit;
    }

    printf("The sum of the last digits is: %d\n", sum);
    
    return 0;
}
