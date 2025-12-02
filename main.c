#include <stdio.h>
#include "cabecalho.h"

int main(int argc, char const *argv[])
{
    FILE *arq;
    if (argc>1) //Se houver um parametro inicial
    {
        arq = fopen(argv[1], "a+");
    } else { //Se for um arquivo de data
        arq = fopen("projetos_GIT\\data\\cadastro.csv", "a+");
    }

    if (arq == NULL) return 0; // Fechando e acusando erro
    

    // menu 
    int n;
    printf("______MENU_____");
    printf("Cadastrar (1)");
    printf("escolha: ");
    scanf("%d", &n);
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
