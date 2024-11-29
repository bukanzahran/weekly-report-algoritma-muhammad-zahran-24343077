#include <stdio.h>

float hitung(float a, float b, char operasi) {
    if (operasi == '+') return a + b;
    if (operasi == '-') return a - b;
    if (operasi == '*') return a * b;
    if (operasi == '/') {
        if (b == 0) {
            printf("ERROR: Pembagian dengan nol tidak boleh yaa sayang!\n");
            return 0;
        }
        return a / b;
    }
    return 0; //OPERASI TIDAK VALID
}

int main() {
    float x, y, hasil;
    char operasi;

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &x);
    printf("Masukkan operasi (+, -, *, /): ");
    scanf(" %c", &operasi);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &y);

    hasil = hitung(x, y, operasi);
    printf("Hasil: %2.f\n", hasil);

    return 0;
}