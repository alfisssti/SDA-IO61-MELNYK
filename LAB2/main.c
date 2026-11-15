//S = 1/(1+x) = Σ(i=0..n) (−1)^i · x^i (x = 1/3)
#include <stdio.h>

int main() {
    int n;
    double x = 1.0 / 3.0;

    printf("Enter a natural number n: ");
    if (scanf_s("%d", &n) != true || n < 0) {
        printf("n must be a natural number.\n");
    }
    double suma = 0;
    long long cntr = 0;
    cntr+=2; // suma= and cntr =
    for (int i = 0; i <= n; i++) {
        cntr++; // i=
        double powerx = 1.0;
        double sign = 1.0;
        cntr+=2; // powerx= and sign=
        for (int j = 0; j < i; j++) {
            cntr+=2; //j= and j<i
            powerx *= x;
            cntr++; // powerx* and =
            cntr++; //j++
        }
        cntr++; //last j<i
        cntr++; //k=
        for (int k = 0; k < i; k++) {
            cntr++; //k<i
            sign *= -1.0;
            cntr++; // sign* and =
            cntr++; // k++
        }
        cntr++; // last k<i
        suma += sign * powerx;
        cntr+=3; //suma +, =, *
        cntr++; // i++
    }
    cntr++; // last i<=n

    double suma2 = 0.0;
    double term = 1.0;
    double negx = -x;
    long long cntr2 = 0;

    for (int i = 0; i <= n; i++) {
        cntr2++; // i=
        suma2 += term;
        cntr2+=2; // suma2 + and =
        term *= negx;
        cntr2+=2; //cntr + and =
        cntr2++; // i++
    }
    cntr2++; // last i<=n

    printf("First variation, nested loops");
    printf("The value of x in first variation is: %.7lf\n", suma);
    printf("The number of operations in first variation is: %lld\n\n", cntr);
    printf("Second variation, dynamic programming");
    printf("The value of x in second variation is: %.7lf\n", suma2);
    printf("The number of operations in second variation is: %lld\n", cntr2);
}
