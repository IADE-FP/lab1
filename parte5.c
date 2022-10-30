#include <stdio.h>
#include <math.h>

// (a) Escreva a função fatorial: $n! = n \times (n-1) \times (n-2) \times ... \times 3 \times 2\times 1$
long factorial(int n) {
    long int result = 1;
    for (long i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// (b) Determine a convergência de: $\sum_{n=1}^{+\infty} \frac{1}{n(n+1)}$
double sum_series1() {
    double sum = 0;
    for (int n = 1; n < 1000000; n++) {
        sum += 1.0 / (n * (n + 1));
    }
    return sum;
}

// (c) Determine a convergência de: $\sum_{m=1}^{+\infty} \sum_{n=1}^{m}\frac{n}{n^2}$
double sum_series2() {
    double sum = 0;
    for (int m = 1; m < 10000; m++) {
        for (int n = 1; n <= m; n++) {
            sum += n / (n * n);
        }
    }
    return sum;
}

// (d) Escreva a função seno: $sen(\theta) = \sum_{n=0}^{+\infty} \frac{(-1)^n(\theta^{1n+1})}{(2n+1)!}$, $\theta \in [-4\pi, 4\pi]$
double sin(double theta) {
    double sum = 0;
    for (int n = 0; n < 1000000; n++) {
        sum += pow(-1, n) * pow(theta, 2 * n + 1) / factorial(2 * n + 1);
    }
    return sum;
}

int main() {
    printf("factorial(5) = %ld\n", factorial(5));
    printf("sum_series1() = %f\n", sum_series1());
    printf("sum_series2() = %f\n", sum_series2());
    printf("sin(45) = %f\n", sin(45));
    return 0;
}