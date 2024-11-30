#include <stdio.h>
#include <string.h>

int main() {
    char nama[100], NIM[50], Prodi[30], Fakultas[30];
    float NilaiPraktikum, NilaiUts, NilaiUas, NilaiAkhir;

    // Input Nama
    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0;

    // Input NIM
    printf("NIM: ");
    fgets(NIM, sizeof(NIM), stdin);
    NIM[strcspn(NIM, "\n")] = 0;

    // Input Prodi
    printf("Prodi: ");
    fgets(Prodi, sizeof(Prodi), stdin);
    Prodi[strcspn(Prodi, "\n")] = 0;

    // Input Fakultas
    printf("Fakultas: ");
    fgets(Fakultas, sizeof(Fakultas), stdin);
    Fakultas[strcspn(Fakultas, "\n")] = 0;

    // Input Nilai Praktikum
    printf("Nilai Praktikum: ");
    scanf("%f", &NilaiPraktikum);

    // Input Nilai UTS
    printf("Nilai UTS: ");
    scanf("%f", &NilaiUts);

    printf("Nilai UAS: ");
    scanf("%f", &NilaiUas);

    printf("\n=== Data yang Dimasukkan ===\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", NIM);
    printf("Prodi: %s\n", Prodi);
    printf("Fakultas: %s\n", Fakultas);
    printf("Nilai Praktikum: %.2f\n", NilaiPraktikum);
    printf("Nilai UTS: %.2f\n", NilaiUts);
    printf("Nilai UAS: %.2f\n", NilaiUas);
    printf("Nilai Akhir: %.2f\n", NilaiAkhir = (0.30 * NilaiPraktikum) + (0.30 * NilaiUts) + (0.40 * NilaiUas));

    return 0;
}