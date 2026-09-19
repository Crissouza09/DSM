#include <stdio.h>

int main(){
    float peso, altura, imc;
    int categoria = 0;
    float limites[2] = {18.5, 25.0};
    
    char treinos[3][3][100] = {
    {
        "Foco: Ganho de massa muscular",
        "Musculação: 3 a 4x por semana",
        "Aerobico: Moderado (pos-treino)"
    },
    {
        "Foco: Condicionamento Geral e definição",
        "Musculação: 4 a 5x por semana",
        "Aerobico: Moderado (pos-treino)"
    },
    {
        "Foco: Emagrecimento e resistencia",
        "Musculação: 4x por semana (circuito)",
        "Aerobico: Alto (esteira ou bike)"
    }
    
};

printf("Digite seu peso (kg): ");
scanf("%f", &peso);
printf("Digite sua altura (m): ");
scanf("%f", &altura);

imc = peso / (altura * altura);
printf("\n Seu IMC é: %.1f \n", imc);

if(imc < limites[0]){
    categoria = 0;
    printf("categoria: Abaixo do peso \n\n");
} else if (imc >= limites[0] && imc < limites[1]){
    categoria = 1;
    printf("categoria: Peso ideal - normal \n\n");
} else {
    categoria = 2;
    printf("categoria: Sobrepeso - obesidade");
}
printf("Recomendacao de treino: \n");

for  (int i = 0; i <3; i++){
    printf("-%s\n", treinos[categoria][i]);
}

return 0;
}
