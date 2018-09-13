#include <iostream>
#include "../include/pilha.h"
#include <gtest/gtest.h>
//#include <catch2/catch.hpp>
using namespace std;

TEST(Pilha_exists_tests, test_existences)
{
        Pilha *p = NULL;
        EXPECT_EQ(0, exists(p));
        p = create_stack(p, 30);
        EXPECT_NE(NULL, p);
        EXPECT_EQ(1, exists(p));
        p = free_stack(p);
        EXPECT_EQ(0, exists(p));
}

TEST(create_stack_test, Criar_pilha)
{
        Pilha *p = NULL;

        EXPECT_NE(NULL, create_stack(p, 30));
        p = create_stack(p, 30);
        EXPECT_EQ(p, create_stack(p, 30));
}

TEST(push_pilha_test, Adicionar_elemento_na_pilha)
{
        Pilha *p = NULL;
        Dado elem;
        elem.x = 30;
        EXPECT_EQ(-1, push(p, elem));
        p = create_stack(p, 1);
        EXPECT_EQ(0, push(p, elem));
        EXPECT_EQ(-1, push(p, elem));
        free_stack(p);
}
TEST(pop_pilha_test, retirar_elemento_na_pilha)
{
        Dado elem;
        elem.x = 30;
        Pilha *p = NULL;
        EXPECT_EQ(-1, pop(p, &elem));
        p = create_stack(p, 1);
        EXPECT_EQ(-1, pop(p, &elem));
        push(p, elem);
        EXPECT_EQ(0, pop(p, &elem));
        EXPECT_EQ(-1, pop(p, &elem));
        free_stack(p);
}

TEST(empty_pilha_test, checar_pilha_vazia)
{
        Pilha *p = NULL;
        EXPECT_EQ(-1, empty(p));
        p = create_stack(p, 30);
        EXPECT_EQ(1, empty(p));
        free_stack(p);
}

TEST(isFULL_test, checar_pilha_esta_cheia)
{
        Pilha *p = NULL;
        Dado elem;
        elem.x = 30;
        p = create_stack(p, 30);
        push(p, elem);
        EXPECT_EQ(0, isFULL(p));
        free_stack(p);
}

TEST(Pilha_exists_test, checar_se_a_pilha_existe)
{
        Pilha *p = NULL;
        EXPECT_EQ(0, exists(p));
        p = create_stack(p, 2);
        EXPECT_EQ(1, exists(p));
}

TEST(Pilha_top_access, checar_primeiro_elemento_da_pilha)
{

        Dado elem;
        elem.x = 30;
        Pilha *p = NULL;
        EXPECT_EQ(-1, top(p, &elem));
        p = create_stack(p, 30);
        push(p, elem);
        EXPECT_EQ(0, top(p, &elem));
        EXPECT_EQ(30, elem.x);
        free_stack(p);
}

TEST(pilha_set_size_test, testar_alteracao_tamanho)
{

        Pilha *p = NULL;
        EXPECT_EQ(NULL, set_size(p, 30));
        p = create_stack(p, 20);
        p = set_size(p, 10);
        EXPECT_EQ(10, p->max_tam);
}

TEST(print_pilha_test,testar_print_da_pilha)
{
        Pilha *p = NULL;
        Dado l;
        l.x = 30;
        EXPECT_EQ(-1,print_pilha(p));
        p = create_stack(p,10);
        push(p,l);
        EXPECT_EQ(0,print_pilha(p));
}
TEST(free_stack_test,testar_free_stack_function)
{
        Pilha *p = NULL;
        EXPECT_EQ(NULL,free_stack(p));
        p = create_stack(p,20);
        EXPECT_EQ(NULL,free_stack(p));
}

TEST(tamanho_test,testar_tamanho_da_pilha)
{
        Pilha *p = NULL;
        Dado k;
        k.x = 20;
        EXPECT_EQ(-1,tamanho(p));
        p = create_stack(p,20);
        EXPECT_EQ(0,tamanho(p));
        push(p,k);
        EXPECT_EQ(1,tamanho(p));

}

int main(int argc, char **argv)
{
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
