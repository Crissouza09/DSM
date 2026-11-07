#include <stdio.h> 
int main()
{
    //float matrizMenu[10][4];
    int op = 1, linha = 0, qtditens = 0;
    
    printf("\n Quantos itens diferentes voce deseja? :");
    scanf("%d", &qtditens);
    float matrizMenu[qtditens][4];

    while(op > 0)
    {
        if(linha <= qtditens)
        {
            printf("\n----------------------\n");
            printf("\n----MENU LANCHE NETO----");
            printf("\n ----- ITEM -------- VLR ---");
            printf("\n -- 1: Coca cola -- R$ 6,50- \n");
            printf("\n -- 2: X Salada --  R$ 27,50-\n");
            printf("\n -- 3: Paçoquita -- R$ 2,00- \n");
            printf("\n -- 4: Pao queijo --R$ 5,00- \n");
            printf("\n escolha o item pelo numero ou 0 para sair: ");
            scanf("%d", &op);
        }
        
        switch(op)
        {
            case 1:
                matrizMenu[linha][0] = 1;
                matrizMenu[linha][1] = 6.50;
                printf ("\n Quantas coca colas você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++;
            break;
            case 2:
                matrizMenu[linha][0] = 2;
                matrizMenu[linha][1] = 27.50;
                printf ("\n Quantos x saladas você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++;
            break;
            case 3:
                matrizMenu[linha][0] = 3;
                matrizMenu[linha][1] = 2.00;
                printf ("\n Quantas paçoquitas você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++;
            break;
            case 4:
                matrizMenu[linha][0] = 4;
                matrizMenu[linha][1] = 5.00;
                printf ("\n Quantas pao de queijo você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++;
            break;
            default:
                printf("\n Escolha uma opção valida! ");
            break;
        }
        
    }
    for(linha = 0; linha < qtditens; linha++)
    {
        printf("\n|%f  |R$ %f  | %f  |R$ %f  |", matrizMenu[linha][0], matrizMenu[linha][1], matrizMenu[linha][2], matrizMenu[linha][3] );
    }
    return 0;
}//fim do main
