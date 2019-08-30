#include <stdio.h>

int main(){
    float n1, n2, n3, menor;

    printf("Digite o 1° valor: ");
    scanf("%f", &n1);
    printf("Digite o 2° valor: ");
    scanf("%f", &n2);
    printf("Digite o 3° valor: ");
    scanf("%f", &n3);

    if(n1<n2 && n1<n3){
            menor=n1;
        }else{
            if(n2<n1 && n2<n3){
            menor=n2;
        }else{
            menor=n3;
        }
    }
        printf("O menor é %1.2f.\n", menor);
}