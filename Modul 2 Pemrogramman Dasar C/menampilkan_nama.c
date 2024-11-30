#include <stdio.h>
#include <string.h>
int main()
{
    char nama[31];
    printf("Hello, siapa nama lengkap kamu? \n");
    scanf("%30[^\n]s", nama);
    printf("Selamat datang %s dalam pemrogrmaman c!\0", nama);
    return 0;
}