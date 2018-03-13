#include "coladoble.hpp"
#include <iostream>
#include <ctime>
#include <ncurses.h>
#include <cstdlib>
using namespace std;

unsigned int const tamMINI=4;
enum mov {der, izq, arr, abj};

const clock_t VEL_SERP = 100000;

void IniSerp(ColaDoble &Serp, const unsigned int fila, const unsigned int columna)
{
ColaDoble::TAnillo pos;
  unsigned int i;

  pos.y=(fila/2);
  for(i=0;i<tamMINI;i++){
     pos.x=(1+i);
     Serp.Encolar(pos);
        
     move(pos.y, pos.x);
     if(i==tamMINI-1){
        addch('@');
     }
     else{
        addch('0');
     }
     refresh();
  }
}

bool mordido(ColaDoble &serp)
{
  bool fin=false;
  ColaDoble temp1;
  ColaDoble::TAnillo boca, temp2;

  serp.Valor(boca, ColaDoble::final);
  serp.Desencolar(ColaDoble::final);
  temp1.Encolar(boca);
  
  while(!serp.EstaVacia() && !fin){
    serp.Valor(temp2, ColaDoble::final);
    if(temp2.x == boca.x && temp2.y == boca.y){
      fin = true;
    }
    serp.Desencolar(ColaDoble::final);
    temp1.Encolar(temp2);
  }
  while(!temp1.EstaVacia()){
    temp1.Valor(temp2, ColaDoble::final);
    temp1.Desencolar(ColaDoble::final);
    serp.Encolar(temp2);
  }

  return fin;
}

bool camina(ColaDoble &serpiente, const mov movimiento, 
            const unsigned int max_y, const unsigned int max_x)
{
  
  ColaDoble::TAnillo pos, borrar;
  bool fin = false;

  serpiente.Valor(borrar);
  move(borrar.y, borrar.x);
  addch(' ');
  refresh();
  serpiente.Desencolar();
  
  serpiente.Valor(pos,ColaDoble::final);
  move(pos.y, pos.x);
  addch('0');
  refresh();
    
  switch(movimiento){
    case arr:
      pos.y = pos.y-1;
      if (pos.y <= 1){
        fin = true;
      }
      break;
    case der:
      pos.x = pos.x+1;
      if (pos.x >= max_x){
        fin = true;
      }
      break;
    case izq:
      pos.x = pos.x-1;
      if (pos.x <= 1){
        fin = true;
      }
      break;
    case abj:
       pos.y = pos.y+1;
       if (pos.y >= max_y){
         fin = true;
       }
       break;
  }
  
  if(!fin){
    fin = mordido(serpiente);
  }

  serpiente.Encolar(pos);
  move(pos.y, pos.x);
  addch('@');
  refresh();

  return fin;
}

unsigned int dado (unsigned int caras)
{
  unsigned int num;
  num=1 + rand()%caras;
  return num;
}

ColaDoble::TAnillo comer(const unsigned int max_y, const unsigned int max_x)
{
  ColaDoble::TAnillo comida;

  comida.x = dado(max_x);
  comida.y = dado(max_y);
  move(comida.y, comida.x);
  addch('*');
  refresh();

  return comida;
}

bool Ini_juego(ColaDoble &serpiente, const unsigned int max_y, const unsigned int max_x)
{

  ColaDoble::TAnillo pos, comida;
  int tecla;
  bool fin = false;
  mov movimiento = der;  

  clock_t ultimo = clock(), actual;
  comida = comer(max_y, max_x);
    
  do
  {
    actual = clock();
    if (actual - ultimo > VEL_SERP)
    {
      serpiente.Valor(pos, ColaDoble::final);
      move(pos.y, pos.x);
      addch('@');
      refresh();
      fin = camina(serpiente, movimiento, max_y, max_x);
      ultimo = actual;
    }
    
    tecla = getch();

    switch(tecla)
    {      
      case KEY_UP:
        if(movimiento != abj){
          movimiento = arr;
        }
        break;
      case KEY_LEFT:
        if(movimiento != der){
          movimiento = izq;
        }
        break;
      case KEY_RIGHT:
        if(movimiento != izq){
          movimiento = der;
        }
        break;
      case KEY_DOWN:
        if(movimiento != arr){
          movimiento = abj;
        }
        break;
      case 27: // tecla ESC
        fin = true;
        break;
    }
    if(comida.x == pos.x && comida.y == pos.y){
      serpiente.Valor(comida, ColaDoble::frente);
      serpiente.Encolar(comida, ColaDoble::frente);
      comida = comer(max_y, max_x);
    }
  }  while (!fin);
  
  return fin;
}


int main()
{
   WINDOW *w;
   unsigned int filas, columnas;
   ColaDoble serpiente;
   bool acabar = false, fin;
   char salir;

  w = initscr();
  getmaxyx(w, filas, columnas);

  keypad(w, TRUE);
  noecho();
  nonl();
  curs_set(0);
  erase();
  nodelay(w, TRUE);

  do{
  IniSerp(serpiente, filas, columnas);
  fin = Ini_juego(serpiente, filas, columnas);
  
  cout<<"El juego a terminado";
  cout<<"¿Quiere continuar?";
  cin.get(salir);
  if('s' == salir && fin){
    acabar = true;
    while(!serpiente.EstaVacia()){
      serpiente.Desencolar();
    }
    //Esto hace k se inicie e juego con la serpiente a cero
    system("clear");
  }
  else{
    acabar = false;
  }

  }while (acabar);
  endwin();

  return 0;
}
