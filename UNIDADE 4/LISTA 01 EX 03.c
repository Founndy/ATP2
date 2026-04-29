#include <stdio.h>


int soma(int x, int y){

    return y + x;

}

int main(){

    int x, y;

    scanf("%d %d", &x , &y);

    printf("a soma entre eles é %d\n", soma(x, y));
    return 0;

}