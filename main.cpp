#include <iostream>
#include <Fecha.h>
#include "Tarea.h"
#include "ListaDeTarea.h"

using namespace std;
/*
Se solicita hacer una clase llamada ListaDeTareas que permita registrar hasta 10 tareas. También será necesario registrar cada una
de las tareas individuales a partir de una clase llamada Tarea.

Luego, realizar un programa que permita cargar cada una de las tareas. Y se muestren ordenadas por fecha límite de manera ascendente.
El programa también debe admitir poder ingresar el código de tarea y visualizarla o bien ingresar un código de tarea y marcarla como Hecha.

El programa debe contar con un listado que muestre por cada tarea la cantidad de días disponibles para su vencimiento (Fecha límite).

*/

int main()
{
    int opcion ;
    Tarea aux;
    int id ;
    ListaDeTarea lista;
  do {
        cout << "MENU " << endl ;
        cout<<"1 - CARGAR TAREA: "<< endl;
        cout<<"2 - MOSTRAR TAREAS: "<< endl;
        cout<<"3 - MARCAR TAREA HECHA POR ID : "<< endl;
        cout<<"4 - MOSTRAR TAREA POR ID: "<< endl;
        cout <<"5  - HARDCODEAR" << endl;
        cout <<"6 - MOSTRAR TAREA POR ID: "<< endl;
        cout <<"7 - MOSTRAR TAREA POR ID: "<< endl;
        cout<<"0 - SALIR "<< endl;
        cout<<endl<<"OPCION: "<< endl;
        cin>> opcion;
        switch(opcion){
        case 1:
            aux.cargar();
            lista.agregarTarea(aux);
            system("pause");
            system("cls");
            break;
        case 2 :
            lista.mostrar();
            system("pause");
            system("cls");
            break;
        case 3:
             cout <<"INGRESE EL ID DE LA TAREA: "<< endl;
            cin>>id;
            lista.cambiarEstadoPorID(id);
            system("pause");
            system("cls");
            break;
        case 4:

            cout <<"INGRESE EL ID DE LA TAREA: "<< endl;
            cin>>id;
            lista.mostrarTareaPorID(id);
            system("pause");
            system("cls");
            break;
            case 5 :
            lista.agregarTarea(Tarea(1,"LIMPIAR LA CASA","MEDIA",false,Fecha(10,4,2023)));
            lista.agregarTarea(Tarea(2,"LIMPIAR ATRAS","MEDIA",false,Fecha(10,5,2023)));
            lista.agregarTarea(Tarea(3,"LIMPIAR BAÑO","MEDIA",true,Fecha(5,2,2023)));
            lista.agregarTarea(Tarea(4,"LIMPIAR COCINA","MEDIA",false,Fecha(8,1,2023)));
            lista.agregarTarea(Tarea(5,"LIMPIAR PIEZA","MEDIA",true,Fecha(10,12,2023)));
            lista.agregarTarea(Tarea(6,"LIMPIAR BAÑO ARRIBA","MEDIA",false,Fecha(11,11,2023)));
            system("pause");
            system("cls");
            break;
            case 6:
                break;
            case 7 :
                break;
        default:

            if (opcion==0){
                cout<<"HASTA LUEGO!! "<< endl;
            }else{
                cout<< "OPCION INVALIDA. "<< endl;
            }


            }

}while(opcion!=0);
return 0;
}
