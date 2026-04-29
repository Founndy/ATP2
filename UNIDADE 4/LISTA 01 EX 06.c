#include <stdio.h>

void avaliacao (float x){

if(x >= 6){
    printf("APROVADO!\n");

}else{
    printf("REPROVADO!\n");
}
}

int main(){

    while(5){

        float x = 0;

        printf("DIGITE A MEDIA DO ALUNO:\n");
        
        scanf("%f", &x);

        avaliacao(x);


    }
    
    return 0;
}