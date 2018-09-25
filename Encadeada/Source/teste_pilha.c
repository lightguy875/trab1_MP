/**
 * @brief Arquivo de testes das funções
 * 
 * @file teste_pilha.c
 * @author Luís Eduardo
 * @date 2018-09-13
 */

#include <iostream>
#include "../include/pilha.h"
#include <gtest/gtest.h>

using namespace std;
/**
 * @brief Constroi um  novo objeto de Teste
 * Testa condição de existência da pilha
 */
TEST(existence_condition, testar_existencia_da_pilha)
{
	Pilha *p = NULL;
	EXPECT_EQ(0, exists(p));
	p = create_stack(p, 30);
	EXPECT_EQ(1, exists(p));
	p = free_stack(p);
	EXPECT_EQ(0, exists(p));
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Testa condição de existência de todas as funções
 */
TEST(existence_condition_all_functions, testar_existencia_todas_funcoes)
{
	Pilha *p = NULL;
	Dado k;
	k.x = 20;
	EXPECT_EQ(0, exists(p));
	EXPECT_EQ(NULL, free_stack(p));
	EXPECT_EQ(-1, push(p, k));
	EXPECT_EQ(-1, top(p, &k));
	EXPECT_EQ(NULL, set_size(p, 10));
	EXPECT_EQ(-1, isFULL(p));
	EXPECT_EQ(-1, top(p, &k));
	EXPECT_EQ(-1, empty(p));
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Testa a criação da pilha
 */
TEST(create_stack_test, Criar_pilha)
{
	Pilha *p = NULL;
	EXPECT_NE(NULL, create_stack(p, 30));
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Testa função free_stack
 */
TEST(free_pilha_test, teste_desalocamento_da_pilha)
{
	Pilha *p = NULL;
	EXPECT_EQ(NULL, free_stack(p));
	p = create_stack(p, 10);
	EXPECT_EQ(NULL, free_stack(p));
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Testa função push
 */
TEST(push_pilha_test, Adicionar_elemento_na_pilha)
{
	Pilha *p = NULL;
	Dado k;
	k.x = 30;
	EXPECT_EQ(-1, push(p, k));
	p = create_stack(p, 3);
	EXPECT_EQ(0, push(p, k));
	k.x = 1;
	push(p, k);
	k.x = 4;
	push(p, k);
	EXPECT_EQ(-1, push(p, k));
}
/**
 * @brief Constroi um  novo objeto de Teste
 *  Testa função pop
 */
TEST(pop_pilha_test, retirar_elemento_na_pilha)
{
	Dado k;
	k.x = 30;
	Pilha *p = NULL;
	EXPECT_EQ(-1, pop(p));
	p = create_stack(p, 30);
	push(p, k);
	EXPECT_EQ(0, pop(p));
	EXPECT_EQ(-1, pop(p));
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Testa função empty
 */
TEST(empty_pilha_test, checar_pilha_vazia)
{
	Pilha *p = NULL;
	Dado k;
	k.x = 20;
	p = create_stack(p, 30);
	EXPECT_EQ(true, empty(p));
	push(p, k);
	EXPECT_EQ(false, empty(p));
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Testa função is FULL
 */
TEST(isFULL_test, checar_pilha_esta_cheia)
{
	Pilha *p = NULL;
	EXPECT_EQ(-1, isFULL(p));
	p = create_stack(p, 30);
	EXPECT_EQ(0, isFULL(p));
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Testa função set_size
 */
TEST(set_size_test, checar_se_tamanho_foi_modificado)
{
	int k = 10;
	Pilha *p = NULL;
	p = create_stack(p, 2);
	p = set_size(p, k);
	EXPECT_EQ(k, p->max);
}
/**
 * @brief Constroi um  novo objeto de Teste
 *  Testa função top
 */
TEST(top_function_test, testar_top)
{
	Dado k;
	Dado y;
	k.x = 30;
	y.x = 20;
	Pilha *p = NULL;
	EXPECT_EQ(-1, top(p, &k));
	EXPECT_EQ(30, k.x);
	p = create_stack(p, 2);
	push(p, y);
	EXPECT_EQ(0, top(p, &k));
	EXPECT_EQ(20, k.x);
}
/**
 * @brief Constroi um  novo objeto de Teste
 *  Testa função tamanho
 */
TEST(tamanho_function_test, testar_tamanho)
{

	Pilha *p = NULL;
	EXPECT_EQ(-1, tamanho(p));
	p = create_stack(p, 20);
	EXPECT_EQ(0, tamanho(p));
}
/**
 * @brief Constroi um  novo objeto de Teste
 *  Testa função print
 */
TEST(print_function_test, testar_print)
{
	Dado l;
	l.x = 30;
	Pilha *p = NULL;
	EXPECT_EQ(-1, print_pilha(p));
	p = create_stack(p, 20);
	push(p, l);
	EXPECT_EQ(0, print_pilha(p));
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Teste de mudança de tamanho da pilha
 */

TEST(MAX_PILHA_SIZE_TEST, testar_tamanho_maximo_da_pilha)
{
	Dado l, m;
	l.x = 30;
	m.x = 20;
	Pilha *p = NULL;
	p = create_stack(p, 2);
	push(p, l);
	push(p, l);
	p = set_size(p, 3);
	EXPECT_EQ(3, p->max);
	push(p, m);
	top(p, &l);
	EXPECT_EQ(20, l.x);
}
/**
 * @brief Constroi um  novo objeto de Teste
 * Teste de mudança de tamanho de pilha para menor
 */

TEST(MAX_PILHA_SIZE_TEST_SECOND, testar_tamanho_minimo_da_pilha)
{
	Dado l, m;
	l.x = 30;
	m.x = 20;
	Pilha *p = NULL;
	p = create_stack(p, 2);
	push(p,l);
	push(p,l);
	p = set_size(p,1);
	EXPECT_EQ(2,tamanho(p));
}

int main(int argc, char **argv)
{

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
