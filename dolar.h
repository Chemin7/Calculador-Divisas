#ifndef DOLAR_H_INCLUDED
#define DOLAR_H_INCLUDED
#include "moneda.h"

class Dolar: public Moneda {
    public:
        Dolar();
    };

Dolar::Dolar() {
    nombre="dolar";
    }


#endif // DOLAR_H_INCLUDED
