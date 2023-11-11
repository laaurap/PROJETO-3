#include <stdio.h>
#include "proj1.c"

struct lista lt[100];
 
int main() {
     
    int  auxBool = 0, opcao, tam;
    int index_atualiza;
      
       tam = tamanho(lt); // A VARIÁVEL 'tam' ARMAZENA O TAMANHO (NÚMERO DE TAREFAS) ATUAL DA LISTA.
        while (1) {
        printf("\n--- MENU PRINCIPAL ---\n1. CRIAR TAREFA \n2. LISTAR TAREFAS\n3. DELETAR TAREFA \n4. ATUALIZAR TAREFA ");

    printf("LAURA DE SOUZA PARENTE - RA:22.123.033-7\n--- LISTA DE TAREFAS ---\n");

scanf("%d", &opcao);

    switch (opcao) {
            case(1):
                if(tam == 100){ // VERIFICA SE A LISTA ESTÁ "CHEIA" (100 TAREFAS) E EXIBE UMA MENSAGEM DE ERRO CASO ESTIVER.
                    printf("LIMITE DE TAREFAS ATINGIDO. DELETE UMA TAREFA PARA CRIAR MAIS.\n");
                }
                printf("\n--- CRIAR TAREFA ---\n");
                criaTarefa(&lt[tam]);
                tam++; // AUMENTA O TAMANHO DA LISTA DE TAREFAS EM 1, POIS FOI REGISTRADA UMA NOVA TAREFA.
                break;
            case(2):
                printf("\n--- LISTAR TAREFAS ---\n"); // LISTA AS TAREFAS QUE TEM
                listaTarefas(tam, lt);
                break;
}