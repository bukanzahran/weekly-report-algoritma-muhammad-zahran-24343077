#include <stdio.h>

float potong(float total) {
    if (total >= 3000000) {
        return total * 0.35;
    } else if (total >= 1000000) {
        return total * 0.20;
    }
    return 0;
}

int main() {
    float totalPembelian, diskon, totalBayar;

    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.): ");
    scanf("%f", &totalPembelian);

    diskon = potong(totalPembelian);
    totalBayar = totalPembelian - diskon;

    printf("Besar Diskon: Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan: Rp. %2.f\n", totalBayar);

    return 0;
}