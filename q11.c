#include <stdio.h>

int main(){
    float latao, cobre, zinco;

    printf("Informe a quantidade de latão desejada: ");
    scanf("%f", &latao);

    cobre = latao * 0.7;
    zinco = latao * 0.3;

    printf("Zinco necessário: %1.2f.\n", zinco);
    printf("Cobre necessário: %1.2f.\n", cobre);
}