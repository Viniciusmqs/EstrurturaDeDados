#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct {
	int items[MAX_SIZE];
	int inicio, fim;
}Fila;

void inicializar(Fila *fila) {
	fila->inicio = -1;
	fila->fim = -1;
}

int estaVazia(Fila *fila) {
	return (fila->inicio == -1 && fila->fim == -1) || (fila->inicio > fila->fim);
}

int estaCheia(Fila* fila) {
	return (fila->fim +1) %MAX_SIZE == fila->inicio;
}

void inserir(Fila *fila, int data) {
	if (estaCheia(fila)) {
		printf("A fila está cheia.\n");
	}else {
		if (fila->inicio == -1) {
			fila->inicio = 0;
		}
		fila->items[++fila->fim] = data;
	}
}

int remover(Fila *fila) {
	if(estaVazia(fila)) {
		printf("A fila está vazia. \n");
		return -1;
	}else{
		return fila->items[fila->inicio++];	
	}
}

int main() {
	Fila fila;
	inicializar(&fila);
	
	inserir(&fila, 1);
	inserir(&fila, 2);
	inserir(&fila, 3);
	
	printf("Elemento removido: %d\n", remover(&fila));
	printf("Elemento removido: %d\n", remover(&fila));
	
	return 0;
}
