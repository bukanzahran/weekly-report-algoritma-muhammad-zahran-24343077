#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
    int randomNum, guess, attempts = 0;
    char playAgain;

    srand(time(NULL));
    randomNum = (rand() % 20) + 1;
    printf("Aku udah memilih nomor antara 1 dan 20. Silahkan tebak\n");

    do {
        printf("Masukkan tebakan kamu: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNum) {
            printf("Nomor aku lebih besar\n");
        } else if (guess > randomNum) {
            printf("Nomor aku lebih kecil\n");
        } else {
            printf("Selamat, Kamu benar Nomor aku adalah %d.\n", randomNum);
            printf("Kamu membutuhkan %d percobaan untuk menebak hahaha.\n", attempts);
            break;
        }
    } while (1);

    printf("Kamu mau main lagi ga? (y/n): ");
    scanf(" %c", &playAgain);

    if (playAgain == 'y' || playAgain == 'Y') {
        playGame();
    } else {
        printf("Makasih yaa udah mau bermain\n");
    }
}

int main() {
    printf("Selamat Datang dipermainan Tebak Angka Zahran!\n");
    playGame();
    return 0;
}