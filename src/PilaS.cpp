#include "PilaS.h"

PilaS::PilaS()
{
    //ctor
    cont=0;
}

PilaS::~PilaS()
{
    //dtor
}



void PilaS::insertar()
{
    int n;
    if (cont==10){
        cout<<"La cola esta llena"<<endl;
        return;

    }
    cout<<"Insertar numero: ";
    cin>>n;
    arr[cont]=n;
    cont++;
}

void PilaS::eliminar()
{

    if (cont==0)
        return;

    cont--;

}


void PilaS::imprimir(){
    for(int i=cont-1; i>=0;i--){
        cout<<"Numero: "<<arr[i]<<endl;
    }

}

