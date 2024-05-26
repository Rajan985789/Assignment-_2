#include <stdio.h>
#include<math.h>
#define PI 3.14

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
    }