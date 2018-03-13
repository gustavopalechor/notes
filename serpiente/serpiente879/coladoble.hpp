#ifndef _CoLaDobLe_
#define _CoLaDobLe_

class ColaDoble 
{
  public:
   struct TAnillo{ 
     unsigned int x, y;
   };
   enum TExtremo {frente, final};
   
   ColaDoble();
   ~ColaDoble();
   bool EstaVacia() const;
   void Encolar(TAnillo &a, TExtremo ext=final);
   void Desencolar(TExtremo ext=frente);
   void Valor(TAnillo &a, TExtremo ext=frente);
   
  private:
   struct NodoCD 
   {
    TAnillo an; 
    NodoCD *sig;
   }; 
   NodoCD *cabeza;
   NodoCD *cola;
};
#endif
