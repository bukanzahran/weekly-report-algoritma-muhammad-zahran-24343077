#include <stdio.h>

int main() {
    int i;
    float nilai[20], total = 0.0, rataRata;

    printf("Masukkan nilai untuk 20 mahasiswa:\n");
    for (i = 0; i < 20; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%f", &nilai[i]);
        total += nilai[i];
    }

    rataRata = total / 20;

    printf("\nRata-Rata Nilai Dari 20 Mahasiswa Adalah: %.2f\n", rataRata);

    return 0;
}