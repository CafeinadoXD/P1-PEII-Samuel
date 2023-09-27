#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Hello world!\n");

    return 0;
}

/* 5) Observe as seguintes sentenças acerca de vetores e matrizes:

(I)   Vetor é uma estrutura de dados composta de um conjunto de variáveis do mesmo
      tipo de dado primitivo, identificada por um nome, e possui somente uma dimensão.

(II)  Vetor é uma estrutura de dados composta de um conjunto de variáveis que pode ser
      de diferentes tipos de dados primitivos, identificada por um nome, e possui somente 
      uma dimensão.
    
(III) Matriz é uma variável composta, que pode ser visualizada como sendo formada por um
      conjunto de vetores, e somente pode armazenar dados de um único tipo, identificada 
      por um nome.

(IV)  Matriz é uma variável composta, que pode ser visualizada como sendo formada por um
      conjunto de vetores, e pode armazenar dados de diferentes tipos, identificada 
      por um nome.

(V)   O acesso aos dados armazenados em vetores ocorre sempre em ordem sequencial.

(VI)  O acesso aos dados armazenados em vetores ocorre sem qualquer ordem, por meio
      de índices.

Indique as sentenças CORRETAS:

    (a) I, III e V.
    (b) I, III e VI.
    (c) I, IV e VI.
    (d) II, III e V.
    (e) II, IV e VI. 


    RESPOSTA: B.

    I -> Vetores tem um tipo específico definido em sua declaração (ex. int aux[50]);
    III -> Matrizes tem um tipo específico definido em sua declaração (ex. int aux[50][50]);
    VI -> O acesso aos dados armazenados em vetores ocorre de acordo com a lógica de endereçamento
          dos elementos, que é sequencial em termos de memória, porém não em termos de acesso.

*/