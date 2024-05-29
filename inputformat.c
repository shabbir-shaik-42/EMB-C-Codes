#include <stdio.h>

int main() {
    int num1;
    char name[50];
    float num2;

    printf("Enter an integer, a name, and a float separated by commas: ");
    int result = scanf("%d , %49[^,] , %f", &num1, name, &num2);

    if (result == 3) {
        printf("Integer: %d\n", num1);
        printf("Name: %s\n", name);
        printf("Float: %.2f\n", num2);
    } else {
        printf("Input format is incorrect.\n");
    }

    
}
