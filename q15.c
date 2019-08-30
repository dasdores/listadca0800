#include <stdio.h>
#include <math.h>


int main(){
    float x1, x2;
    int a, b, c, delta;
    printf("Calcular as raízes de uma eq. de 2° grau: \n");
    printf("Digite o valor de 'A':");
    scanf("%d", &a);
    printf("Digite o valor de 'B':");
    scanf("%d", &b);
    printf("Digite o valor de 'C':");
    scanf("%d", &c);

    delta = b*b-4*a*c;
    if(delta>=0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        //sqrt é para raiz
        printf("x1 = %1.2f\n", x1);
        printf("x2 = %1.2f\n", x2);
    }else{
        printf("Sem raízes reais\n");
    }
}