#ifndef TAREA_H
#define TAREA_H
#include "Fecha.h"
#include "Etiqueta.h"

class Tarea
{
    public:
        Tarea(int id, std::string descripcion,std::string dificultad,bool estado , Fecha fecha);
        Tarea();
        void cargar();
        void setId(int id );
        void setDescripcion(std::string descripcion);
        void setDificultad(std::string dificultad);
        void setEstado (bool estado );
        void setFechaLimite(Fecha fechaLimite);
        int getId();
        std::string getDescripcion();
        std::string getDificultad();
        bool getEstado();
        Fecha getFecha();
        void cargarEtiquetas(Etiqueta obj);

    private:
        int _idTarea;
        std::string _descripcion;
        std::string _dificultad;
        Fecha _fechaLimite;
        bool _estado;
        int _cantidadEtiquetas;
        Etiqueta _etiquetas[10];
        Etiqueta _etiqueta;

};

#endif // TAREA_H
