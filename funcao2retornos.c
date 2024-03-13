#include <stdio.h>
#include <locale.h>

int soma_e_sub(int x, int y, int *sub){
	int soma = x + y;
	*sub = x-y;
	
	puts("Função");
	printf("&x = %p, x = %d\n", &x, x);
	printf("&y = %p, y = %d\n\n", &y, y);
	
	return soma;
}

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 10;
	int b = 20;
	int c;
	int d;
	
	puts("Antes da chamada da função:");
	printf("&a = %a, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("&c = %p, c = %d\n", &c, c);
	printf("&d = %p, d = %d\n\n", &d, d);
	
	c = soma_e_sub(a, b, &d);
	
	puts("Depois da chamada da função:");
	printf("&a = %a, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("&c = %p, c = %d\n", &c, c);
	printf("&d = %p, d = %d\n", &d, d);
	
	
 	return 0;
	
}
