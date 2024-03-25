#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2;

    printf("Escreva o primeiro numero: ");
    scanf("%f", &n1);

    printf("Escreva o segundo numero: ");
    scanf("%f", &n2);

    printf("Soma dos números: %.2f\n", n1 + n2);
    printf("Primeiro número multiplicado pelo quadrado do segundo: %.2f\n", n1 * pow(n2, 2));
    printf("Quadrado do primeiro número: %.2f\n", pow(n1, 2));
    printf("Raiz quadrada da soma dos quadrados: %.2f\n", sqrt(pow(n1, 2) + pow(n2, 2)));
    printf("Diferença entre o primeiro e o segundo números: %.2f\n", sin(n1 - n2));
    printf("Valor absoluto do primeiro número: %.2f\n", fabs(n1));

    return 0;
}
