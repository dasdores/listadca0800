#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, res;
    float quo;
    printf("Calcular quociente e resto entre x e y\n");
    printf("Digite o valor de x:");
    scanf("%d", &x1);
    printf("Digite o valor de y:");
    scanf("%d", &y1);
    
    quo = x1 / y1;
    printf("O quociente é %1.2f.\n", quo);
    res = x1 % y1;
    printf("O rest é %d.\n", res);
}
