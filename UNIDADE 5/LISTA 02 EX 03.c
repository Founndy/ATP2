#include <stdio.h>


void tripo(int *y){
     *y = 3**y;
}

int main(){
    int x = 0;

   scanf("%d", &x);

    printf("%d\n", x);

    tripo(&x);

    printf("%d\n", x);

   
    return 0;
}
    

