#ifndef H_USUARIO
#define H_USUARIO

#include <stdio.h>
#include <stdbool.h>

// definir o numero maximo de usuarios
#define MAx 50

typedef struct
{
  char Data[9];
  char Horario[9];
  User usuario;     
} Acesso;

typedef struct
{
    char Nome[100], UserName[10], senha[10];
    long int Cod;
    int id;    
} User;

extern User lista_de_usuarios[MAx];

// funcoes 
void requerir();
void Cadastrar(FILE *arq, char nome[], char username[], char senha[]);
bool ConferirUser(FILE *arq, char user[]);
#endif