#ifndef ACCESS_H
#define ACCESS_H

#include <string>
#include <vector>
#include <iostream>
#include "user.h"

using namespace std;

class Access {
private:
    vector<string> usernames;
    vector<string> passwords;
    User currentUser;  // Add the User class definition here
    // agrega un atributo extra

public:
    // Remove one of the declarations of the default constructor
    //Access(): usernames({"leo", "paco"}), passwords({"123", "1234"}){};
    Access(): usernames({"leo","paco","gabo","jose"}), passwords({"1","12","123","1234"}){};

    // Remove one of the declarations of the parameterized constructor
    //Access(vector<string> unames, vector<string> pwords, User cuser): usernames(unames), passwords(pwords), currentUser(cuser) {};
    Access(vector<string> unames, vector<string> pwords, User cuser): usernames(unames), passwords(pwords), currentUser(cuser) {};

    vector<string> get_usernames();
    vector<string> get_passwords();
    User get_currentUser();
    // agrega el getter a tu atributo extra

    void set_usernames(vector<string>);
    void set_passwords(vector<string>);
    void set_currentUser(User);
    // agrega el setter a tu atributo extra

    void info();
    // void addUser(User currentUser);
    bool add_username(string uname);
    void add_password(string pword);

    int validate_username(string uname);
    bool validate_password(int index, string pword);

//    int search_username(string uname);
//    int search_password(string pword);

    bool sign_in();
    void sign_up();
    void welcome_menu();
};


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

void Access::set_currentUser(User cuser){
    currentUser = cuser;
}

//setters
void Access::set_usernames(vector<string> unames){
  usernames = unames;
}

void Access::set_passwords(vector<string> pwords){
  passwords = pwords;
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
  cout<<"Current User: "<<currentUser.get_username()<<endl;
}

bool Access::add_username(string uname){
    for (string i:usernames){
      if (uname == i){
        cout<<"That username is already taken"<<endl;
        return false;
      }
    }
    usernames.push_back(uname);
    return true;
}

void Access::add_password(string pword){
    passwords.push_back(pword);
}

int Access::validate_username(string uname){
    int counter = 0;
    for(string i:usernames){
        if (uname == i){
            return counter;
            cout<<counter;
        }
        counter +=1;
    }
    return -1;
}

bool Access::validate_password(int index, string pword){
  if(index == -1){
      return false;
  }
  else if (passwords[index]==pword){
    return true;
  }
  return false;
}

/*
int Access::search_username(string uname){
    int counter = 0;
    for(string i:usernames){
        if (uname == i){
            return (counter);
        }
        counter +=1;
    }
}

int Access::search_password(string pword){
    int counter = 0;
    for(string i:passwords){
        if (pword == i){
            return (counter);
        }
        counter +=1;
    }
}
*/

bool Access::sign_in(){
  string user,pass,fail;
  int u;
  bool p;
  (getline (cin, fail ));
  cout<<"Ingrese su usuario: ";
  (getline (cin, user ));
  cout<<"Ingrese su contrasena: ";
  (getline (cin, pass ));
  u = validate_username(user);
  p = validate_password(u,pass);
  if (p == true){
    cout<<"El inicio de sesion se ha realizado con exito"<<endl;
    User user1(user,pass);
    set_currentUser(user1);
    return true;
  }
  cout<<"El nombre de usuario o la contrasena son incorrectos"<<endl;
  return false;
}

void Access::sign_up(){
  string user,pass,fail;
  (getline (cin, fail ));
  bool validation = false;
  while (validation == false){
    cout<<"Ingrese un nombre de usuario: ";
    (getline (cin, user ));
    validation = add_username(user);
  }
  cout<<"Ingrese una contrasena: ";
  (getline (cin, pass ));
  add_password(pass);
  cout<<"El registro se ha realizado con exito"<<endl;
}

void Access::welcome_menu(){
  cout<<"Sign in (I)"<<endl<<"Sing up (U)"<<endl;
  char selection;
  cin>>selection;
  bool validation = false;

  if (selection == 'I' || selection == 'i'){
    validation = sign_in();
  }
  else if(selection == 'U' || selection == 'u'){
    sign_up();
  }
  else{
    cout<<("Ingrese una seleccion valida ")<<endl;
  }
  if (validation == false){
    welcome_menu();
  }
}

//void Sesion::addUser(User currentUser){
//    User currentUser;
//}
#endif