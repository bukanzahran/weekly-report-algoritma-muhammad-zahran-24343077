#include <stdio.h>

int main() {
    char nama_pembeli[100], nama_barang[100];
    int harga_barang_satuan, jumlah_barang_dibeli, harga_total;

    printf("masukan nama pembeli: ");
    scanf("%s", nama_pembeli);

    printf("masukan nama barang: ");
    scanf("%s", nama_barang);

    printf("masukan harga barang satuan: ");
    scanf("%i", &harga_barang_satuan);

    printf("masukan jumlah barang dibeli: ");
    scanf("%i", &jumlah_barang_dibeli);

    harga_total = harga_barang_satuan * jumlah_barang_dibeli;

    printf("\n=== Data yang Dimasukkan ===\n");
    printf("masukan nama pembeli: %s\n", nama_pembeli);
    printf("masukan nama barang: %s\n", nama_barang);
    printf("masukan harga barang satuan: %i\n", harga_barang_satuan);
    printf("masukan jumlah barang dibeli: %i\n", jumlah_barang_dibeli);
    printf("harga total: %i\n", harga_total);

    return 0;
}