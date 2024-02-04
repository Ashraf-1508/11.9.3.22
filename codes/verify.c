#include <stdio.h>
#include <math.h>

// Function to calculate the product of n terms in a geometric progression
double calculateProduct(int n, double a, double r) {
    double product = 1.0;
    for (int i = 0; i < n; i++) {
        product *= a * pow(r, i);
    }
    return product;
}

int main() {
    // Given values
    double a, b, r;
    int n;

    // Input the values of a, b, r, and n
    printf("Enter the first term (a): ");
    scanf("%lf", &a);

    printf("Enter the nth term (b): ");
    scanf("%lf", &b);

    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate P and (ab)^n
    double P = calculateProduct(n, a, r);
    double ab_pow_n = pow(a * b, n);

    // Check if P^2 equals (ab)^n
    if (pow(P, 2) == ab_pow_n) {
        printf("The statement P^2 = (ab)^n is verified.\n");
    } else {
        printf("The statement P^2 = (ab)^n is not verified.\n");
    }

    return 0;
}

