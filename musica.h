#ifndef MUSICA_H
#define MUSICA_H
#include <string>
#include <iostream>

using namespace std;

// Clase Music es padre de Cancion y Playlist
class Musica{

private:
  string nombre;        // Nombre de la canción
  string autor;      // Autor de la canción
  string genero;       // Género de la canción
  int likes;          // Número de "me gusta" que tiene la canción
  int duracion;       // Duración de la canción en segundos
  bool favorito;      // Indica si la canción está marcada como favorita

public:
  // Constructor por omision
  Musica();

  // Constructor con parámetros para inicializar nombre, autor y género
  Musica(string nm, string thr, string gnr);

  // Getters
  string getNombre();      // Obtiene el nombre de la canción
  string getAutor();    // Obtiene el autor de la canción
  int getLikes();        // Obtiene el número de "me gusta"
  string getGenero();     // Obtiene el género de la canción
  int getDuracion();     // Obtiene la duración de la canción en segundos
  bool getFavorito();     // Obtiene el estado de favorito

  // Setters
  void setNombre(string);    // Establece el nombre de la canción
  void setAutor(string);  // Establece el autor de la canción
  void setLikes(int);       // Establece el número de "me gusta"
  void setGenero(string);     // Establece el género de la canción
  void setDuracion(int);     // Establece la duración de la canción en segundos
  void setFavorito(bool);    // Establece el estado de favorito

};

// Constructores
Musica::Musica(){
}

Musica::Musica(string nm, string thr, string gnr){
  nombre = nm;
  autor = thr; 
  genero = gnr;
  likes = 0;
  duracion = 0;
  favorito = false;
}

// Getters
string Musica::getNombre(){
  return nombre;
}

string Musica::getAutor(){
  return autor;
}

int Musica::getLikes(){
  return likes;
}

string Musica::getGenero(){
  return genero;
}

int Musica::getDuracion(){
  return duracion;
}

bool Musica::getFavorito(){
  return favorito;
}

// Setters
void Musica::setNombre(string nm){
  nombre = nm;
}

void Musica::setAutor(string thr){
  autor = thr;
}

void Musica::setLikes(int lks){
  likes = lks;
}

void Musica::setGenero(string gnr){
  genero = gnr;
}

void Musica::setDuracion(int drtn){
  duracion = drtn;
}

void Musica::setFavorito(bool fvrt){
  favorito = fvrt;
}

#endif