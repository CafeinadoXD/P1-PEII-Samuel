#include <stdio.h>
#include <stdlib.h>

#define LENGHT_ARRAY 5

void trocaValoresListas(int * lista1, int * lista2);

void inverterValoresLista(int * lista);

int main() {

    int * lista1 = malloc(LENGHT_ARRAY * sizeof(int));
    int * lista2 = malloc(LENGHT_ARRAY * sizeof(int));

    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        printf("L1[%d]: ", i);
        scanf("%d", lista1 + i);
    }

    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        printf("L2[%d]: ", i);
        scanf("%d", lista2 + i);
    }

    printf("\n\n         VALORES INICIAIS\n");
    printf("-------------------------------------\n");

    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        printf("Lista1[%d] = %d\n", i, *(lista1 + i));
    }

    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        printf("Lista2[%d] = %d\n", i, *(lista2 + i));
    }

    trocaValoresListas(lista1, lista2);
    inverterValoresLista(lista1);
    inverterValoresLista(lista2);

    printf("\n\n   VALORES TROCADOS E INVERTIDOS\n");
    printf("-------------------------------------\n");

    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        printf("Lista1[%d] = %d\n", i, *(lista1 + i));
    }

    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        printf("Lista2[%d] = %d\n", i, *(lista2 + i));
    }

    free(lista1);
    free(lista2);

    return 0;
}

void trocaValoresListas(int * lista1, int * lista2) {
    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        int aux;
        aux = *(lista1 + i);
        *(lista1 + i) = *(lista2 + i);
        *(lista2 + i) = aux;
    }
}

void inverterValoresLista(int * lista) {
    int vetorAux[LENGHT_ARRAY] = {0};
    int contInvertido = LENGHT_ARRAY;

    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        vetorAux[contInvertido - 1] = *(lista + i);
        contInvertido--;
    }
    for(int i = 0; i < LENGHT_ARRAY; i++) 
    {
        *(lista + i) = vetorAux[i];
    }
}