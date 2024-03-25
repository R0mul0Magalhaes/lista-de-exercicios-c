#include <stdio.h>

void printHexa(int num) {
    int i;
    char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    printf("Hexadecimal: ");
    for (i = 3; num != 0; num >>= 4, i -= 4)
        printf("%c", hexChars[num & 0xF]);

    printf("\n");
}

void printOctal(int num) {
    printf("Octal: ");
    while (num != 0) {
        printf("%d", num % 8);
        num /= 8;
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printHexa(num);
    printOctal(num);

    return 0;
}
