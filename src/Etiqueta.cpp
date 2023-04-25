#include <iostream>
//#include <cstring>
using namespace std;
#include "Etiqueta.h"

    Etiqueta::Etiqueta()
    {
        _nombre="vacio";
    //ctor
    }
    Etiqueta::Etiqueta(std::string nombre){
    _nombre=nombre;
    }
    void Etiqueta::setNombre(std::string nombre){
        _nombre=nombre ;
    }
        std::string Etiqueta::getNombre(){
        return _nombre;
        }
        void Etiqueta::cargar(){
        cout <<"INGRESE NOMBRE DE LA ETIQUETA: " ;
        cin.ignore();
        getline(cin,_nombre);
        }
