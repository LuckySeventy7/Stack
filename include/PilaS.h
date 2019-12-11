#ifndef PILAS_H
#define PILAS_H
#include <iostream>


using namespace std;
class PilaS
{
    public:
        PilaS();
        virtual ~PilaS();
        int arr[10];
        void insertar();
        void eliminar();
        void imprimir();

    protected:

    private:
        int cont;
};

#endif // PILAS_H
