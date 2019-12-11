#ifndef PILAD_H
#define PILAD_H
#include <iostream>
using namespace std;

class Nodo
{
public:
    int num;
    Nodo *next;

};
class PilaD
{
    public:
        Nodo *rear;
        PilaD();
       // virtual ~PilaD();

        void insertar();
        void eliminar();
        void imprimir();

    protected:

    private:
};

#endif // PILAD_H
