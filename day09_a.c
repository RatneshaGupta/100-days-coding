#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (b*b - 4*a*c > 0) {
        printf("Roots are real and distinct\n");
        printf("Root1 = %.2f\n", (-b + sqrt(b*b - 4*a*c)) / (2*a));
        printf("Root2 = %.2f\n", (-b - sqrt(b*b - 4*a*c)) / (2*a));
    } else if (b*b - 4*a*c == 0) {
        printf("Roots are real and equal\n");
        printf("Root = %.2f\n", -b / (2*a));
    } else {
        printf("Roots are complex\n");
        printf("Real part = %.2f\n", -b / (2*a));
        printf("Imaginary part = %.2f\n", sqrt(-(b*b - 4*a*c)) / (2*a));
    }

    return 0;
}
