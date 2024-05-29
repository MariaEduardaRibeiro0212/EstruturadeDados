#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#define QUANTIDADE_MAX_PRODUTOS 100

typedef struct {
      char nome[50];
      int codigo;
      int quantidade;
      float preco;
 } Produto;
 
 void listarProdutos(Produto *produtos, int *num_produtos) {
      printf("\n=== Lista de Produtos ===\n");
      int i;
      
       for (i = 0; i < *num_produtos; i++) {
            printf("Produto %d:\n", i + 1);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Código: %d\n", produtos[i].codigo);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            printf("Preço: %.2f\n", produtos[i].preco);
            printf("\n");
 }
 
 }
 
 bool adicionarProduto(Produto *produtos, int *num_produtos) {

      printf("Digite o nome do produto: ");
      scanf("%s", produtos[*num_produtos].nome);
      printf("Digite o código do produto:");
      scanf("%d", &produtos[*num_produtos].codigo);
      printf("Digite a quantidade doproduto: ");
      scanf("%d", &produtos[*num_produtos].quantidade);
      printf("Digite o preço do produto:");
      scanf("%f", &produtos[*num_produtos].preco);

      (*num_produtos)++;

            return true;
 }
 
bool removerProduto(Produto *produtos, int *num_produtos, int codigo) {
      int index = -1, i;
      for (i = 0; i < *num_produtos; i++) {
            if (produtos[i].codigo == codigo){
            index = i;
            break;
 }
 }

      if (index == -1) {
      printf("Produto com o código %d não encontrado.\n", codigo);
      return 0;
 }

      for (i = index; i < *num_produtos- 1; i++) {
      produtos[i] = produtos[i + 1];
 }

 (*num_produtos)--;

 printf("Produto removido com sucesso.\n");

      return true;
 }
 
 bool atualizarQuantidade(Produto*produtos, int num_produtos, int codigo, int nova_quantidade) {
 	  int i;
      for (i = 0; i < num_produtos; i++) {
            if (produtos[i].codigo == codigo){
            produtos[i].quantidade = nova_quantidade;
            printf("Quantidade atualizada com sucesso.\n");
            
            return true;
 }
 }

      printf("Produto com o código %d não encontrado.\n", codigo);
      
      return false;
 }
 
bool atualizarPreco(Produto *produtos, int num_produtos, int codigo, float novo_preco) {
	 int i;
      for (i = 0; i < num_produtos; i++) {
            if (produtos[i].codigo == codigo){
            produtos[i].preco =novo_preco;
            printf("Preço atualizado com sucesso.\n");
            
            return true;
 }
 }

      printf("Produto com o código %d não encontrado.\n", codigo);
      
      return false;
 }
 
 int main(void) {
 	setlocale(LC_ALL, "Portuguese");

 Produto *produtos = (Produto*)malloc(QUANTIDADE_MAX_PRODUTOS *sizeof(Produto));
 
      if (produtos == NULL) {
      printf("Erro ao alocar memória.\n");
      
      return 1;
 }

      int num_produtos = 0;
      char resposta;

      do {
      adicionarProduto(produtos, &num_produtos);

      printf("Deseja adicionar outro produto? (s/n): ");
      scanf(" %c", &resposta);

 } while (resposta == 's' && num_produtos < QUANTIDADE_MAX_PRODUTOS);

      listarProdutos(produtos, &num_produtos);
      
// funções de atualização e remoção
 int novo_codigo = 0;

      printf("Digite o código do produtoque deseja atualizar a quantidade: ");
      scanf("%d", &novo_codigo);

      int nova_quantidade = 0;

      printf("Digite a nova quantidade: ");
      scanf("%d", &nova_quantidade);
      
      atualizarQuantidade(produtos, num_produtos, novo_codigo, nova_quantidade);

      int novo_codigo_preco = 0;
      printf("Digite o código do produto que deseja atualizar o preço: ");
      scanf("%d", &novo_codigo_preco);
      float novo_preco = 0.0f;
      printf("Digite o novo preço: ");
      scanf("%f", &novo_preco);
      
      atualizarPreco(produtos, num_produtos, novo_codigo_preco, novo_preco);

      int codigo = 0;
       printf("Digite o código do produto que deseja remover: ");
      scanf("%d", &codigo);
      
      removerProduto(produtos, &num_produtos, codigo);

      listarProdutos(produtos, &num_produtos);

      free(produtos);

      return 0;
}
