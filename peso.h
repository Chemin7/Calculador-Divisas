#ifndef PESO_H_INCLUDED
#define PESO_H_INCLUDED
#include "moneda.h"
class Peso:public Moneda{
public:
    Peso();

};
Peso::Peso() {
    nombre="peso";
    simbolo = 36;
}




#endif // PESO_H_INCLUDED
