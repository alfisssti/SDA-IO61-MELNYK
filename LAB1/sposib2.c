#include <stdio.h>
int main() {
    float x = 0.0;
    float y = 0.0;
    int defined = 0;

    printf("Write real number x: ");
    scanf_s("%f", &x);
    if ((x > -10 && x =< -5) || (x > 5 && x =< 15)) {
        y=x*x*x-6.0;
        defined=1;
    } else if (x => 25) {
        y=2.0*x*x*x-3.0*x+2;
        defined=1;
    }

    if (defined==1) {
        printf("y(%.4f) = %.4f\n", x, y);
    } else {
        printf("For such x = %.4f function is undefined", x);
    }
}