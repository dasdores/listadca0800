#include <stdio.h>


int main(){
    int an;

    printf("Informe um ano: ");
    scanf("%d", &an);

    if((an%400)==0){
        printf("O ano %d é bissexto.\n", an);
    }else{
        if((an%4)==0 && (an%100)!=0){
            printf("O ano %d é bissexto.\n", an);
        }else{
            printf("O ano %d não é bissexto.\n", an);
        }
    }
}
