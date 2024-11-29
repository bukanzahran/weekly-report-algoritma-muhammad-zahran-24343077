#include <stdio.h>
#define PI 3.14159

float luas(float r) {
    return PI * r * r;
}

float keliling(float r) {
    return 2 * PI * r;
}

int main() {
    float radius;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);

    if (radius <= 0) {
        printf("ERROR: jari-jari wajib hukumnya bernilai positif yaa sayang\n");
        return 1;
    }

    printf("Luas lingkaran: %2.f\n", luas(radius));
    printf("Keliling lingkaran: %.2f\n", keliling(radius));

    return 0;
}