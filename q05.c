#include <stdio.h>
#include <math.h>

int main(){
    float areaTotal, areaBase, areaLateral;
    float volumeTotal;
    float pi, raio, altura;

    printf("Calcular área e volume do cilindro\n");
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    pi = 3.14;
    areaBase = pi * (raio * raio);
    areaLateral = 2 * pi * raio * altura;
    areaTotal = 2 * areaBase + areaLateral;
    volumeTotal = areaBase * altura;

    printf("Área total: %1.2f²\n", areaTotal);
    printf("Volume total: %1.2f³\n", volumeTotal);
}