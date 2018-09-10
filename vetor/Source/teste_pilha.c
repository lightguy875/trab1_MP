#include <iostream>
#include "../include/pilha.h"
#include <gtest/gtest.h>

using namespace std;

TEST(create_stack_test, Criar_pilha)
{
        Pilha *p = NULL;
        EXPECT_NE(NULL,create_stack(p,30));

} 

TEST( push_pilha_test, Adicionar_elemento_na_pilha)
{
        Pilha  *p = NULL;
        p = create_stack(p,30);
        EXPECT_EQ(30,push(p,30));
}
TEST ( pop_pilha_test, retirar_elemento_na_pilha)
{
        int k;
        Pilha *p = NULL;
        p = create_stack(p,30);
        k = push(p,30);
        EXPECT_EQ(0,pop(p));
}

TEST (empty_pilha_test,checar_pilha_vazia)
{
        Pilha *p = NULL;
        p = create_stack(p,30);
        EXPECT_EQ(true,empty(p));       
}

TEST (isFULL_test,checar_pilha_esta_cheia)
{
        int k;
        Pilha *p = NULL;
        p = create_stack(p,30);
        k = push(p,30);
        EXPECT_EQ(0,isFULL(p));
}

TEST (Pilha_exists_test,checar_se_a_pilha_existe)
{
	Pilha *p = NULL;
	EXPECT_EQ(0,exists(p));
}

TEST(Pilha_top_access,checar_primeiro_elemento_da_pilha)
{

	int k;
	Pilha *p = NULL;
	p = create_stack(p, 30);
	k = push(p, 30);
	EXPECT_EQ(30, top(p));
}

int main(int argc, char **argv)
{
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
