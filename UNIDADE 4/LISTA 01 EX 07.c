#include <stdio.h>

void impar_par(int x){
if(x % 2 == 0){
    printf("VERDADEIRO!\n");

}else{
    printf("FALSO!\n");

}
}
int main(){

    while(5){

        int x = 0;

        printf("DIGITE UM INTEIRO PARA SABER SE ELE É IMPAR OU PAR\n");
        
        scanf("%d", &x);

        impar_par(x);


    }
    
    return 0;
}