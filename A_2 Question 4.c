#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%f", &n);

    if (n > 0) {
        printf("The number is Positive\n");
    } else if (n < 0) {
        printf("The number is Negative\n");
    } else {
        printf("The number is Zero\n");
    }

    return 0;
}