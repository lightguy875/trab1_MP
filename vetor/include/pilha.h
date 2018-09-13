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

Pilha* create_stack(Pilha *p, int max_tam);

int top(Pilha *p,Dado element);

int push(Pilha *p,Dado elem);

int pop(Pilha *p,Dado * elemento);

int empty(Pilha *p);

void print(Pilha *p);

Pilha * free_stack(Pilha *p);

int tamanho(Pilha *p);

int isFULL(Pilha *p);

int exists(Pilha *p);
int top(Pilha *p, Dado *elemento);

pilha * set_size(Pilha* p ,int tamanho);