#include <stdio.h>
#include <string.h>

int main() {
    char username[100];
    char password[100];

    // Input Data
    printf("\nSelamat Datang di Portal Zahran!\n");
    printf("Masukkan Username: ");
    fgets(username, sizeof(username), stdin);

    printf("Masukkan Password Account: ");
    scanf("%s", &password);

    if (strcmp(password, "ZahranTampan")==0) {
        printf("Selamat Kamu berhasil login!\n");
    } else {
        printf("Password Yang Anda Input Salah, Coba Lagi!\n");
    }

    printf("Terima Kasih sudah login");

    return 0;
}