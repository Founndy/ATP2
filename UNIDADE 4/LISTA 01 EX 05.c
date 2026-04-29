#include <stdio.h>

int media(int x, int y, int z){



    return ( x + y + z)/3;
}

int main(){

    int x, y, z;

    printf("DIGITE 3 NOTAS PARA OBTER A SUA MEDIA: \n");
    scanf("%d %d %d",&x, &y, &z);

    printf("a media dos 3 digitos é: %d\n", media(x, y, z));
    
    return 0;

}