#include <stdio.h>

int main() {
    int nota1, nota2, media;

    printf("Escreva as notas da primeira e da segunda prova. Digite 50 para sair do programa.\n");

    while(1) {
        scanf("%d", &nota1);
        if (nota1==50) {
            break;
        }

        if (nota1 < 0 || nota1 > 10) {
            printf("Nota invalida, digite apenas valores entre 0 e 10\n");
            continue;
        }

        scanf("%d", &nota2);
        if (nota2 < 0 || nota2 > 10) {
            printf("Nota invalida, digite apenas valores entre 0 e 10\n");
            continue;
        }

        media = (nota1 + nota2) / 2;
        printf("Media das notas: %d\n", media);
    }

    return 0;
}
