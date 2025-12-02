#include "cabecalho.h"

void requerir(FILE *arq) {

    system("cls");

    
    //variaveis 
    char nome[100], username[20], senha[20];


    printf("______Cadastro______\nNome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    do
    {
        printf("UserName: ");
        fgets(username, sizeof(username), stdin);
        username[strcspn(username, "\n")] = '\0';
    } while (ConferirUser(arq, username));
    

    do
    {
        printf("Senha: ");
        fgets(senha, sizeof(senha), stdin);
        senha[strcspn(senha, "\n")] = '\0';
    } while (ConferirSenha(arq, senha));
    
    Cadastrar(arq, nome, username, senha);
}

void Cadastrar(FILE *arq, char nome[], char username[], char senha[]) {
    
    // escrevendo os dados
    fprintf(arq, "%s, %s, %s\n", nome, username, senha);

}

bool ConferirUser(FILE *arq, char user[]) {
    return false;
}

bool ConferirSenha(FILE *arq, char user[]) {
    return false;
}
char* CodSenha(char senha[]) {
    return senha;
}
