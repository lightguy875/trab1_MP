ID$@IR =../include
IDIR = ../include
CC= g++ -std=c++11
CFLAGS=-I$(IDIR) -ftest-coverage -fprofile-arcs  -fpermissive -lgtest #-lgtest_main  

ODIR=../Source/obj
LDIR =../Source
DIR_TESTS=

TEST_EXE = ../Test
LIBS=

PROGRAM = pilha

_HEADERS = pilha.h
HEADERS = $(patsubst %,$(IDIR)/%,$(_HEADERS))

_OBJECTS = teste_pilha.o  pilha.o 
OBJECTS = $(patsubst %,$(ODIR)/%,$(_OBJECTS))

_TESTS = teste_pilha.c 
TESTS = $(patsubst %,$(DIR_TESTS)/%,$(_TESTS))



$(ODIR)/%.o: %.c $(HEADERS) 
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBS)

$(PROGRAM): $(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

$(TEST_EXE) : $(TESTS)
	$(CC) -o $@ --coverage $^ $(CFLAGS)

all:
	./$(PROGRAM) test gcov project

run: 
	./$(PROGRAM) 


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
