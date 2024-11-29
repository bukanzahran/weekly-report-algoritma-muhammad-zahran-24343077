#include <stdio.h>

int main() 
{
    int i;

    // Deret bilangan genap (Muhammad Zahran)
    printf("Deret bilangan genap dari 0 hingga 50:\n");
    for (i = 0; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n\n"); // Hanya jarak antara output, jangan sampai jarak antara kita terinput:)

    // Deret bilangan ganjil (Informatics Engineering)
    printf("Deret bilangan ganjil dari 0 hingga 50:\n");
    for (i = 1; i <= 50; i += 2) {
        printf("%d ", i);
    }
    return 0;
}