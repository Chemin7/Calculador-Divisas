#ifndef EURO_H_INCLUDED
#define EURO_H_INCLUDED

class Euro:public Moneda {
    public:
        Euro();
    };

Euro::Euro() {
    nombre = "euro";
    }

#endif // EURO_H_INCLUDED
