#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = i; j >= 0; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

