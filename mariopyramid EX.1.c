#include <stdio.h>
#include <cs50.h>

int main(void) {

//Definir variáveis
    int h, i, j;

// Pedir altura da pirâmide ao user
    printf("Digite a altura da pirâmide (entre 1 e 9): ");
    scanf("%i", &h);

// Controlo da altura mínima e máxima
    if (h < 1 || h > 9) {
        printf("A altura da pirâmide deve estar entre 1 e 9.\n");
        return 0; // Saída com código de erro
    }

//Print espaços à esquerda
    for(i = 0; i <= h; i++)
    {
        for(j = h - i; j >= 0; j--)
            printf(" ");
        for(j = 0; j <= h ;j++){
            if(j > i){
                break;
            }
            printf("#");
        }

//Print espaços no meio da pirâmide
        printf(" ");
        printf(" ");

//Print blocos do lado direito
        for(j = 0; j <= h ;j++){
            if(j > i){
                break;
            }
            printf("#");
        }
        printf("\n");
    }

//Print base da pirâmide
    for (j = 0; j < 2 * h+6; j++) {
        printf("=");
    }

    printf("\n");

//Reseta tudo
    return 0;
}
