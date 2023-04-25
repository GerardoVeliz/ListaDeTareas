#ifndef ETIQUETA_H
#define ETIQUETA_H


class Etiqueta
{
    public:
        Etiqueta();
        Etiqueta(std::string nombre);
        void setNombre(std::string nombre);
        std::string getNombre();
        void cargar();

    private:
        std::string _nombre;

};

#endif // ETIQUETA_H
