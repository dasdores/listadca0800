#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite o 1° número: ");
    scanf("%f", &n1);
    printf("Digite o 2° número: ");
    scanf("%f", &n2);
    printf("Digite o 3° número: ");
    scanf("%f", &n3);

    if(n1>n2+n3){
        printf("O 1° é maior que a soma do 2° + 3°.");
    }else{
        printf("O 1° é menor que a soma do 2° + 3°.\n");
    }
}