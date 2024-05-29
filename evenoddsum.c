#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    printf("Even numbers in the range %d-%d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Sum of odd numbers in the range %d-%d:\n", start, end);
    int oddSum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            oddSum += i;
        }
    }
    printf("%d\n", oddSum);

    
}
