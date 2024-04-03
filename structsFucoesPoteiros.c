#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _aluno{
	char nome[100];
	int idade;
} Aluno;

Aluno*createAluno(char *nome, int idade){
	Aluno *a = calloc(1, sizeof(Aluno));
	strcpy(a->nome, nome);
	a->idade = idade;
	
	return a;
}

void printAluno(Aluno *aluno){
	printf("Nome: %s\n", aluno->nome);
	printf("Idade: %d\n", aluno->idade);
	
}

int main(){
	Aluno *aluno = createAluno("Victor", 48);
	printAluno(aluno);
	
	return 0;
}
