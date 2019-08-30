#include <stdio.h>

int main(){
    float n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if(n2!=0){
        printf("Quociente do primeiro pelo segundo = %1.2f.\n", n1/n2);
    }else{
        printf("Divisão por zero!\n");
    }
}