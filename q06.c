#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("A soma deles é %1.1f.\n", n1+n2);
    printf("O produto deles é %1.1f.\n", n1*n2);
    printf("O quociente do 1° pelo 2° é %1.1f.\n", n1/n2);
    printf("O quociente do 2° pelo 1° é %1.1f.\n", n2/n1);
}