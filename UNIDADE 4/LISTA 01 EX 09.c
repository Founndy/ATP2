#include <stdio.h>

float soma(float x,float y) {
	float soma1;
	soma1 = x + y;
	return soma1;
}
void escr(float x) {
	printf("A soma dos numeros digitados C) %.1f\n", x);

}

int main()
{
	float x, y, test = 0;
	printf("Digite 2 numeros para obter a sua soma: \n");

	scanf("%f %f", &x, &y);

	test = soma(x, y);

	escr(test);


	return 0;
}