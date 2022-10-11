# [Fundamentos da Programação- IADE](https://mycampus.pt//courses/13208)

## Laboratório 1

Considere o programa de teste:

```C
#include <stdio.h>

int main() {
    // printf("%s\n", "teste");
    // printf("%d\n", "1");
    // printf("%f\n", "1.2");
    return 0;
}
```

Utilize o programa de teste para produzir os *outputs* das várias alíneas.

### Parte 1 - Análise de operações

(a) `olá mundo`

(b) `"olá mundo"`

(c) $4 \times 4$

(d) $3 \times 1000$

(e) $3000000 \times 9999999$

(f) $\sqrt{177}$

(g) $\frac{20}{3}$

(h) $7^2$

(i) $\sum^{5}_{i=0}n_i, \forall n \in [1,1,2,3,5]$

### Parte 2 - Área de polígonos

(a) Rectângulo: $A = b \times a$

(b) Trapezoide: $A = \frac{b_1 + b_2}{2}h$

(c) Triangulo: $A = \sqrt{s(s-a)(s-b)(s-c)}$, $s = \frac{a+b+c}{2}$

### Parte 2 - Número primos

Ecreva um teste que indique se um determinado número é primo.

### Parte 3 - Série de Fibonacci

A sequência de Fibonacci é determinada por

$F(0) = 1$

$F(1) = 1$

$F(n, \forall n \gt 1) = F(n-1) + F(n-2)$

para um determinado número $n$, dere a sequência de Fibonacci entre 0 e $n$.

## Apoio

1. Deve utilizar a função `main` para experimentar todos os princípios e construções abordadas em aula.
2. A linha de comandos `Unix` disponibiliza um manual de C completo. Por exemplo, para consultar a função `printf` deve executar o comando `man 3 printf` no terminal.
3. Caso não tenha uma linha de comandos disponível, pode recorrer a um motor de busca.
