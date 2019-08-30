#include <stdio.h>

int main(){
    float vMaxima, vVeiculo;

    printf("Informe a velocidade máxima da avenida: ");
    scanf("%f", &vMaxima);
    printf("Informe a velocidade que o veículo passou pela avenida: ");
    scanf("%f", &vVeiculo);

    if(vVeiculo>vMaxima&&vVeiculo<=(vMaxima+10)){
        printf("Multado: R$ 50.00 reais.\n");
    }else{
        if(vVeiculo>(vMaxima+10)&&vVeiculo<=(vMaxima+30)){
            printf("Multado: R$ 100.00 reais.\n");
        }else{
            if(vVeiculo>(vMaxima+30)){
                printf("Multado: R$ 200.00 reais.\n");
            }else{
                printf("Você está dentro da velocidade permitida!\n");
            }
        }
    }
}