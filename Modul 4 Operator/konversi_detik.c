#include <stdio.h>

int main() {
    int detik, menit, jam;

    printf("masukan jumlah detik: ");
    scanf("%i", &detik);

    jam = detik / 3600;
    menit = (detik / 60) % 60;
    detik = detik % 60;

    printf("%i jam, %imenit, %idetik\n", jam, menit, detik);

    return 0;
}