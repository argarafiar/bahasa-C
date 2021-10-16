#include <stdio.h>

int main() {
    int lim;
    printf("masukkan limit untuk bintang: ");
    scanf("%d", &lim);
    
    for (int row = 1; row <= lim; row++) {
        for (int star = 1; star <= row; star++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
