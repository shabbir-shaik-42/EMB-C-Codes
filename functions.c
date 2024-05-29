#include <stdio.h>

void function();

int main() {
    int num;
    printf("Enter number mama:\n");
    scanf("%d", &num);
    if (num < 0 && num < 10) {
        function();
    }
    else {
        printf("not inside da");
    }
    return 0;
}

void function() {
    printf("In function\n");
}
