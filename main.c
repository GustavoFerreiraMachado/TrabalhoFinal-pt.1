#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 1;
    while (opcao >= 0 && opcao <= 4)
    {

        printf("\n=====Sistema de Restaurante=====");
        printf("\n[1] Cardápio");
        printf("\n[2] Fazer Pedido");
        printf("\n[3] Lista de Pedido");
        printf("\n[4] Remover Pedido");
        printf("\n[0] Sair\n");
        scanf("%d",&opcao);
        if (opcao < 0 || opcao > 4) {
                printf("Opção inválda");
        }
    }
    return 0;
}
