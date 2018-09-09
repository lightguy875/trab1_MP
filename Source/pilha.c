#include <stdio.h>
#include <stdlib.h>
#include "../include/pilha.h"

Pilha *create_stack(Pilha * p,int max_tam)
{
	p = (Pilha *)malloc(sizeof(Pilha));
	p->inicio = NULL;
	p->max = max_tam;
	return p;
}

int push(Pilha *p, int elem)
{
	if(p->size < p->max )
	{
		Elemento *novo_elemento;
		if ((novo_elemento = (Elemento *)malloc(sizeof(Elemento))) == NULL)
			return -1;
		novo_elemento->pedaco.x = elem;
		novo_elemento->next = p->inicio;
		p->inicio = novo_elemento;
		p->size++;
		return(p->inicio->pedaco.x);
	}
	else 
	{
		printf("A pilha esta no seu tamanho máximo \n");
		return(p->inicio->pedaco.x);
	}
	
}

int pop(Pilha * p)
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

int empty(Pilha *p)
{
	return (p->inicio == NULL);
}

void print(Pilha *p)
{
	Elemento *corrente;
	int i;
	corrente = p->inicio;
	for(i=0;i<p->size;++i)
	{ 
	printf("\t\t%d\n", corrente->pedaco.x); 
	corrente = corrente->next; 
	} 
}
void free_stack(Pilha *p)
{
	Elemento *temp = p->inicio;
	Elemento *temp2;
	while (p != NULL)
	{

		temp2 = temp->next;
		free(temp); /*desalocando os nos*/
		temp = temp2;
	}
	free(temp); /*desalocando a pilha*/
}
int tamanho(Pilha *p)
{
	return p->size;
}
int isFULL(Pilha *p)
{
	return (p->size == p->max);
}
