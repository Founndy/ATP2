#include <stdio.h>


int dobro(int x){

    return 2*x;

}

int main(){

    int x;

    scanf("%d", &x);

    printf("seu dobro é %d\n", dobro(x));
    return 0;

}