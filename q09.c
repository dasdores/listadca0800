#include <stdio.h>

int main(){
    float preco, imposto, lucro, valorReal;

    printf("Informe o preço de fábrica do carro: ");
    scanf("%f", &preco);

    imposto = preco * 0.45;
    lucro = preco * 0.12;
    valorReal = preco + imposto + lucro;

    printf("Valor do carro = R$ %1.2f reais.\n", valorReal);
    printf("Imposto = R$ %1.2f reais.\n", imposto);
    printf("Lucro do vendedor= R$ %1.2f reais.\n", lucro);
}