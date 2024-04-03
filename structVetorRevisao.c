#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Aluno{
	char nome[70];
	char matricula[30];
	char curso[100];
	char email[100];
	int idade;
	
};

typedef struct Aluno Aluno;


int main(int argc, const char * argv[]){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	Aluno aluno[2];
	
	strcpy(aluno[0].nome, "Maria");
	strcpy(aluno[0].email, "maria.gabriel@a.ucb.br");
	strcpy(aluno[0].matricula, "UC23103085");
	strcpy(aluno[0].curso, "BCC");
	aluno[0].idade = 19;
	
	strcpy(aluno[1].nome, "João");
	strcpy(aluno[1].email, "joao.silva@a.ucb.br");
	strcpy(aluno[1].matricula, "UC23555585");
	strcpy(aluno[1].curso, "Biologia");
	aluno[1].idade = 30;
	
	for( i = 0; i < 2; i++){
		printf("Nome do aluno %d: %s\n", i + 1, aluno[i].nome);
		printf("Curso do aluno %d: %s\n", i + 1, aluno[i].curso);
		printf("Matricula do aluno %d: %s\n", i + 1, aluno[i].matricula);
		printf("Email do aluno %d: %s\n", i + 1, aluno[i].email);
		printf("Idade do aluno %d: %d\n", i + 1, aluno[i].idade);
		puts("");
	}
	
	return 0;
}
