#include <stdio.h>

int x = 10;

void tripo(int y){
     x = 3*y;
}

int main(){
   

    printf("%d\n", x);

    tripo(x);

    printf("%d\n", x);

   
    return 0;
}
    

