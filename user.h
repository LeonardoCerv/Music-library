#ifndef USER_H
#define USER_H
#include<string>
#include <vector>
#include <iostream>
#include "playlist.h"
#include "song.h"
using namespace std;

void displayMenu(string title, vector<string> actions){
  cout<<title<<endl;
  cout<<"><><><><><><><><><><><><><"<<endl;
  cout<<"What would you like to do?"<<endl;
  cout<<"--------------------------"<<endl;

  int counter = 0;
  for (string i:actions){
    counter += 1;
    cout<<i<<"("<<counter<<")"<<endl;
  }
}

class User{

private:
  string username;
  string password;
  vector<Playlist> playlists;
  vector<Song> songs;
  //agrega un atributo extra

public:
  User(){
    //username = "guest";
    //password = "";
    //playlists[0]=username+" has no playlists added";
  };

  User(string uname, string pword): username(uname), password(pword){
    //playlists.push_back(username+" has no playlists added");
  };

  User(string uname, string pword, vector<Playlist> plists, vector<Song> song): username(uname), password(pword), playlists(plists), songs(song){};

  string get_username();
  string get_password();
  vector<Playlist> get_playlists();
  vector<Song> get_songs();
  //agrega el getter a tu atributo extra

  void set_username(string);
  void set_password(string);
  void set_playlists(vector<Playlist>);
  void set_songs(vector<Song>);
  //agrega el setter a tu atributo extra

  void info();

  void main_menu();
  void username_menu();
  void password_menu();
  void playlist_menu();
  void song_menu();

  void show_username();
  void modify_username();

  void show_password();
  void modify_password();

  void create_playlist();
  void show_playlists();
  void addPlaylist(vector<Playlist> playlist);
  void go_to_playlist();
  void delete_playlist();

  void upload_song();
  void show_songs();
  void go_to_song();
  void delete_song();
  void play_song();
};

//getters
string User::get_username(){
  return username;
}

string User::get_password(){
  return password;
}

vector<Playlist> User::get_playlists(){
  return playlists;
}

vector<Song> User::get_songs(){
  return songs;
}

//setters
void User::set_username(string uname){
  username = uname;
}

void User::set_password(string pword){
  password = pword;
}

void User::set_playlists(vector<Playlist> plist){
  playlists = plist;
}

void User::set_songs(vector<Song> song){
  songs = song;
}

void User::info(){
  cout<<username<<"'s Playlists: "<<endl;
  for (Playlist i: playlists){
     i.info();
  }

  for (Song i: songs){
     i.info();
  }
}

void User::addPlaylist(vector<Playlist> playlist){
  int counter = 0;
  for (Playlist i: playlist){
    playlists.push_back(i);
    counter += 1;
  }
  cout<<counter<<" playlists added succesfully"<<endl;
}

void User::main_menu(){
  displayMenu("         MAIN MENU       ",{"Username","Password","Playlists","Songs"});

  char selection;
  cin>>selection;

  if (selection=='1'){
    username_menu();
  }
  else if (selection=='2'){
    password_menu();
  }
  else if (selection=='3'){
    playlist_menu();
  }
  else if (selection =='4'){
    song_menu();
  }
  else{
    cout<<"Invalid selection, try again"<<endl<<endl;
  }
  main_menu();
}

void User::username_menu(){
  displayMenu("      USERNAME MENU       ",{"View","Modify","Exit"});

  char selection;
  cin>>selection;

  if (selection=='1'){
    show_username();
  }
  else if (selection=='2'){
    modify_username();
  }
  else if (selection=='3'){
    main_menu();
  }
  else{
    cout<<"Invalid selection, try again"<<endl<<endl;
  }
    username_menu();
}

void User::password_menu(){
  displayMenu("      PASSWORD MENU       ",{"View","Modify","Exit"});

  char selection;
  cin>>selection;

  if (selection=='1'){
    show_password();
  }
  else if (selection=='2'){
    modify_password();
  }
  else if (selection=='3'){
    main_menu();
  }
  else{
    cout<<"Invalid selection, try again"<<endl<<endl;
  }
    password_menu();
}

void User::playlist_menu(){
  displayMenu("      PLAYLIST MENU       ",{"Go-to","Create","Delete","Exit"});

  show_playlists();

  char selection;
  cin>>selection;
  
  if (selection=='1'){
    go_to_playlist();
  }
  else if (selection=='2'){
    create_playlist();
  }
  else if (selection=='3'){
    delete_playlist();
  }
  else if (selection=='4'){
    main_menu();
  }
  else{
    cout<<"Invalid selection, try again"<<endl<<endl;
  }
    playlist_menu();
}

void User::song_menu(){
  displayMenu("        SONGS MENU        ",{"go-to","Upload","Delete","Play","Exit"});

  show_songs();

  char selection;
  cin>>selection;

  
  if (selection=='1'){
    go_to_song();
  }
  else if (selection=='2'){
    upload_song();
  }
  else if (selection=='3'){
    delete_song();
  }
  else if (selection=='4'){
    play_song();
  }
  else if (selection=='5'){
    main_menu();
  }
  else{
    cout<<"Invalid selection, try again"<<endl<<endl;
  }
    song_menu();
}

void User::show_username(){
  cout<<"Your current username is: "<<username<<endl;
}

void User::modify_username(){
  //cout<<"Your current username is: "<<username<<endl;
  string newUsername;
  cout<<"Type your new username: ";
  cin>>newUsername;
  set_username(newUsername);
  cout<<"Change made succesfully"<<endl;
  cout<<"Your new username is: "<<username<<endl;
}

void User::show_password(){
  cout<<"Your current password is: "<<password<<endl;
}

void User::modify_password(){
  //cout<<"Your current username is: "<<username<<endl;
  string newPassword;
  cout<<"Type your new password: ";
  cin>>newPassword;
  set_password(newPassword);
  cout<<"Change made succesfully"<<endl;
  cout<<"Your new password is: "<<password<<endl;
}

void User::create_playlist(){
  string fail;
  string name;
  //string author = username;
  //int followers = 0;
  string genre;
  //vector <string> songs{};
  //int duration =0;
  //bool favorite = false;
  (getline (cin, fail ));
  cout<<"Choose a name for the playlist: ";
  (getline (cin, name ));
  cout<<"What genre will your playlist be? ";
  getline (cin, genre );
  //Playlist auxPlaylist(name,author,followers,genre,songs,duration,favorite);
  Playlist auxPlaylist(name,username,0,genre,{},0,false);
  playlists.push_back(auxPlaylist);
  cout<<"Youre playlist has been created succesfully"<<endl;
}


void User::go_to_playlist(){
  char selection;
  int size = (playlists.size());
  if (size == 0){
    cout<<"You dont have any playlists added"<<endl;
  }
  else{
  cout<<"type the number of the playlist you want to go to: ";
  cin>>selection;
  if ((selection)-'0' < size && (selection)-'0' >=0){
    int x = selection-'0';
    playlists[x].info();
    return;
  }
  }
  cout<<"This is not a valid input, try again"<<endl;
}
void User::delete_playlist(){
  char selection;
  char aux = 34;
  int size = (playlists.size());
  if (size == 0){
    cout<<"You dont have any playlists added"<<endl;
  }
  else{
  cout<<"type the number of the playlist you want to delete: ";
  cin>>selection;
  if ((selection)-'0' < size && (selection)-'0' >=0){
    int x = selection-'0';
    cout<<"The playlist "<<aux<<playlists[x].get_name()<<aux<<" has been deleted."<<endl;
    playlists.erase(playlists.begin()+x);
    return;
  }
  }
  cout<<"This is not a valid input, try again"<<endl;
}



void User::show_playlists(){
  cout<<"These are your playlists: "<<endl<<endl;
  cout<<"Favorites: "<<endl;
  vector<int> index;
  int counter = 0;
  for (Playlist i: playlists){
    if (i.get_favorite()){
      cout<<"("<<counter<<") ";
      cout<<i.get_name()<<endl;
      //i.info();
    }
    else{
      index.push_back(counter);
    }
    counter +=1;
  }
  cout<<"--------------------------"<<endl;
  cout<<"Non-Favorites: "<<endl;
  for (int i:index){
    //playlists[i].info();
    cout<<"("<<i<<") ";
    cout<<playlists[i].get_name()<<endl;
  }
  cout<<"--------------------------"<<endl;
}

void User::upload_song(){
  string name;
  string genre;
  string route;

  string fail;
  (getline (cin, fail ));

  cout<<"Type the name of the song: ";
  (getline (cin, name ));

  cout<<"What genre will your playlist be? ";
  getline (cin, genre );

  cout<<"type the location of the song: ";
  (getline (cin, route ));

  //Playlist auxPlaylist(name,author,followers,genre,songs,duration,favorite);
  Song auxSong(name,username,genre,0,route,false);
  cout<<"Youre song has been uploaded succesfully"<<endl;
  songs.push_back(auxSong);
}

void User::show_songs(){
  cout<<"These are your songs: "<<endl<<endl;
  cout<<"Favorites: "<<endl;
  vector<int> index;
  int counter = 0;
  for (Song i: songs){
    if (i.get_favorite()){
      cout<<"("<<counter<<") ";
      cout<<i.get_name()<<endl;
      //i.info();
    }
    else{
      index.push_back(counter);
    }
    counter +=1;
  }
  cout<<"--------------------------"<<endl;
  cout<<"Non-Favorites: "<<endl;
  for (int i:index){
    //playlists[i].info();
    cout<<"("<<i<<") ";
    cout<<songs[i].get_name()<<endl;
  }
  cout<<"--------------------------"<<endl;
}

void User::go_to_song(){
  char selection;
  int size = (songs.size());

  if (size == 0){
    cout<<"You dont have any songs added"<<endl;
  }
  else{
  cout<<"type the number of the song you want to go to: ";
  cin>>selection;

  if ((selection)-'0' < size && (selection)-'0' >=0){
    int x = selection-'0';
    songs[x].info();
    return;
  }
  }
  cout<<"This is not a valid input, try again"<<endl;
}

void User::delete_song(){
  char selection;
  char aux = 34;
  int size = (songs.size());
  if (size == 0){
    cout<<"You dont have any songs added"<<endl;
  }
  else{
  cout<<"type the number of the song you want to delete: ";
  cin>>selection;
  if ((selection)-'0' < size && (selection)-'0' >=0){
    int x = selection-'0';
    cout<<"The song "<<aux<<songs[x].get_name()<<aux<<" has been deleted."<<endl;
    songs.erase(songs.begin()+x);
    return;
  }
  }
  cout<<"This is not a valid input, try again"<<endl;
}

void User::play_song(){
  char selection;
  char aux = 34;
  int size = (songs.size());
  if (size == 0){
    cout<<"You dont have any songs added"<<endl;
  }
  else{
  cout<<"type the number of the song you want to delete: ";
  cin>>selection;
  if ((selection)-'0' < size && (selection)-'0' >=0){
    int x = selection-'0';
    cout<<"The song "<<aux<<songs[x].get_name()<<aux<<" is now playing"<<endl;
    songs[x].play_song();
    return;
  }
  }
  cout<<"This is not a valid input, try again"<<endl;
}
#endif