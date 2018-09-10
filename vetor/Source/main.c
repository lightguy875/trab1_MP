#include "../include/pilha.h"

int main(int argc ,char ** argv)
{
	char escolha;
	Pilha *p = NULL;
	while(1)
	{
		do
		{
		printf("0 - Criar a pilha \n");
		printf("1 - Inserir elemento na pilha \n");
		printf("2 - Tirar elemento da pilha \n");
		printf("3 - Consultar primeiro elemento da pilha \n");
		printf("4 - Destruir a pilha \n");
		scanf("%c",&escolha);
		}while(escolha != 0 || escolha != 1 || escolha != 2 || escolha != 3 || escolha != 4);
		
		switch(escolha)
		{
			case '0':
				 if (!exists(p))
				{
					p = create_stack(p, 30);
					break;
				}
				else
				{
					printf("A pilha já foi criada \n");
				}
				break;
			case '1':
				if(exists(p))
				{
					int x;
					printf("Digite o valor a ser escrito na pilha \n");
					scanf("%d",&x);
				}
				break;
			case '2':
				if(exists(p))
				{
					int k;
					k = pop(p);
				}
				else
				{
					printf("A pilha ainda não foi criada \n");
				}
				break;
			case '3':
				if(exists(p))
				{
					int x;
					x = top(p->valor[p->size].x);
				}
				else
				{
					printf("A pilha ainda não foi criada \n");
				}
				
				break;
			case '4':
				if(exsits(p))
				{
					free_stack(p);
				}
				else
				{
					printf("A pilha ja foi apagada \n");
				}
				


				
				
				
		}
		return 0;
		
				
				
				
		


	}		
