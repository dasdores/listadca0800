#include <stdio.h>

int main(){
    float n1, n2, n3, a, b, c;

    printf("Digite o 1° valor: ");
    scanf("%f", &n1);
    printf("Digite o 2° valor: ");
    scanf("%f", &n2);
    printf("Digite o 3° valor: ");
    scanf("%f", &n3);

if(n1!=n2 && n1!=n3 && n2!=n3){
    if(n1<n2 && n1<n3){
        a = n1;
        if(n2<n3){
            b = n2;
            c = n3;
        }else{
            b = n3;
            c = n2;
        }
    }
    if(n2<n1 && n2<n3){
        a = n2;
        if(n1<n3){
            b = n1;
            c = n3;
        }else{
            b = n3;
            c = n1;
        }
    }
    if(n3<n2 && n3<n1){
        a = n3;
        if(n1<n2){
            b = n1;
            c = n2;
        }else{
            b = n2;
            c = n1;
        }
    }
        
        printf("A sequência crescente é %1.2f, %1.2f e %1.2f.\n", a, b, c);
        }else{
    printf("Existe dois(ou três) números iguais!\n");
    }   
}
    