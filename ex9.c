#include <stdio.h>

int main() {
    float n1, n2, resultado;
    char operator;

    printf("Escreva o primeiro numero: ");
    scanf("%f", &n1);
    printf("Escreva a operação (+,-,*,/): ");
    scanf(" %c", &operator);
    printf("Escreva o segundo numero: ");
    scanf("%f", &n2);

    switch (operator) {
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            if(n2 != 0)
                resultado = n1 / n2;
            else
                printf("Erro.\n");
            break;
        default:
            printf("Erro.\n");
            return 1;
    }

    if(resultado != 0)
        printf("Resultado: %.2f %c %.2f = %.2f\n", n1, operator, n2, resultado);

    return 0;
}
