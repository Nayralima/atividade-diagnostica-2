#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numero_entre_1_e_100 = rand() % 100 + 1;
    int palpite;

    printf("Tente adivinhar o número entre 1 e 100!\n");

    while (1) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite == numero_entre_1_e_100) {
            printf(" Parabéns, você acertou!\n");
            break; // sai do loop
        } else if (palpite > numero_entre_1_e_100) {
            printf("Muito alto, tente um número menor!\n");
        } else {
            printf("Muito baixo, tente um número maior!\n");
        }
    }
    return 0;
}
