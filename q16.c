#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float X1, Y1, X2, Y2, X3, Y3, lA, lB, lC, temp;
    printf("Insira os pontos do plano:\n");
    printf("Informe X e Y do primeiro ponto:\n");
    printf("X1= ");
    scanf("%f", &X1);
    printf("Y1= ");
    scanf("%f", &Y1);
    printf("Informe X e Y do segundo ponto:\n");
    printf("X2= ");
    scanf("%f", &X2);
    printf("Y2= ");
    scanf("%f", &Y2);
    printf("Informe X e Y do terceiro ponto:\n");
    printf("X3= ");
    scanf("%f", &X3);
    printf("Y3= ");
    scanf("%f", &Y3);
        
//calcular os lados ab, bc e ca ------------------------
    lA = sqrt(pow(X2-X1,2)+pow(Y2-Y1,2));
    lB = sqrt(pow(X3-X2,2)+pow(Y3-Y2,2));
    lC = sqrt(pow(X3-X1,2)+pow(Y3-Y1,2));
//------------------------------------------------------
//verificar se é triângulo------------------------------
    if(lA>lB+lC || lB>lC+lA || lC>lA+lB){
        printf("Não é triângulo!");
        exit(0);
    }
//classificação dos triangulos--------------------------
    if((lA==lB)&&(lB==lC)){
        printf("É um triângulo equilátero!\n");
    }else if(lA==lB || lA==lC || lB==lC){
                      if(lA==lB && (lC*lC==lA*lA+lB*lB)){
                    printf("É um triângulo isósceles retângulo!\n");
                }else if(lA==lC && (lB*lB==lA*lA+lC*lC)){
                    printf("É um triângulo isósceles retângulo!\n");
                }else if(lB==lC && (lA*lA==lB*lB+lC*lC)){
                    printf("É um triângulo isósceles retângulo!\n");
                }else{
                    printf("É um triângulo isósceles!\n");
                }
    }else{
        if((lA!=lB)&&(lB!=lC)&&(lC!=lA)){
                if(lA*lA==lB*lB+lC*lC){
                printf("É um triângulo escaleno retângulo!\n");
            }else if(lB*lB==lA*lA+lC*lC){
                printf("É um triângulo escaleno retângulo!\n");

            }else if(lC*lC==lA*lA+lB*lB){
                printf("É um triângulo escaleno retângulo!\n");
            }else{
            printf("É um triângulo escaleno!\n");
            }
        }
    }     
}
