/**
 * @brief Arquivo de funções
 * 
 * @file pilha.c
 * @author Luís Eduardo
 * @date 2018-09-13
 */

#include <stdio.h>
#include <stdlib.h>
#include "../include/pilha.h"
/**
 * @brief 
 * 
 * @param p 
 * @param max_tam 
 * @return Pilha* 
 */
Pilha *create_stack(Pilha *p, int max_tam)
{
	if (!exists(p))
	{
		p = (Pilha *)malloc(sizeof(Pilha));
		p->valor = (Dado *)malloc(max_tam * sizeof(Dado));
		p->max_tam = max_tam;
		p->size = 0;
		return p;
	}

	else
	{
		return p;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @param elem 
 * @return int 
 */

int push(Pilha *p, Dado elem)
{
	if (exists(p))
	{
		if (p->size < p->max_tam)
		{
			p->valor[p->size] = elem;
			p->size++;
			return 0;
		}
		else
		{

			return -1;
		}
	}

	else
	{

		return -1;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @param elemento 
 * @return int 
 */
int pop(Pilha *p, Dado *elemento)
{

	if (exists(p))
	{

		if (p->size == 0)
			return -1;
		p->size--;
		*elemento = p->valor[p->size];
		return 0;
	}

	else
	{

		return -1;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @return int 
 */
int empty(Pilha *p)
{

	if (exists(p))
	{
		return (p->size == 0);
	}

	else
	{
		return -1;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @return int 
 */
int print_pilha(Pilha *p)
{
	if (exists(p))
	{

		for (int i = 0; i < p->size; ++i)
		{
			printf("\t\t%d\n", p->valor[i]);
		}
		return 0;
	}

	else
	{
		return -1;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @return Pilha* 
 */
Pilha *free_stack(Pilha *p)
{
	if (exists(p))
	{
		free(p->valor);
		p->valor = NULL;
		free(p);
		p = NULL;
		return p;
	}

	else
	{

		return p;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @return int 
 */
int tamanho(Pilha *p)
{
	if (exists(p))
	{
		return p->size;
	}

	else
	{

		return -1;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @return int 
 */
int isFULL(Pilha *p)
{
	if (exists(p))
	{

		return (p->size == p->max_tam);
	}

	else
	{

		return -1;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @return int 
 */
int exists(Pilha *p)
{
	if (p == NULL)
	{
		return 0;
	}

	else
	{
		return 1;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @param elemento 
 * @return int 
 */
int top(Pilha *p, Dado *elemento)
{
	if (exists(p))
	{

		if (p->size == 0)
			return -1;
		*elemento = p->valor[p->size - 1];
		return 0;
	}

	else
	{

		return -1;
	}
}
/**
 * @brief 
 * 
 * @param p 
 * @param tam 
 * @return Pilha* 
 */
Pilha *set_size(Pilha *p, int tam)
{
	if (exists(p) && tam > p->size)
	{

		p->max_tam = tam;
		return p;
	}

	else
	{
		return p;
	}
}
