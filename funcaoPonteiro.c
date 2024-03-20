#include <stdio.h>
#include <locale.h>

int soma(int x, int y){
	int z = x + y;
	
	puts("Função");
	printf("&x = %p, x = %d\n", &x, x);
	printf("&y = %p, y = %d\n", &y, y);
	printf("&z = %p, z = %d\n\n", &z, z);
	
	return z;
}

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 10;
	int b = 20;
	int c;
	
	puts("Antes da chamada da função:");
	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("&c = %p, c = %d\n\n", &c, c);
	
	c = soma(a, b);
	
	puts("Depois da chamada da função:");
	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("&c = %p, c = %d\n", &c, c);
	
	
 	return 0;
	
}
