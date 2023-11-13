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
#include "user.h"
#include "song.h"
#include "playlist.h"

/* usa este cÃ³digo para poner tus propios
*  comentarios y explicar que hace cada instrucciÃ³n
*/
vector<vector<string>>  sign_up(vector <string> users,vector <string> passwords){
  string user,pass;
  while (1){
    cout<<"Ingrese un nombre de usuario: ";
    cin>>user;
    for (string i:users){
      if (user == i){
        cout<<"that username is already taken"<<endl;
        continue;
      }
    }
    break;
  }
  cout<<"Ingrese una contrasena: ";
  cin>>pass;
  User user1(user,pass);
  users.push_back(user1.get_username());
  passwords.push_back(user1.get_password());
  vector<vector<string>> combined{users,passwords};
  return combined;
}

vector<vector<string>> sign_in(vector<string> users, vector<string> passwords){
  string user,pass;
  while (1){
    int counter = 0;
    cout<<"Ingrese su usuario: ";
    cin>>user;
    cout<<"Ingrese su contrasena: ";
    cin>>pass;
    for (string i: users){
      if (user == i){
          if (pass == passwords[counter]){
            cout<<"El inicio de sesion se ha realizado con exito"<<endl;
            vector<vector<string>> combined{users,passwords};
            return combined;
          }
//          else{
//            cout<<"La contrasena es incorrecta"<<endl;
//            continue;
//          }
      }
      counter =+ 1;
    }
//    cout<<"El nombre de usuario es incorrecto"<<endl;
//    continue;
      cout<<"El nombre de usuario o la contrasena son incorrectos"<<endl;
  }
  
}

void welcome_menu(vector <string> users,vector <string> passwords){
  while (1){
  cout<<"Sign in (I)"<<endl<<"Sing up (U)"<<endl;
  string selection;
  cin>>selection;
  if (selection == "I" || selection == "i"){
    vector<vector<string>> p1 = sign_in(users,passwords);
    users = p1[0];
    passwords = p1[1];
    break;
  }
  else if(selection == "U" || selection == "u"){
    vector<vector<string>> p2 = sign_up(users, passwords);
    users = p2[0];
    passwords = p2[1];
    continue;
  }
  else{
    ("Ingrese una seleccion valida ");
  }
  }
  
}






int main(){
  vector <string> users;
  vector <string> passwords;
  welcome_menu(users,passwords);







  User paco("paco :)", "casablanca");
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