#include <stdio.h>

int main() {
    float price;

    printf("Escreva o preço do produto: ");
    scanf("%f", &price);

    if (price < 100) {
        price *= 1.10;
    } else {
        price *= 1.20;
    }

    printf("O preço inflacionado do produto é: %.2f\n", price);

    return 0;
}
