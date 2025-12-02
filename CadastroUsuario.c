#include "cabecalho.h"

void requerir(FILE *arq) {

    system("cls");

    
    //variaveis 
    char nome[100], username[10], senha[10];


    printf("______Cadastro______\nNome completo: ");
    fgets(nome, 100, stdin);
    
    do
    {
        printf("UserName: ");
        fgets(username, 10, stdin);
    } while (ConferirUser(arq, username));
    

    do
    {
        printf("Senha: ");
        fgets(senha, 10, stdin);
    } while (ConferirSenha(arq, senha));
    
    Cadastrar(arq, nome, username, senha);
}

void Cadastrar(FILE *arq, char nome[], char username[], char senha[]) {
    
    // escrevendo os dados

    fprintf(arq, "%s,%s,%s,%s", nome, username, CodSenha(senha));

}

bool ConferirUser(FILE *arq, char user[]) {
}