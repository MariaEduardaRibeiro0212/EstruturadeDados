#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
	char nome[70];
	char matricula[30];
	char curso[100];
	char email[100];
	int idade;
	
};

typedef struct Aluno Aluno;


int main(int argc, const char * argv[]){
	
	Aluno aluno1;
	
	strcpy(aluno1.nome, "Maria");
	strcpy(aluno1.curso, "BCC");
	strcpy(aluno1.matricula, "UC23103085");
	strcpy(aluno1.email, "maria.gabriel@a.ucb.br");
	aluno1.idade = 19;
	
	printf("Nome: %s\n", aluno1.nome);
	printf("Curso: %s\n", aluno1.curso);
	printf("Matricula: %s\n", aluno1.matricula);
	printf("E-mail:: %s\n", aluno1.email);
	printf("Idade: %d\n", aluno1.idade);
	
	return 0;
}
