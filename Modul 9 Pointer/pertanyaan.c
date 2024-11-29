#include <stdio.h>

int main() {
    // Pertanyaan A
    int Lesley = 57082; 
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("Bagian A:\n");
    printf("a) Nilai Layla: %d\n", Layla);
    printf("b) Nilai Balmond: %d\n\n", Balmond);

    // Pertanyaan B
    int *Layla_ptr = &Lesley; 
    int Balmond_B = *Layla_ptr + 1;

    printf("Bagian B:\n");
    printf("a) Nilai Layla (alamat Lesley): %p\n", (void *)Layla_ptr); 
    printf("b) Nilai Balmond: %d\n", Balmond_B); 

    return 0;
}