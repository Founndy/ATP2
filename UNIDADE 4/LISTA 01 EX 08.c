#include <stdio.h>

int quadrado(int x){

    return x*x;
}

int main(){

    while(5){

        int x = 0;

        printf("DIGITE UM INTEIRO PARA CALCULAR O SEU QUADRADO\n");
        
        scanf("%d", &x);

        printf("o quadrado de %d é %d\n\n", x, quadrado(x));
    }
    
    return 0;
}