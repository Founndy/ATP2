#include <stdio.h>

float tripo(float x){
    int s = 3*x;
    return s;
}

int main(){
    float y;

    printf("DIGITE UM NUMERO PARA RETORNAR O SEU TRIPLO: \n");

    scanf("%f", &y);

    printf("%.1f", tripo(y));


   
    return 0;
}
    

