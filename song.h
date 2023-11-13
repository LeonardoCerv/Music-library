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