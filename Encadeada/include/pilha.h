/**
 * @brief Arquivo de definição de funções
 * 
 * @file pilha.h
 * @author your name
 * @date 2018-09-13
 */
#include <stdlib.h>
#include <stdio.h>
/**
 * @brief Estrutura do tipo de dado utilizado no programa
 * no caso Dado como ItemType
 * 
 */
typedef struct ItemType
{
	int x;

} Dado;
/**
 * @brief Estrutura de um elemento da pilha
 * 
 */
typedef struct ElementoLista
{
	Dado pedaco;
	struct ElementoLista *next;

} Elemento;

/**
 * @brief Estrutura da cabeça de uma pilha
 * 
 */
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
