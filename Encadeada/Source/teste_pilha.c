#include <iostream>
#include "../include/pilha.h"
#include <gtest/gtest.h>

using namespace std;
TEST(existence_condition,testar_existencia_da_pilha)
{
	Pilha *p = NULL;
	EXPECT_EQ(0,exists(p));
	p = create_stack(p,30);
	EXPECT_EQ(1,exists(p));
	p = free_stack(p);
	EXPECT_EQ(0,exists(p));
}
TEST( create_stack_test, Criar_pilha)
{
	Pilha * p = NULL;
	EXPECT_NE(NULL, create_stack(p,30));

	
}
TEST(free_pilha_test , teste_desalocamento_da_pilha)
{
	Pilha *p = NULL;
	EXPECT_EQ(NULL , free_stack(p));
	p = create_stack(p,10);
	EXPECT_EQ(NULL, free_stack(p));

}

 TEST( push_pilha_test, Adicionar_elemento_na_pilha)
{
	Pilha * p= NULL;
	EXPECT_EQ(-1 , push(p,30));
	p = create_stack(p,3);
	EXPECT_EQ( 0 , push(p,30) );
	push(p,1);
	push(p,4);
	EXPECT_EQ(-1,push(p,39));

} 
TEST( pop_pilha_test, retirar_elemento_na_pilha)
{
	int k;
	Pilha *p = NULL;
	EXPECT_EQ(-1,pop(p));
	p = create_stack(p, 30);
	push( p , 30 );
	EXPECT_EQ( 0 , pop(p));
	EXPECT_EQ(-1 , pop(p));
}

TEST(empty_pilha_test,checar_pilha_vazia)
{
	Pilha *p = NULL;
	p = create_stack(p,30);
	EXPECT_EQ(true,empty(p));	
}

TEST(isFULL_test,checar_pilha_esta_cheia)
{
	Pilha *p = NULL;
	EXPECT_EQ(-1, isFULL(p));
	p = create_stack(p, 30);
	EXPECT_EQ(0,isFULL(p));
}

TEST(set_size_test,checar_se_tamanho_foi_modificado)
{
	int k = 10;
	Pilha *p = NULL;
	p = create_stack(p,2);
	p = set_size(p,20);
	EXPECT_EQ(20,p->max);
}




int main(int argc, char **argv)
{
	
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
