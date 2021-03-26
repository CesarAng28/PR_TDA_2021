#makefile for statistics.exe

.PHONY = all clean PRINT

CC = gcc
LINKERS = -lm
FLAGS = -C0

#variables
#funciones
deps = $(wildcard *.c)
BINS = $(deps:%.c=%.o)

all: ${BINS} statistics.exe

${BINS}: ${deps}
	@echo "\nGenerating binary objects"
	${CC} -c $^

statistics.exe: ${BINS}
	@echo "\nGenerating executable"
	${CC} $^ -o $@ ${LINKERS}
	@echo "\n"

clean:
	@echo "\nRemoving all binary and executable files\n"
	@rm -rvf *.o
	@rm -rvf *.exe
	@echo "\n"
