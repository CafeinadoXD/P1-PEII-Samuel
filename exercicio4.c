#include <stdio.h>
#include <stdlib.h>

// RESPOSTAS CORRETAS -> B, C, D, F, G.
// RESPOSTAS INCORRETAS -> A, E.

int main() {

    struct EstruturaExterna {
        float f;
        struct EstruturaInterna {
            float ff;
            int x[2];
        } interna;
    } VV;

    // ff = 5.5;  -> INCORRETO.
    VV.f = 5.5; // -> CORRETO.
    VV.interna.ff = VV.f; // -> CORRETO.
    VV.interna.x[0]  = 5; // -> CORRETO.
    // x[1] = VV.interna.x[0]; -> INCORRETO.
    VV.interna.x[0] = VV.interna.x[1]; // -> CORRETO.
    VV.interna.x[0] = VV.interna.x[0]; // -> CORRETO.

    return 0;
}