#include <iostream>
#include "PilaS.h"
#include <stdlib.h>
/*
RUIZ RUVALCABA, ScERGIO -217292617
ACT PILAS EDD2
*/

using namespace std;

int main()
{
    PilaS objQD;
    PilaS objQS;
    int op, opM;

    do{
        cout<< "1. Pila Estatica"<<endl<<"2. Pila Dinamica"<<endl<<"3. Salir"<<endl<<"Ingrese Opcion: ";
        cin>>opM;
        if(opM==1){
            do
            {
                 system("cls");

                cout<< "1. Insertar Numero"<<endl<<"2. Imprimir"<<endl<<"3. Eliminar"<<endl<<"4. Regresar al Menu Principal"<<endl<<"Ingrese Opcion: ";
                cin>>op;
                if(op==1){
                    objQS.insertar();

                }
                else if(op==2){
                    objQS.imprimir();
                }
                else if(op==3){
                    objQS.eliminar();

                }
                system("pause");
                system("cls");


            }while(op!=4);
        }


        if(opM==2){
            do
            {
                 system("cls");

                cout<< "1. Insertar Numero"<<endl<<"2. Imprimir"<<endl<<"3. Eliminar"<<endl<<"4. Regresar al Menu Principal"<<endl<<"Ingrese Opcion: ";
                cin>>op;
                if(op==1){
                    objQD.insertar();

                }
                else if(op==2){
                    objQD.imprimir();
                }
                else if(op==3){
                    objQD.eliminar();

                }
                system("pause");
                system("cls");


            }while(op!=4);
        }
    }while(opM!=3);


    return 0;
}
