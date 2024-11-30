#include <stdio.h>

int main() {
    float mata_uang_rupiah;
    const float kurs = 14250;
    float mata_uang_dolar;

    printf(" mata uang rupiah: ");
    scanf("%f", &mata_uang_rupiah);

    mata_uang_dolar = mata_uang_rupiah / kurs;
    printf(" mata uang dolar: %.2f", mata_uang_dolar);

    return 0;
}