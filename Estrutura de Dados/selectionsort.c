#include <stdio.h>

int main() {
    int vet[] = {64, 25, 12, 22, 11};
    int n = 5; //tamanho do vetor

    printf("\nArray original: ");
    for (int i = 0; i < n; i++){ //mostrar o vetor na ordem
        printf("%d", vet[i]);
        
    }
    for (int i = 0; i < n - 1; i++) { //selection usa o indice para marcar o menor valor e ir
        int min_idx = i;             // comparar com i.
        for(int j = i + 1; j < n; j++) {
            if(vet[j] < vet[min_idx]) { // min_idx compara com os outros valores de j
                min_idx = j;
            }
        }
        if (min_idx != i) { // !- não 
            int temp = vet[i]; //temp guarda o valor de vet(guarda o valor do min_idx) i
            vet[i] = vet[min_idx];
            vet[min_idx] = temp;
        }
    }
printf("\nArray ordenado: ");
for (int i = 0; i < n; i++) {
    printf("\n%d", vet[i]);
}
    return 0;
}
