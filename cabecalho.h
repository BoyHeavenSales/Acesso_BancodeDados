#ifndef H_USUARIO
#define H_USUARIO

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// definir o numero maximo de usuarios
#define MAx 50



typedef struct
{
    char Nome[100], UserName[10], senha[10];
    long int Cod;
    int id;    
} User;

typedef struct
{
  char Data[9];
  char Horario[9];
  User usuario;     
} Acesso;

extern User lista_de_usuarios[MAx];

// funcoes 
void requerir();
void Cadastrar(FILE *arq, char nome[], char username[], char senha[]);
bool ConferirUser(FILE *arq, char user[]);
bool ConferirSenha(FILE *arq, char user[]);
char* CodSenha(char senha[]);
#endif