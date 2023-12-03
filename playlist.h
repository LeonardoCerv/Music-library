#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>
#include <iostream>

#include "musica.h"
#include "cancion.h"

using namespace std;

// Clase playlist es hija de la clase Musica
class Playlist : public Musica {
private:
    vector<Cancion> canciones;  // Vector que almacena las canciones en la playlist

public:
    // Constructores
    Playlist();
    Playlist(string nm, string thr, string gnr);

    // Getter para obtener la lista de canciones en la playlista
    vector<Cancion> getCanciones();

    // Setter para actualizar la lista de canciones en la playlista
    void setCanciones(vector<Cancion>);

    // Métodos
    void info();  // Método para imprimir la información de la playlista
    void agregarCancion(Cancion cancion);  // Método para agregar una canción a la playlista
    void eliminarCancion(Cancion cancion);  // Método para eliminar una canción de la playlista
};

// Implementación del constructor por omision
Playlist::Playlist() : Musica() {}

// Implementación del constructor con parámetros
Playlist::Playlist(string nm, string thr, string gnr): Musica(nm, thr, gnr) {}


// Implementación del getter para obtener la lista de canciones en la playlista
vector<Cancion> Playlist::getCanciones() {
    return canciones;
}

// Implementación del setter para actualizar la lista de canciones en la playlista
void Playlist::setCanciones(vector<Cancion> cancionesNuevas) {
    canciones = cancionesNuevas;
}

// Implementación del método para imprimir la información de la playlista
void Playlist::info() {
    cout << "\"" << getNombre() << "\"" << " de: " << getAutor() << endl;
    cout << "genero: " << getGenero() << endl;
    cout << "Canciones:" << endl;
    if (canciones.empty()) {
        cout << getNombre() << " no tiene canciones agregadas" << endl;
    }
    else {
        for (Cancion cancion : canciones) {
            cout << cancion.getNombre() << endl;
        }
    }
    cout << "duracion: " << getDuracion() << " minutos" << endl << endl;
}

// Implementación del método para agregar una canción a la playlista
void Playlist::agregarCancion(Cancion cancion) {
    canciones.push_back(cancion);
}

// Implementación del método para eliminar una canción de la playlista
void Playlist::eliminarCancion(Cancion cancion) {
    int contador = 0;
    for (Cancion i : canciones) {
        if (i.getRuta() == cancion.getRuta()) {
            canciones.erase(canciones.begin() + contador);
        }
        contador += 1;
    }
}

#endif
