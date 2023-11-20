#include<string>
#include <vector>
#include <iostream>



using namespace std;


class Song{

private:
  string name;
  string author;
  string genre;
  int duration;
  //agrega un atributo extra

public:
  Song();
  Song(string nm, string thr,string gnr,int drtn): name(nm), author(thr), genre(gnr), duration(drtn){};

  string get_name();
  string get_author();
  string get_genre();
  int get_duration();
  //agrega el getter a tu atributo extra

  void set_name(string);
  void set_author(string);
  void set_genre(string);
  void set_duration(int);
  //agrega el setter a tu atributo extra

  void info();
};

Song::Song(){
}

//getters
string Song::get_name(){
  return name;
}

string Song::get_author(){
  return author;
}

string Song::get_genre(){
  return genre;
}

int Song::get_duration(){
  return duration;
}

//setters
void Song::set_name(string nm){
  name = nm;
}

void Song::set_author(string thr){
  author = thr;
}

void Song::set_genre(string gnr){
  genre = gnr;
}

void Song::set_duration(int drtn){
  duration = drtn;
}

void Song::info(){
  cout<<"Song: "<<name<<"  -"<<author<<endl;
  cout<< "genre: "<<genre<<"   duration: "<<duration<<endl;
}


using namespace std;

class Playlist{

private:
  string name;
  string author;
  int followers; 
  string genre;
  vector <string> songs;
  int duration;
  //agrega un atributo extra

public:
  Playlist();
  Playlist(string nm, string thr, int fllwrs,string gnr,vector<string> sngs,int drtn): name(nm), author(thr), followers(fllwrs), genre(gnr), songs(sngs), duration(drtn){};

  string get_name();
  string get_author();
  int get_followers();
  string get_genre();
  vector<string> get_songs();
  int get_duration();
  //agrega el getter a tu atributo extra

  void set_name(string);
  void set_author(string);
  void set_followers(int);
  void set_genre(string);
  void set_songs(vector<string>);
  void set_duration(int);
  //agrega el setter a tu atributo extra

  void info();

};

//getters
string Playlist::get_name(){
  return name;
}

string Playlist::get_author(){
  return author;
}

int Playlist::get_followers(){
  return followers;
}

string Playlist::get_genre(){
  return genre;
}

vector<string> Playlist::get_songs(){
  return songs;
}

int Playlist::get_duration(){
  return duration;
}

//setters
void Playlist::set_name(string nm){
  name = nm;
}

void Playlist::set_author(string thr){
  author = thr;
}

void Playlist::set_followers(int fllwrs){
  followers = fllwrs;
}

void Playlist::set_genre(string gnr){
  genre = gnr;
}

void Playlist::set_songs(vector<string> sngs){
  songs = sngs;
}

void Playlist::set_duration(int drtn){
  duration = drtn;
}

void Playlist::info(){
  cout<< name<<" from: "<< author<<endl<<"Songs:"<<endl;
  for (string i: songs){
     cout<<i<<endl;
  }
  cout<<"duration: "<< duration<<" minutes"<<endl;
}


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
    playlists.push_back(username+" has no playlists added");
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


class Access {
private:
    vector<string> usernames;
    vector<string> passwords;
    User currentUser;  // Add the User class definition here
    // agrega un atributo extra

public:
    // Remove one of the declarations of the default constructor
    Access() {
        usernames = {"leo", "paco"};
        passwords = {"123", "1234"};
    };

    // Remove one of the declarations of the parameterized constructor
    Access(vector<string> unames, vector<string> pwords, User cuser);

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