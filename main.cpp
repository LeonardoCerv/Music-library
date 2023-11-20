/*
* Ejemplo
* Programar la clase Arbol
* Atributos: especie, edad, tam
* MÃ©todos: getters(), setters(), crece(tiempo)
* Constructor

* completa el siguiente cÃ³digo y agrega comentarios
* para explicar lo que ocurre en cada funciÃ³n o instrucciÃ³n que no entiendas
*/

#include <iostream>
#include <string>
#include "access.h"
#include "user.h"
#include "song.h"
#include "playlist.h"

using namespace std;


/* usa este cÃ³digo para poner tus propios
*  comentarios y explicar que hace cada instrucciÃ³n
*/
int main(){
  Access access1;
  access1.welcome_menu();
  User user1= access1.get_currentUser();
  user1.main_menu();
  user1.info();

  //cout << paco.get_username() << endl;
  //Playlist nm("nm",user1.get_username(),0,"pop",{"3005","yep","flashing lights"},10);
  //nm.info();

  //Song idk("idk",user1.get_username(),"rap",3);
  //idk.info();
  return 0;
}