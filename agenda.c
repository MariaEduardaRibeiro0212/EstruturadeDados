#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#define QUANTIDADE_MAX_CONTATOS 100


typedef struct {
 char nome[100];
 char telefone[20];
 char email[80];

}Contato;

//Criar contato:
bool add_contato(Contato *contato, int *qtd_contato){
      printf("Digite o nome: \n");
      scanf("%s", &contato[*qtd_contato].nome);
      printf("Telefone: \n");
      scanf("%s", &contato[*qtd_contato].telefone);
      printf("E-mail: \n");
      scanf("%s", &contato[*qtd_contato].email);
      
      (*qtd_contato)++;

            return true;
  }


//Listar contatos:
void list_contatos(Contato *contato, int *qtd_contato){
      int i;
      puts("\n----AGENDA ELETRÔNICA----");
      
      for(i = 0; i < *qtd_contato; i++){
            printf("Nome: %s\t", contato[i].nome);
            printf("Telefone: %s\t", contato[i].telefone);
            printf("Email: %s\n", contato[i].email);
            puts("----------------------------------------------------------------------------------------------------");
      }
}
//Deletar:
bool removerContato(Contato *contato, int *qtd_contato, char nome[100]) {
      int index = -1, i;
      for (i = 0; i < *qtd_contato; i++) {
            if ((strcmp(nome,contato[i].nome)) == 0){
            index = i;
            break;
 }
 }

      if (index == -1) {
      printf("Contato de %s, não encontrado.\n", nome);
      return 0;
 }

      for (i = index; i < *qtd_contato- 1; i++) {
      contato[i] = contato[i + 1];
 }

 (*qtd_contato)--;

 printf("Contato removido com sucesso.\n");

      return true;
 }

//Pesquisar contato pelo nome:

void pesquisar(Contato *contato, int *qtd_contato){
	int i, encontrou;
	char pesq [100];
	 printf("\nPESQUISAR PELO NOME:");
     scanf("%s", &pesq);
                         for(i=0; i < *qtd_contato; i++) {
                         	
                         if((strcmp(pesq,contato[i].nome)) == 0){
                         	
                         printf("\n NOME:%s",contato[i].nome);
                         printf("\n EMAIL:%s",contato[i].email);
                         printf("\n TELEFONE:%s",contato[i].telefone);
                         puts("");
                         encontrou = 1;
                         }
                        } if (encontrou == 0) {
                               printf("\n NENHUM REGISTRO ENCONTRADO!\n\n");
                              }
                        printf("\n");
}

int main(void){
setlocale(LC_ALL, "Portuguese");

 Contato *contato = (Contato*)malloc(QUANTIDADE_MAX_CONTATOS *sizeof(Contato));
 
      if (contato == NULL) {
      printf("Erro ao alocar memória.\n");
      
      return 1;
 }

      int qtd_contato = 0;
      char resposta;

      do {
      add_contato(contato, &qtd_contato);

      printf("\nDeseja adicionar outro contato? (s/n): \n");
      scanf(" %c", &resposta);

 } while (resposta == 's' && qtd_contato < QUANTIDADE_MAX_CONTATOS);

      list_contatos(contato, &qtd_contato);
	   puts("");
	   
	  pesquisar(contato, &qtd_contato);
	  
      char nome[100];
       printf("Digite o nome do contato que deseja remover: \n");
      scanf("%s", &nome);
      
      puts("");
      removerContato(contato, &qtd_contato, nome);
	  puts("");
      list_contatos(contato, &qtd_contato);

      free(contato);

      return 0;
	
      }
