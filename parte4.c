#include <stdio.h>

int main() {
    int n = 20;

    int a = 0;
    int b = 1;
    int c = 0;
    printf("%d %d ", a, b);
    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    printf("\n");
    return 0;
}
