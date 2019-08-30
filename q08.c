#include <stdio.h>

int main(){
    float n1, n2;

    printf("Digite o 1° número: ");
    scanf("%f", &n1);
    printf("Digite o 2° número: ");
    scanf("%f", &n2);

    if(n1>n2){
        printf("O 1° número é maior que o 2°.\n");
    }else{
        if(n2>n1){
        printf("O 2° número é maior que o 1°.\n");
    }else{
        if(n1=n2){
        printf("Ambos são iguais.\n");
            }
        }
    }
}