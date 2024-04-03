#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _pessoa{
	char nome[100];
	int idade;
	char matricula[30];
	char email[60];
	char curso[50];

} Pessoa;

int main(){
	
	Pessoa *p = calloc(1, sizeof(Pessoa));
	
	strcpy(p->nome, "Lucas");//Em alocação dinâmica o ponto "." utilizado na atribuição de um campo de uma struct é substituído pela seta "->"
	strcpy(p->curso, "ADS");
	strcpy(p->matricula, "UC23506987");
	strcpy(p->email, "lucas.lira@a.ucb.br");
	p->idade = 26;
	
	printf("Nome: %s\n", p->nome);
	printf("Idade: %d\n", p->idade);
	printf("Curso: %s\n", p->curso);
	printf("Matricula: %s\n", p->matricula);
	printf("E-mail: %s\n", p->email);
	
	return 0;
}
