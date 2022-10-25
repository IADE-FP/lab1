#include <stdio.h>

// (a) Retângulo: $A = b \times a$
float rectangle_area(float a, float b) {
    return a * b;
}

// (b) Trapezoide: $A = \frac{b_1 + b_2}{2}h$
float trap_area(float b1, float b2) {
    return ((b1 + b2) / 2) * h;
}

// (c) Triângulo: $A = \sqrt{s(s-a)(s-b)(s-c)}$, $s = \frac{a+b+c}{2}$
float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    return 0;
}