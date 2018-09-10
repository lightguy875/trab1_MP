#include <stdio.h>
#include <stdlib.h>
#include "../include/pilha.h"

Pilha * create_stack(Pilha *p,int max_tam)
{
	p = (Pilha *)malloc(sizeof(Pilha));
	p->valor = (Dado*) malloc(max_tam * sizeof(Dado));
	p->max_tam = max_tam;
	p->size = 0;
	return p;
}

int push(Pilha * p, int elem)
{
	if(p->size < p->max_tam )
	{
		p->valor[p->size].x = elem;
		p->size++;
		return(p->valor[p->size-1].x);
	}
	else 
	{
		printf("A pilha esta no seu tamanho máximo \n");
		return(p->valor[p->size].x);
	}

}

int pop(Pilha * p)
{

	if (p->size == 0)
		return -1;	
	p->size--;
	return 0;
}

int empty(Pilha *p)
{
	return (p->size == 0);
}

void print(Pilha *p)
{

	for(int i=0;i<p->size;++i)
	{ 
		printf("\t\t%d\n", p->valor[i].x); 
	} 
}
void free_stack(Pilha * p)
{

	for(int i=0;i<=p->size; i++)
	{

		p->valor[i].x = 0;
	}
}
int tamanho(Pilha *p)
{
	return p->size;
}
int isFULL(Pilha *p)
{
	return (p->size == p->max_tam);
}
