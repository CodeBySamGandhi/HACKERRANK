#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double D;
    double root1, root2;
    double realPart, imagPart;

    D = (double)b * b - 4.0 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2.0 * a);
        root2 = (-b - sqrt(D)) / (2.0 * a);

        printf("Roots: %.2f, %.2f\n", root1, root2);
        printf("Type: Real and Distinct");
    }
    else if (D == 0) {
        root1 = -b / (2.0 * a);

        printf("Roots: %.2f, %.2f\n", root1, root1);
        printf("Type: Real and Equal");
    }
    else {
        realPart = -b / (2.0 * a);
        imagPart = sqrt(-D) / (2.0 * a);

        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
        printf("Type: Complex");
    }

    return 0;
}