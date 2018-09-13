#include <stdlib.h>
#include <stdio.h>

typedef struct ItemType
{
	int x;

} Dado;

typedef struct ElementoLista
{
	Dado pedaco;
	struct ElementoLista *next;

} Elemento;

typedef struct pilha
{
	Elemento *inicio;
	int size;
	int max;

} Pilha;

Pilha *create_stack(Pilha *, int max_tam);

int push(Pilha *p, Dado elem);

int pop(Pilha *p);

int empty(Pilha *p);

int print_pilha(Pilha *p);

Pilha *free_stack(Pilha *p);

int tamanho(Pilha *p);

int isFULL(Pilha *p);

int exists(Pilha *p);

int top(Pilha *p, Dado *elem);

Pilha *set_size(Pilha *p, int tam);
