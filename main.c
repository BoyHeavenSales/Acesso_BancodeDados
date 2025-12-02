#include <stdio.h>
#include "cabecalho.h"

int main(int argc, char const *argv[])
{
    FILE *arq;
    if (argc>1) //Se houver um parametro inicial
    {
        printf("Abrindo arquivo: %s\n", argv[1]);
        arq = fopen(argv[1], "a+");
    } else { //Se for um arquivo de data
        arq = fopen("data\\cadastro.csv", "a+");
    }

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 0; // Fechando e acusando erro
    }

    // menu 
    char buffer[50];
    int n;
    printf("______MENU_____\n\n");
    printf("Cadastrar (1)");
    printf("escolha: ");
    fgets(buffer, sizeof(buffer), stdin);
    n = atoi(buffer);

    switch (n)
    {
    case 1:
        requerir(arq);
        break;
    
    default:
        break;
    }
    fclose(arq);
    
    return 0;
}
