#ifndef CANCION_H
#define CANCION_H

#include <string>
#include <iostream>

#include "musica.h"

using namespace std;

// Clase "Cancion" es hija de la clase "Musica"
class Cancion : public Musica {
private:
    // Atributos
    string ruta;

public:
    // Constructores
    Cancion();
    Cancion(string nm, string thr, string gnr, string rt);

    // Getter para obtener la ruta de la canción
    string getRuta();

    // Setter para actualizar la ruta de la canción
    void setRuta(string rt);

    // Método para imprimir la información de la canción
    void info();
};

// Implementación del constructor por omision
Cancion::Cancion() {}

// Implementación del constructor con parámetros
Cancion::Cancion(string nm, string thr, string gnr, string rt) : Musica(nm, thr, gnr), ruta(rt) {}

// Implementación del getter para obtener la ruta de la canción
string Cancion::getRuta() {
    return ruta;
}

// Implementación del setter para actualizar la ruta de la canción
void Cancion::setRuta(string rt) {
    ruta = rt;
}

// Implementación del método para imprimir la información de la canción
void Cancion::info() {
    cout << "Cancion: " << getNombre() << " - " << getAutor() << endl;
    cout << "Genero: " << getGenero() << " Duracion: " << getDuracion() << " minutos" << endl;
    cout << "Almacenada en: " << ruta << endl;
}

#endif
