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

/* usa este cÃ³digo para poner tus propios
*  comentarios y explicar que hace cada instrucciÃ³n
*/

int main(){
  User paco("Paco :)","12345");
  vector<string> user{"leo","gabo","paco","si"};
  vector<string> pass{"123","1234","12345","123456"};
  Access access(user,pass,paco);
  bool validation = false;
  while (validation == false){
    validation = access.welcome_menu();
  }
  paco.info();
  paco.addPlaylist({"nm","midnight dreams", "TBOS","on repeat"});
  paco.info();
  //cout << paco.get_username() << endl;
  Playlist nm("nm",paco.get_username(),0,"pop",{"3005","yep","flashing lights"},10);
  nm.info();

  Song idk("idk",paco.get_username(),"rap",3);
  idk.info();
  return 0;
}