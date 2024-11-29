#include <stdio.h>

int main() {
    int i, j;

    // Loop untuk baris
    for (i = 1; i <= 9; i++) {
        // Loop untuk kolom
        for (j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n"); // Pindah ke baris berikutnya, kalo pindah ke lain hati itu kamu
    }
    return 0;
}