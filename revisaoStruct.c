#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
	char nome[70];
	char curso[100];
	int idade;
	
};

typedef struct Aluno Aluno;


int main(int argc, const char * argv[]){
	
	Aluno aluno1;
	
	strcpy(aluno1.nome, "Maria");
	strcpy(aluno1.curso, "BCC");
	aluno1.idade = 19;
	
	printf("Nome: %s\n", aluno1.nome);
	printf("Curso: %s\n", aluno1.curso);
	printf("Idade: %d\n", aluno1.idade);
	
	return 0;
}
