#ifndef LISTADETAREA_H
#define LISTADETAREA_H
#include"Tarea.h"

class ListaDeTarea
{
    public:
        ListaDeTarea();
        void mostrar();
        void agregarTarea(Tarea obj);
        void mostrarTareaPorID(int id);
        void  cambiarEstadoPorID(int id );
        void mostrarTareasYEtiquetasPorId(int id );

    private:
        Tarea _tareas[10];
        int _cantidad ;

        void ordenar();
};

#endif // LISTADETAREA_H
