#include<string>
#include <vector>
#include <iostream>
#include "user.h"



using namespace std;

class Access{

private:
  vector<string> usernames;
  vector<string> passwords;
  User currentUser;
  //agrega un atributo extra

public:
  Access(){
    usernames = {"leo","paco"};
    passwords = {"123","1234"};
  };
  Access(vector<string> unames, vector<string> pwords, User cuser);

  vector<string> get_usernames();
  vector<string> get_passwords();
  User get_currentUser();
  //agrega el getter a tu atributo extra

  void set_usernames(vector<string>);
  void set_passwords(vector<string>);
  void set_currentUser(User);
  //agrega el setter a tu atributo extra

  void info();
  //void addUser(User currentUser);
  bool add_username(string uname);
  void add_password(string pword);

  int search_username(string uname);
  int search_password(string pword);


  bool sign_in();
  bool sign_up();
  bool welcome_menu();
};

Access::Access(vector<string> unames, vector<string> pwords, User cuser)
    : usernames(unames), passwords(pwords), currentUser(cuser) {}

//getters
vector<string> Access::get_usernames(){
  return usernames;
}

vector<string> Access::get_passwords(){
  return passwords;
}

User Access::get_currentUser(){
  return currentUser;
}

//setters
void Access::set_usernames(vector<string> unames){
  usernames = unames;
}

void Access::set_passwords(vector<string> pwords){
  passwords = pwords;
}

void Access::set_currentUser(User cuser){
  currentUser = cuser;
}

void Access::info(){
  cout<<"Passwords: ";
  for (string i: usernames){
     cout<<i<<endl;
  }
  cout<<"Passwords: ";
  for (string i: passwords){
     cout<<i<<endl;
  }
  cout<<"Current User: "<<currentUser.get_username();
}

bool Access::add_username(string uname){
    for (string i:usernames){
      if (uname == i){
        cout<<"That username is already taken";
        return false;
      }
    }
    usernames.push_back(uname);
    return true;
}

void Access::add_password(string pword){
    passwords.push_back(pword);
}

int Access::search_username(string uname){
    int counter = 0;
    for(string i:usernames){
        if (uname == i){
            return counter;
        }
        counter +=1;
    }
    return -1;
}

int Access::search_password(string pword){
    int counter = 0;
    for(string i:passwords){
        if (pword == i){
            return counter;
        }
        counter +=1;
    }
    return -1;
}

bool Access::sign_in(){
  string user,pass;
  int u,p;
  cout<<"Ingrese su usuario: ";
  cin>>user;
  cout<<"Ingrese su contrasena: ";
  cin>>pass;
  u = search_username(user);
  p = search_password(pass);
  if (u == p){
    cout<<"El inicio de sesion se ha realizado con exito"<<endl;
    return true;
  }
  cout<<"El nombre de usuario o la contrasena son incorrectos"<<endl;
  return false;
}

bool Access::sign_up(){
  string user,pass;
  bool validation;
  cout<<"Ingrese un nombre de usuario: ";
  cin>>user;
  validation = add_username(user);
  cout<<"Ingrese una contrasena: ";
  cin>>pass;
  add_password(pass);
  return validation;
}

bool Access::welcome_menu(){
  cout<<"Sign in (I)"<<endl<<"Sing up (U)"<<endl;
  string selection;
  cin>>selection;
  if (selection == "I" || selection == "i"){
    sign_in();
  }
  else if(selection == "U" || selection == "u"){
    sign_up();
  }
  else{
    cout<<("Ingrese una seleccion valida ");
    return false;
  }
  return true;
}

//void Sesion::addUser(User currentUser){
//    User currentUser;
//}