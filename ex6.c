#include <stdio.h>

int main() {
    int n1, n2;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &n1);
    printf("Escreva o segundo numero: ");
    scanf("%d", &n2);

    if (n1 < n2) {
        printf("\nValores entre %d e %d:\n", n1, n2);
        for (int i = n1; i <= n2; i++) {
            printf("%d ", i);
        }
    } else if (n1 > n2) {
        printf("\nValores entre %d e %d:\n", n2, n1);
        for (int i = n2; i <= n1; i++) {
            printf("%d ", i);
        }
    } else {
        printf("Os valores são iguais!");
    }

    return 0;
}
