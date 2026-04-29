#include <stdio.h>

void saudacao(char nome[10]){

    printf("Bem vindo! %s.\n",nome);

}

int main(){

    char nome[10];


    scanf("%s",&nome);

   saudacao(nome);
    
    return 0;

}