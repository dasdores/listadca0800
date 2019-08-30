#include <stdio.h>
#include <math.h>

int main(){
    float tempo, valor, quant, total, pre;

    printf("Calcular gasto com cigarro:\n");
    printf("A quantos anos fumas?");
    scanf("%f", &tempo);
    printf("Qual o valor de um maço de cigarro?");
    scanf("%f", &valor);
    printf("Quantos cigarros fumas por dia?");
    scanf("%f", &quant);

    pre = valor/20;
    total = (tempo*365)*(pre*quant);
    printf("Você gastou até hoje em média R$ %1.2f reais com cigarro.\n", total);
}