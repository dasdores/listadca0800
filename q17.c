#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, n3, n4, totalPar=0;
    printf("Digite o 1° número: ");
    scanf("%d", &n1);
    printf("Digite o 2° número: ");
    scanf("%d", &n2);
    printf("Digite o 3° número: ");
    scanf("%d", &n3);
    printf("Digite o 4° número: ");
    scanf("%d", &n4);

    if(n1%2==0){
        totalPar = totalPar + n1;
    }
    if(n2%2==0){
        totalPar = totalPar + n2;
    }
    if(n3%2==0){
        totalPar = totalPar + n3;
    }
    if(n4%2==0){
        totalPar = totalPar + n4;
    }
    printf("A soma de todos os números pares é %d .\n", totalPar);
}