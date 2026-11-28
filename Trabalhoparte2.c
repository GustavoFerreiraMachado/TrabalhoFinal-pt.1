#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


    int opcao = 1;
    char porcoes[8] = {'Batata Frita','Polenta Frita','Calabresa','Quibe Frito','Frango assado','Mandioca','Contra Filé','Torresmo','Costela'};
    float porcoespreco[8] = {10.90,12.90,14.90,9.90,15.90,8.90,16.90,19.90,16.90};
    char bebidas[7] = {'Refrigerante 200ml','Refrigerante 500ml','Refrigerante 1L','Refrigerante 2L','Cerveja Lata','Água','Copo de suco','Café'};
    float bebidaspreco[7] = {2.90,4.00,7.50,13.90,5.00,3.50,4.50,4.90};
        while (opcao >= 0 && opcao <= 4)
    {

        printf("\n=====Sistema de Restaurante=====");
        printf("\n[1] Cardapio");               //Menu de opções
        printf("\n[2] Fazer Pedido");
        printf("\n[3] Lista de Pedido");
        printf("\n[4] Remover Pedido");
        printf("\n[0] Sair\n");
        scanf("%d",&opcao);

        if (opcao == 0)         //Termina o processo ao selecionar 0
        {
            printf("Operacao encerrada, volte sempre!");
            return 0;
        }
        if (opcao = 1)
        {
            printf("\n==========Cardapio==========");



        }










        if (opcao < 0 || opcao > 4)         //Se o valor for inválido, informa e pede reinserção
        {
            printf("Opcao invalida");
            opcao = 0;
        }
    }
    return 0;
}

