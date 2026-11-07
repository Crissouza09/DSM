#include <stdio.h>
#include <stdlib.h>


// Definição simples do nó
typedef struct No {
    int valor;
    struct No* esquerda;
    struct No* direita;
} No;

// Função auxiliar apenas para alocar o nó e retornar o nó (n)
// alocado
No* criar(int v) {
    No* n = (No*) malloc(sizeof(No));
    n->valor = v;
    n->esquerda = NULL;
    n->direita = NULL;
    return n;
}
int main() {
    /*
        Criando uma árvore simples manualmente:
                 10  (Raiz)
                / \ 
               5   15
    */  
    No* raiz = criar(10); //raiz
    raiz->esquerda = criar(5); //Filho esquerdo
    raiz->direita = criar(15); //Filho direito
    //Perceba que não deixa na ordem,pode inverter o 15
    // na esquerda e o 5 na direita para inverter
    
    //Lendo os valores diretamente
    printf("Raiz: %d\n", raiz->valor);
    printf("Filho Esquerdo: %d\n", raiz->esquerda->valor);
    printf("Filho DIreito: %d\n", raiz->direita->valor);
    
    //Liberando a memória alocada
    free(raiz->esquerda);
    free(raiz->direita);
    free(raiz);
    
    return 0;
    
}//Fim
