#include <stdlib.h>
#include <stdio.h>

typedef struct ItemType
{
	int  x;
}Dado;

typedef struct pilha
{
	Dado  * valor;
	int max_tam;
	int size;
}Pilha;


Pilha * create_stack(Pilha *p, int max_tam);
int top(Pilha *p);
int push(Pilha *p, int elem);
int pop(Pilha *p);
int empty(Pilha *p);
void print(Pilha *p);
void free_stack(Pilha *p);
int tamanho(Pilha *p);
int isFULL(Pilha *p);
