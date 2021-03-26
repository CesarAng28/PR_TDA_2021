#Makefile for Array (sirve ya para todos los programas)

# targets que no generan files
.PHONY = all CLEAN

#Variables:
CC = gcc
world := hola #variable estatica
CFLAGS = -C0 -s -lm
linkers = -lm -lpthread

#Functions
deps = $(wildcard *.c) #dependencias
depsh = $(wildcard *.h)
BINS = $(deps: %.c = %.o)


all: ${BINS} TDA_Statistics


BINS: $(deps)
	${CC} -c $^ ${CFLAGS}
	@echo "Generating binary objects"


TDA_Statistics: ${BINS}
	${CC} -o $@ $^ ${linkers}
	@echo "Generating excecutable"

PRINT:
	@echo $(deps) $(BINS)

CLEAN:
	rm -rvf *.o TEST_ARRAY
	@echo "Removing all binary objects and excecutables"
