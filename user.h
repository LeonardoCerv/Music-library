#include<string>
#include <vector>
#include <iostream>

using namespace std;

class User{

private:
  string username;
  string password;
  vector<string> playlists;
  //agrega un atributo extra

public:
  User(){
    username = "Joe Black";
    password = "123";
    playlists[0]= username+" has no playlists added";
  };

  User(string pword, vector<string> plists): password(pword), playlists(plists){
    username = "Joe black";
  };

  User(string uname, string pword): username(uname), password(pword){
    playlists.push_back(username+" has no playlists added");
  };

  User(string uname, string pword, vector<string> plists): username(uname), password(pword), playlists(plists){};

  string get_username();
  string get_password();
  vector<string> get_playlists();
  //agrega el getter a tu atributo extra

  void set_username(string);
  void set_password(string);
  void set_playlists(vector<string>);
  //agrega el setter a tu atributo extra

  void info();
  void addPlaylist(vector<string> playlist);
};

//getters
string User::get_username(){
  return username;
}

string User::get_password(){
  return password;
}

vector<string> User::get_playlists(){
  return playlists;
}

//setters
void User::set_username(string uname){
  username = uname;
}

void User::set_password(string pword){
  password = pword;
}

void User::set_playlists(vector<string> plist){
  playlists = plist;
}

void User::info(){
  for (string i: playlists){
     cout<<i<<endl;
  }
}

void User::addPlaylist(vector<string> playlist){
  int counter = 0;
  playlists[0] = username+"'s Playlists: ";
  for (string i: playlist){
    
    playlists.push_back(i);
    counter += 1;
  }
  cout<<counter<<" playlists added succesfully"<<endl;
}