#include <stdio.h>
#include <math.h>

int main() {
    // (a) `olá mundo`
    printf("olá mundo\n");

    // (b) `"olá mundo"`
    printf("\"olá mundo\"\n");

    // (c) $4 \times 4$
    printf("%d\n", 4 * 4);

    // (d) $3 \times 1000$
    printf("%d\n", 3 * 1000);

    // (e) $3000000 \times 9999999$
    // long int la = 3000000;
    // long int lb = 9999999;
    // long int li = la * lb;
    // long int li = 3000000L * 9999999L;
    // printf("%ld\n", li);
    printf("%ld\n", 3000000L * 9999999L);

    // (f) $\sqrt{177}$
    printf("%f\n", sqrt(177));

    // (g) $\frac{20}{3}$
    printf("%f\n", 20.0 / 3.0);

    // (h) $7^2$
    printf("%d\n", 7*7);

    // (i) $\sum^{5}_{i=0}n_i, \forall n \in [1,1,2,3,5]$
    printf("%d\n", 1+1+2+3+4+5);
    return 0;
}