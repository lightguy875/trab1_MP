#include <stdio.h>
#include <stdlib.h>
#include "../include/pilha.h"

Pilha *create_stack(Pilha *p, int max_tam)
{
	p = (Pilha *)malloc(sizeof(Pilha));
	p->inicio = NULL;
	p->max = max_tam;
	p->size = 0;
	return p;
}

int push(Pilha *p, Dado elem)
{
	if (exists(p))
	{
		if (p->size < p->max)
		{
			Elemento *novo_elemento;
			if ((novo_elemento = (Elemento *)malloc(sizeof(Elemento))) == NULL)
				return -1;
			novo_elemento->pedaco = elem;
			novo_elemento->next = p->inicio;
			p->inicio = novo_elemento;
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
int top(Pilha *p, Dado *elem)
{
	if (exists(p))
	{
		Elemento *a;
		a = p->inicio;
		*elem = a->pedaco;
		return 0;
	}

	else
	{
		return -1;
	}
}

int pop(Pilha *p)
{
	if (exists(p))
	{
		Elemento *remov_elemento;
		if (p->size == 0)
			return -1;
		remov_elemento = p->inicio;
		p->inicio = p->inicio->next;
		free(remov_elemento);
		p->size--;
		return 0;
	}

	else
	{
		return -1;
	}
}

int empty(Pilha *p)
{
	if (exists(p))
	{
		return (p->inicio == NULL);
	}

	else
	{
		return -1;
	}
}

int print_pilha(Pilha *p)
{
	if (exists(p))
	{

		Elemento *corrente;
		int i;
		corrente = p->inicio;
		for (i = 0; i < p->size; ++i)
		{
			printf("\t\t%i\n", corrente->pedaco);
			corrente = corrente->next;
		}
		return 0;
	}

	else
	{
		return -1;
	}
}
Pilha *free_stack(Pilha *p)
{
	if (exists(p))
	{
		Elemento *temp = p->inicio;
		Elemento *temp2;
		while (temp != NULL)
		{

			temp2 = temp->next;
			free(temp); /*desalocando os nos*/
			temp = NULL;
			temp = temp2;
		}
		free(p); /*desalocando a pilha*/
		p = NULL;
		return p;
	}

	else
	{
		return p;
	}
}
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
int isFULL(Pilha *p)
{
	if (exists(p))
	{

		return (p->size == p->max);
	}

	else
	{
		return -1;
	}
}
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

Pilha *set_size(Pilha *p, int tam)
{
	if (exists(p))
	{
		p->max = tam;
		return p;
	}
	else
	{
		return p;
	}
}
