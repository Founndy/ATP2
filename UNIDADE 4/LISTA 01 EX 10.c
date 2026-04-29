
#include <stdio.h>

float soma(float x, float y, float z){
        return x + y + z;
    }
    
float media(float x, float y, float z){
    return (x + y + z)/3;
}

float maior(float x, float y, float z){
    if(x > y && x > z ){
        return x;
    }else{
        if(y > x && y > z){
            return y;
        }else{
            return z;
        }
    }
}

int main()
{
    float x, y, z;
    
    printf("Digite 3 numeros para descobrir a suas respectivas, soma, media e maior valor \n");
    scanf("%f %f %f", &x, &y, &z);
    
    printf("a soma é:%.1f\na media é %.1f\ne o maior valor é %.1f",soma(x, y, z), media(x, y, z), maior(x, y, z));

    return 0;
}
