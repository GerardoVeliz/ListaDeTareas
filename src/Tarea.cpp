#include "Tarea.h"
#include <iostream>
using namespace std;

Tarea::Tarea()
{
    _idTarea=0;
    _descripcion="vacio";
    _dificultad="vacio";
    _estado=false ;
    _cantidadEtiquetas=0 ;


}
        Tarea::Tarea(int id, std::string descripcion,std::string dificultad,bool estado , Fecha fecha){
        _idTarea=id ;
        _descripcion=descripcion;
        _dificultad=dificultad;
        _estado=estado;
        _fechaLimite=fecha;
        _cantidadEtiquetas=0 ;
        }

        void Tarea::cargar(){
            int vueltas=0;
        cout <<"INGRESE ID: ";
        cin >>_idTarea;


        cout <<"INGRESE DESCRIPCION DE LA TAREA: ";
        cin.ignore();
        getline(cin,_descripcion);
        cout <<"INGRESE DIFICULTAD DE LA TAREA : ";

        getline(cin,_dificultad);
        cout <<"INGRESE FECHA LIMITE : ";
        _fechaLimite.cargarFecha();
        cout <<"CANTIDAD DE ETIQUETAS QUE TENDRA LA TAREA: ";
        cin >> vueltas;
        for (int x=0;x<vueltas;x++){
            _etiqueta.cargar();
            cargarEtiquetas(_etiqueta);
        }
        _estado=false ;
        }
        void Tarea::setId(int id ){
        _idTarea=id;
        }

        void Tarea::setDescripcion(std::string descripcion){
        _descripcion=descripcion;
        }

        void Tarea::setDificultad(std::string dificultad){
        _dificultad=dificultad;
        }

        void Tarea::setEstado (bool estado ){
        _estado=estado;
        }

        void Tarea::setFechaLimite(Fecha fechaLimite){
        _fechaLimite=fechaLimite;
        }

        int Tarea::getId(){
        return _idTarea;
        }

        std::string Tarea::getDescripcion(){
        return _descripcion;
        }

        std::string Tarea::getDificultad(){
        return _dificultad;
        }

        bool Tarea::getEstado(){
        return _estado;
        }

        Fecha Tarea::getFecha(){
        return _fechaLimite;
        }

        void Tarea::cargarEtiquetas(Etiqueta obj){
            if (_cantidadEtiquetas < 10){
                for (int x=0;x<_cantidadEtiquetas;x++){
                        _etiquetas[x]=obj;
                        _cantidadEtiquetas++;

                }
            }else{
            cout <<"NO SE PUEDEN CARGAR MAS ETIQUETAS."<< endl;
            }
        }
