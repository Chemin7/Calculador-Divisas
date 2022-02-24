#ifndef EURO_H_INCLUDED
#define EURO_H_INCLUDED

class Euro:public Moneda {
    public:
        Euro();
    };

Euro::Euro() {
    nombre = "euro";
    simbolo ='E';
    }

#endif // EURO_H_INCLUDED
