#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, n3, p4, media, menor;

    printf("Calcular se o aluno da UFRN foi aprovado\n");
    printf("Digite a nota do p1:\n");
    scanf("%f", &n1);
    printf("Digite a nota do p2:\n");
    scanf("%f", &n2);
    printf("Digite a nota do p3:\n");
    scanf("%f", &n3);
    media = n1+n2+n3;
    if((media/3>=5)&&(n1>=3)&&(n2>=3)&&(n3>=3)){
        printf("Você foi aprovado\n");
    }else{
        printf("Você reprovou, mas ainda tem a quarta prova.\n");

        printf("Digite a nota da p4:");
        scanf("%f", &p4);

        if(n1<n2 && n1<n3){
            menor=n1;
        }
        if(n2<n1 && n2<n3){
            menor=n2;
        }else{
            menor=n3;
        }

        if((((media-menor)+p4)/3>=5)&&(p4>=3)){
            printf("Você foi aprovado!\n");
        }else{
            printf("Você reprovou pequeno gafanhoto.\n");
        }
    }
}