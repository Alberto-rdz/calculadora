#include <stdio.h>
#include <stdlib.h>
#include "complejo.h"

Complejo *creacionComplejo(int real, int imaginario){
    Complejo *nvo = (Complejo*) malloc(sizeof(Complejo));
    nvo -> real = real;
    nvo -> imaginario = imaginario;
    return nvo;
}
Complejo *suma(Complejo *c1, Complejo *c2){
    return creacionComplejo(c1 -> real + c2 -> real, c1 -> imaginario + c2 -> imaginario);
}

/Complejo *resta(Complejo *, Complejo *){
	return creacionComplejo(c1 -> real - c2 -> real, c1 -> imaginario - c2 -> imaginario);
}

Complejo *multiplicar(Complejo *, Complejo *){
	return creacionComplejo(c1 -> real * c2 -> real, c1 -> imaginario * c2 -> imaginario);
}

Complejo *dividir(Complejo *, Complejo *){
	return creacionComplejo(c1 -> real / c2 -> real, c1 -> imaginario / c2 -> imaginario);
}

void imprime(double c){
    printf("Resultado: %f\n", c);
}

void imprimirC(Complejo *c){
    if(c->imaginario != 0){
        printf("%f%+fi\n", c->real, c->imaginario);
    }else{
        printf("%f\n", c->real);
    }
}
