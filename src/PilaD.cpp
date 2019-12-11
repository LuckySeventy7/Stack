#include "PilaD.h"


PilaD::PilaD(){
    rear=NULL;
}


void PilaD::insertar()//push
{
    int x;
    cout<<"Ingrese numero: ";
    cin>>x;
    Nodo *node = new Nodo();
    node->num = x;
//    node->next = rear;

    rear = node;
}

void PilaD::imprimir()
{
    Nodo *node;
    node = rear;///to display from top to bottom i need to add a prev

    while (node != NULL)
    {
        cout<<"Numero: "<<node->num<<endl;
        node = node->next;
    }

}

void PilaD::eliminar()//pop
{

    if (rear == NULL)
    {
        cout<<"Pila vacia"<<endl;
    }
    else
    {
        Nodo *node;
        node = rear;///
        rear = rear->next;
        //printf("\n\n%d has been deleted\n", Node->data);
       // free(Node);
        delete node;
    }
}


