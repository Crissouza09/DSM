#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[5][20] = {
        "Bulbasaur",
        "Charmander",
        "Squirtle",
        "Pikachu",
        "Snorlax"
    };
    
        char tipos[5][20] = {
            "Grama / Venenoso",
            "Fogo",
            "Agua",
            "Eletrico",
            "Normal"
            
    };
    int escolha;
    
    printf("= POKEDEX SIMPLES (1 a 5) = \n");
    printf("Escolha o numero do pokemon que deseja consultar:\n");
    printf("1. Bulbasaur\n");
    printf("2. Charmander\n");
    printf("3. Squirtle\n");
    printf("4. Pikachu\n");
    printf("5. Snorlax\n");
    printf("Digite sua opcao: ");
    scanf("%d", &escolha);
    
    if (escolha >= 1 && escolha <= 5){
        int indice = escolha - 1;
        
        printf("\n--- Informacoes do Pokemon ---\n");
        printf("Nome: %s\n", nomes[indice]); // para otimizar o código, trazer o indice
        printf("Tipo: %s\n", tipos[indice]);// direto no print ficando: printf("Nome: %s\n", nomes[escolha - 1])
                                            // e printf("Tipo: %s\n", tipos[escolha - 1])                                
    } else{
        printf("\nOpcao invalida! Escolha um numero entre 1 e 5.\n");
    }
    
    return 0;
    
}