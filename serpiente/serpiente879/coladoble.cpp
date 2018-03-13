#include "coladoble.hpp"

ColaDoble::ColaDoble()
{
    cabeza = 0;
    cola = 0;
}

ColaDoble::~ColaDoble()
{
NodoCD *aux;

  while (cabeza!=0)
  {
    aux=cabeza->sig;
    delete cabeza;
    cabeza=aux;
  }
}

bool ColaDoble::EstaVacia() const
{
    return cabeza==0;
}

void ColaDoble::Encolar(TAnillo &a, TExtremo ext)
{
    NodoCD *nuevo;

    nuevo = new NodoCD;
    nuevo->an=a;
    if (cabeza==0){
        cabeza=nuevo;
        cola=nuevo;
        nuevo->sig=0;
    }
    else{
        if(ext==frente){
           nuevo->sig=cabeza->sig;
           cabeza->sig=nuevo;
        }
        else{
           nuevo->sig=0;
           cola->sig=nuevo;
           cola=nuevo;
        }
  }
}

void ColaDoble::Desencolar(TExtremo ext)
{
NodoCD *aux;

  if(!EstaVacia()){
    if (cabeza == cola)
    {
       delete cabeza;
       cabeza = 0;
       cola = 0;
    }
    else
    {
        if (ext==frente){
           aux=cabeza->sig;
           delete cabeza;
           cabeza = aux;
        }
        else{
           aux=cabeza;
           while(aux->sig!=cola){
              aux = aux->sig;
           }
           delete cola;
           aux->sig = 0;
           cola = aux;
       }
    }
  }
}

void ColaDoble::Valor(TAnillo &a, TExtremo ext)
{
  if (!EstaVacia()){
    if(ext == frente){
      a=cabeza->an;
    }
    else{
      a=cola->an;
    }
  }
}
