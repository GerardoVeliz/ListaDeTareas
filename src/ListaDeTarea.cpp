#include "ListaDeTarea.h"
#include <iostream>
using namespace std ;

    ListaDeTarea::ListaDeTarea()
    {
        _cantidad=0 ;
    //ctor
    }

        void ListaDeTarea::ordenar(){
        Tarea aux ;
        int mayor=0 ;
        for (int x=0;x<_cantidad-1;x++){
            mayor=x ;
            for (int j =x+1;j<_cantidad;j++){
                if (_tareas[j].getFecha().toString("yyyy/mm/dd") < _tareas[mayor].getFecha().toString("yyyy/mm/dd")){
                    mayor=j ;
                }
                aux=_tareas[x];
                _tareas[x]=_tareas[mayor];
                _tareas[mayor]=aux;
            }
        }
        }


        void ListaDeTarea::mostrar(){
        cout<<"-----------------------------"<< endl;
        cout <<"LISTA DE TAREAS: "<<endl;
        cout<<"-----------------------------"<< endl;
        ordenar();
        for (int x=0 ;x<_cantidad;x++){
            cout << _tareas[x].getId()<< "\t"<<_tareas[x].getDescripcion()<< "\t"<<
            _tareas[x].getDificultad()<< "\t"<< _tareas[x].getFecha().toString("dd/mm/yyyy");
            if (_tareas[x].getEstado()==true){
                cout <<"\t"<<"HECHO"<< endl;
            }else{
                cout <<"\t"<<"NO REALIZADA"<< endl;
            }
        }
        cout<<"-----------------------------"<< endl;
        }

        void ListaDeTarea::agregarTarea(Tarea obj){
        if (_cantidad<10){
            _tareas[_cantidad]=obj;
            _cantidad++ ;
        }else {
            cout <<"NO SE PUEDE CARGAR MAS TAREAS";
        }
        }


        void ListaDeTarea::mostrarTareaPorID(int id){
            for (int x =0 ; x<_cantidad;x++){

        if(_tareas[x].getId()== id){
         cout << _tareas[x].getId()<< "\t"<<_tareas[x].getDescripcion()<< "\t"<<
            _tareas[x].getDificultad()<< "\t"<< _tareas[x].getFecha().toString("dd/mm/yyyy");
            if (_tareas[x].getEstado()==true){
                cout <<"\t"<<"HECHO"<< endl;
            }else{
                cout <<"\t"<<"NO REALIZADA"<< endl;
            }
        }
     }

  }


  void ListaDeTarea::cambiarEstadoPorID(int id ){
      int cont=0 ;
    for (int x =0 ; x<_cantidad;x++){

        if(_tareas[x].getId()== id){
            _tareas[x].setEstado(true);
            cout <<"CAMBIO HECHO CON EXITO." << endl;
        } else {
        cont++;
        }

  }         if (cont==_cantidad){
            cout<<"NO SE ENCONTRO EL ID. " << endl;

            }  }
