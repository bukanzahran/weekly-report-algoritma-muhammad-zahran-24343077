#include <stdio.h>

int main() {
    int n = 5; // Jumlah baris, kalo jumlah cinta ku tak terhingga
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++){
          printf("*");  
        }
        printf("\n");        
    }
    return 0; 
}