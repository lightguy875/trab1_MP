#include <stdio.h>
#include <stdlib.h>
#include "../include/pilha.h"

Pilha * create_stack(Pilha *p, int max_tam)
{
	if (!exists(p))
	{
        p = (Pilha *) malloc(sizeof(Pilha));
		p->valor = (Dado *) malloc(max_tam * sizeof(Dado));
		p->max_tam = max_tam;
		p->size = 0;
		return p;
	}

	else
	{
		return p;
		
		
		
	}
}

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

int pop(Pilha *p,Dado * elemento)
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

int empty(Pilha *p)
{

	if (exists(p))
	{
		return (p->size == 0);
	}

	else
	{
		printf("A pilha não existe \n");
		return -1;
	}

} 

void print(Pilha *p)
{
	if (exists(p))
	{

		for (int i = 0; i < p->size; ++i)
		{
			printf("\t\t%d\n", p->valor[i]);
		}
	}

	else
	{
		
	}
}
Pilha * free_stack(Pilha *p)
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

		return (p->size == p->max_tam);
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
int top(Pilha *p, Dado *elemento)
{
	if (exists(p))
{

	if (p->size == 0)
		return -1;
	*elemento = p->valor[p->size-1];
	return 0;
}

else
{
	
	return -1;
}
}
