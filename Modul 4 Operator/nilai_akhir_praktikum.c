#include <stdio.h>

int main()
{
    char nama[100], NIM[50], prodi[100], fakultas[100];
    float nilai_presensi = 85;
    float nilai_praktek = 65;
    float nilai_UTS = 80;
    float nilai_UAS = 75;
    float nilai_akhir;

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM: ");
    fgets(NIM, sizeof(NIM), stdin);

    printf("Masukkan program studi: ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Masukkan fakultas: ");
    fgets(fakultas, sizeof(fakultas), stdin);

    nilai_akhir = (0.10 * nilai_presensi) + (0.20 * nilai_praktek) + (0.30 * nilai_UTS) + (0.40 * nilai_UAS);

    printf("\n=== Data Mahasiswa ===\n");
    printf("Nama       : %s", nama);
    printf("NIM        : %s", NIM);
    printf("Program Studi : %s", prodi);
    printf("Fakultas   : %s", fakultas);
    printf("\n=== Nilai Akhir ===\n");
    printf("Nilai Presensi: %.2f\n", nilai_presensi);
    printf("Nilai Praktek : %.2f\n", nilai_praktek);
    printf("Nilai UTS     : %.2f\n", nilai_UTS);
    printf("Nilai UAS     : %.2f\n", nilai_UAS);
    printf("Nilai Akhir   : %.2f\n", nilai_akhir);

    return 0;
}
