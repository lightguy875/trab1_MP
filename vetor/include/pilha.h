/**
 * @brief Arquivo de definição
 * 
 * @file pilha.h
 * @author Luís Eduardo
 * @date 2018-09-13
 */

#include <stdlib.h>
#include <stdio.h>
/**
 * @brief Tipo de elemento inserido na pilha
 * 
 */
typedef struct ItemType
{
	int x;

} Dado;
/**
 * @brief Estrutura básica da pilha  
 */
typedef struct pilha
{
	Dado *valor;
	int max_tam;
	int size;

} Pilha;
/**
 * @brief Criar estrutura básica da pilha com tamanho máximo definido
 * 
 * @param p 
 * @param max_tam 
 * @return Pilha* 
 */
Pilha *create_stack(Pilha *p, int max_tam);

/**
 * @brief Pega primeiro elemento da pilha
 * 
 * @param p 
 * @param element 
 * @return int 
 */
int top(Pilha *p, Dado element);
/**
 * @brief Adiciona elemento para a pilha
 * 
 * @param p 
 * @param elem 
 * @return int 
 */
int push(Pilha *p, Dado elem);
/**
 * @brief Retira ultimo elemento da pilha
 * 
 * @param p 
 * @param elemento 
 * @return int 
 */
int pop(Pilha *p, Dado *elemento);
/**
 * @brief Verifica se a pilha esta vazia
 * 
 * @param p 
 * @return int 
 */
int empty(Pilha *p);
/**
 * @brief printa todos os elementos da pilha
 * 
 * @param p 
 * @return int 
 */
int print_pilha(Pilha *p);
/**
 * @brief limpa a pilha
 * 
 * @param p 
 * @return Pilha* 
 */
Pilha *free_stack(Pilha *p);
/**
 * @brief verifica tamalho da pilha
 * 
 * @param p 
 * @return int 
 */
int tamanho(Pilha *p);
/**
 * @brief verifica se a pilha atinge o tamanho maximo
 * 
 * @param p 
 * @return int 
 */
int isFULL(Pilha *p);
/**
 * @brief verifica se a pilha existe
 * 
 * @param p 
 * @return int 
 */
int exists(Pilha *p);
/**
 * @brief Acessa ultimo elemento da pilha
 * 
 * @param p 
 * @param elemento 
 * @return int 
 */
int top(Pilha *p, Dado *elemento);
/**
 * @brief Redefine o tamanho maximo da pilha
 * 
 * @param p 
 * @param tamanho 
 * @return Pilha* 
 */
Pilha *set_size(Pilha *p, int tamanho);