#ifndef YUAN_H_INCLUDED
#define YUAN_H_INCLUDED

class Yuan : public Moneda {
    public:
        Yuan();
    };

Yuan::Yuan() {
    nombre = "yuan";
    simbolo = 190;
    }

#endif // YUAN_H_INCLUDED
