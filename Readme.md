# Pilha escrita em c com framework de teste gtest
## Aviso

Só existe o teste das funções principais não existe um programa com interface que dê para interagir e executar as funções,o objetivo é só testá-las

## Observação
Tanto a pilha de vetores como a pilha encadeada utilizam os mesmos comandos

## Como compilar o software

Para compilar o software e necessário estar na pasta Source e usar o seguinte comando:

´´´
$ make

´´´

## Como rodar os testes e analisar a cobertura

Ainda na pasta de Source e necessário executar o seguinte código

´´´
$ make run
´´´
Para ver a cobertura de testes

´´´
$ make gcov
´´´

## Como limpar o programa depois da execução
Para limpar a compilação é necessário rodar o seguinte comando:

´´´
$ make clean
´´´

Para limpar o arquivo de cobertura de testes:

´´´
$ make clean_coverage
´´´
