#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "Time.h"

typedef struct Projeto /*Serve para definir um nome para a estrutura (Boas praticas)*/
{
    char nome[20];
    int codigo;
    float salario;
}Pessoa /*Nome definido para a estrutura*/;

Pessoa pessoa;

int main  ()
{

printf("Digite o seu codigo: ");
scanf("%d", &pessoa.codigo);
printf("Digite seu nome...: ");
fgets(pessoa.nome, sizeof(pessoa.nome), stdin); /*Serve como um scanf de string (char)*/
fflush(stdin); /*Serve para limpar a sujeira do buffer de 'saida' (stdin)*/
printf("Digite seu salario: ");
scanf("%f", &pessoa.salario);

printf("Nome...: %s", pessoa.nome);
printf("Salario: %.2f", pessoa.salario);
printf("Codigo: %d", pessoa.codigo);

    return 0;
}