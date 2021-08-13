#include <stdio.h>

int main() {

    int i, menor, maior, valor1=0, valor2=0, aux=0;

    scanf("%d" "%d", &valor1, &valor2);

    if (valor1<valor2){
        menor = valor1;
        maior = valor2;
    } else{
        menor = valor2;
        maior = valor1;
    }
    if (menor<0){
        menor+=2;
    }
    for ((menor); menor<maior; menor++){
        if (menor%2!=0){
            aux = aux + menor;

        }
    }
    printf("%d\n", aux);
    return 0;
}
