#include<string>
#include <vector>
#include <iostream>

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