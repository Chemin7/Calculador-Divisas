#include <iostream>
#include "validate.h"
#include "moneda.h"
#include "peso.h"
#include "dolar.h"
#include "euro.h"
#include "yen.h"
#include "yuan.h"

using namespace std;

int main() {
    Peso peso;
    Dolar dolar;
    Euro euro;
    Yen yen;
    Yuan yuan;

    int opc;
    float dinero;
    string str_opc,str_dinero;


    cout<<"--------MENU-----\n"
        "1) Peso-Dólar \n"
        "2) Dólar-Peso \n"
        "3) Peso-Euro\n"
        "4) Euro-Peso\n"
        "5) Peso-Yen\n"
        "6) Yen-Peso\n"
        "7) Peso-Yuan\n"
        "8) Yuan-Peso\n"
        "9) Salir"<<endl;

    do{
    cout<<"seleccione una opcion: ";
    cin>>str_opc;
    }while(!( isReal(str_opc) ));

    opc = stoi(str_opc);

    do{
    cout<<"Ingrese el monto a convertir: "<<endl;
    cin>>str_dinero;
    }while( !(isReal(str_dinero)) );

    dinero = stof(str_dinero);

    switch(opc) {
        case 1:
            dolar.convertirMoneda(dinero,"peso");
            cout<<dolar.toString();
            break;

        case 2:
            peso.convertirMoneda(dinero,"dolar");
            cout<<peso.toString();
            break;

        case 3:
            euro.convertirMoneda(dinero,"peso");
            cout<<euro.toString();
            break;

        case 4:
            peso.convertirMoneda(dinero,"euro");
            cout<<peso.toString();
            break;

        case 5:
            yen.convertirMoneda(dinero,"peso");
            cout<<yen.toString();
            break;

        case 6:
            peso.convertirMoneda(dinero,"yen");
            cout<<peso.toString();
            break;

        case 7:
            yuan.convertirMoneda(dinero,"peso");
            cout<<yuan.toString();
            break;

        case 8:
            peso.convertirMoneda(dinero,"yuan");
            cout<<peso .toString();
            break;
        }

    return 0;
    }
