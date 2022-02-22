#ifndef MONEDA_H_INCLUDED
#define MONEDA_H_INCLUDED
#include <string>
#include <iostream>
class Moneda {

    protected:
        float valor;
        std::string nombre;


    public:
        Moneda();

        float getValor();
        std::string getNombre();

        float setValor(float);
        void convertirMoneda(double,std::string);

        std::string toString();

    };

using namespace std;

Moneda::Moneda() {

    }

float Moneda::getValor() {
    return valor;
    }

string Moneda::getNombre() {
    return nombre;
    }

float Moneda::setValor(float v) {
    valor = v;
    }

void Moneda::convertirMoneda(double dinero, string n) {

    if(this->nombre == "peso") {
        if(n == "dolar")
            valor = dinero * 20.32;
        else if(n == "euro")
            valor = dinero * 23.05;
        else if(n== "yen")
            valor = dinero * 0.18;
        else if(n== "yuan")
            valor = dinero * 3.21;

        }
    else if(this->nombre == "dolar") {
        if(n== "peso")
            valor=dinero * 0.049;
        }
    else if(this->nombre == "euro") {
        if(n=="peso")
            valor= dinero * 0.043;
        }
    else if(this->nombre == "yen") {
        if(n== "peso")
            valor = dinero * 5.67;
        }
    else if(this->nombre == "yuan") {
        if(n=="peso")
            valor = dinero * 0.31;
        }
    }


string Moneda::toString() {

    char result[30];
    cout<<"nombre: "<<this->nombre<<endl;
    sprintf(result,"Resultado en %s : %.2f",nombre,valor);

    return result;
    }


#endif // MONEDA_H_INCLUDED
