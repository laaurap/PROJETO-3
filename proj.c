#include "proj1.h"
#include <stdio.h>
#include <string.h>


void criaTarefa(struct lista *lt) { // FUNÇÃO UTILIZADA PARA CRIAR UMA NOVA TAREFA QUE RECEBE UM PONTEIRO PARA O STRUCT.
    int prioridade, estado;

    do { // SOLICITAÇÃO E VALIDAÇÃO DAMPRIORIDADE DA TAREFA
        printf("DIGITE A PRIORIDADE DA TAREFA (1-10): ");
        scanf("%d", &prioridade);

        if (prioridade < 1 || prioridade > 10) {
            printf("\ERRO: DIGITE UM NUMERO ENTRE 1 E 10\n");
        }
    } while (prioridade < 1 || prioridade > 10);

    printf("ESTADO DA TAREFA (COMPLETO, EM ANDAMENTO, NÃO INICIADO) [0, 1, 2 resopectivamente]: ");
    scanf("%d", &estado);

 lt->prioridade = prioridade;
    lt->status = estado;
    // SOLICITAÇÃO DAS OUTRAS CARACTERÍSTICAS DA TAREFA
    printf("\nDIGITE A CATEGORIA DA TAREFA: ");
    scanf(" %299[^\n]", lt->categoria);
    printf("\nDIGITE A DESCRICAO DA TAREFA: ");
    scanf(" %99[^\n]", lt->descricao);
}

void listaTarefas(int tam, struct lista *lt){ // FUNÇÃO UTILIZADA PARA LISTAR AS TAREFAS
    for(int i = 0; i < tam; i++){
        printf("TAREFA %d\n", i+1);
        printf("PRIORIDADE: %d\n",lt[i].prioridade);
        printf("CATEGORIA: %s\n",lt[i].categoria );
        printf("DESCRICAO: %s\n",lt[i].descricao);
        printf("ESTADO: %s\n\n", status[lt[i].status]);
    }
    
}