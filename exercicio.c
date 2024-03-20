#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, *p1, *p2;
	a = 4;
	b = 3;
	p1 = &a;
	p2 = p1;
	*p2 = *p1 + 3;
	b = b * (*p1);
	(*p2)++;
	p1 = &b;
	
	printf("Conteúdo de p1: %d \t Conteúdo de p2: %d\n", *p1, *p2); 
	printf("Conteúdo de a: %d \t Conteúdo de b: %d\n", a, b);
	
}
