#include <string.h>

struct complejo{
    double real, imaginario;
};

typedef struct complejo Complejo;
//typedef struct complejo *ComplejoAP;

Complejo *creacionComplejo(int real, int imaginario);
Complejo *suma(Complejo *, Complejo *);
Complejo *resta(Complejo *, Complejo *);
Complejo *multiplicacion(Complejo *, Complejo *);
Complejo *divide(Complejo *, Complejo *);

void imprimirC(Complejo *c);
//void imprimir(double *c);


//#define YYSTYPE ComplejoAP

