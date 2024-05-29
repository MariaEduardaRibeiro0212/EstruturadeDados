
#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
	char valor;
	struct elemento *proximo;
	
} Elemento;

typedef struct pilha {
	Elemento *topo;
	int tamanho;	
	
} Pilha;

Pilha* iniciar(void) {
	Pilha *p = malloc(sizeof(Pilha));
	p->topo = NULL;
	p->tamanho = 0;
	return p;
}

void push(Pilha *p, char caractere) {
	Elemento *e = malloc(sizeof(Elemento));
	e->valor = caractere;
	e->proximo = p->topo;
	p->topo = e;
	p->tamanho = p->tamanho + 1;
}

int empty(Pilha *p) {
	return p->tamanho == 0; /*I*/
}

char top(Pilha *p) {
	if(empty(p)) {
	printf("Pilha vazia!\n\n");
	return '\0';
	
}
	return p->topo->valor;
}

int size(Pilha *p) {
	return p->tamanho;
	
}

char pop(Pilha *p) {
	Elemento *e;
	char c;
	if (!empty(p)) {
		e = p->topo;
		c = e->valor;
		p->topo = p->topo->proximo;
		p->tamanho = p->tamanho - 1;
		free(e);
		e = NULL;
		return c;
} else {
		printf("Pilha vazia.\n\n");
		return '\0';
}
}

int main(int argc, const char * argv[]) {
	Pilha *p = iniciar();
	
	push(p, '&');
	push(p, '%');
	push(p, '$');
	
	char de = pop(p);
	
	printf("Elemento fora: %c\n", de);
	
	char tope = top(p);
	
	printf("Topo da pilha: %c\n", tope);
	
	return 0;
}
