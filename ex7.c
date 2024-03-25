#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 128; i++) {
        printf("%3d : %c : %x\n", i, i, i);
    }

    return 0;
}
