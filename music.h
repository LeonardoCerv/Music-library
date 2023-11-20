#ifndef MUSIC_H
#define MUSIC_H
#include<string>
#include <vector>
#include <iostream>

using namespace std;

class Music{

private:
  string name;
  string author;
  string genre;
  int likes;
  int duration;
  bool favorite;
  //agrega un atributo extra

public:
  Music();
  Music(string nm, string thr, int lks,string gnr,int drtn, bool fvrt): name(nm), author(thr), likes(lks), genre(gnr), duration(drtn), favorite(fvrt){};

  string get_name();
  string get_author();
  int get_likes();
  string get_genre();
  int get_duration();
  bool get_favorite();
  //agrega el getter a tu atributo extra

  void set_name(string);
  void set_author(string);
  void set_likes(int);
  void set_genre(string);
  void set_duration(int);
  void set_favorite(bool);

};

//getters
string Music::get_name(){
  return name;
}

string Music::get_author(){
  return author;
}

int Music::get_likes(){
  return likes;
}

string Music::get_genre(){
  return genre;
}


int Music::get_duration(){
  return duration;
}

bool Music::get_favorite(){
  return favorite;
}

//setters
void Music::set_name(string nm){
  name = nm;
}

void Music::set_author(string thr){
  author = thr;
}

void Music::set_likes(int lks){
  likes = lks;
}

void Music::set_genre(string gnr){
  genre = gnr;
}


void Music::set_duration(int drtn){
  duration = drtn;
}

void Music::set_favorite(bool fvrt){
  favorite = fvrt;
}
#endif