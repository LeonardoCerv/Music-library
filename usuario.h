#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <vector>
#include <iostream>

#include "playlist.h"
#include "cancion.h"

using namespace std;

class Usuario {

private:
    string nombreUsuario;
    string contrasena;
    vector<Playlist> playlists;
    vector<Cancion> canciones;
    vector<string> nombresUsuarios;
    // Agrega un atributo extra si es necesario

public:
    // Constructores
    Usuario();
    Usuario(string nombreUsuario, string contrasena): nombreUsuario(nombreUsuario), contrasena(contrasena) {
        nombresUsuarios = {};
    };

    // Setters
    void setNombreUsuario(string);
    void setContrasena(string);
    void setPlaylists(vector<Playlist>);
    void setCanciones(vector<Cancion>);
    void setNombresUsuarios(vector<string>);

    // Getters
    string getNombreUsuario();
    string getContrasena();
    vector<Playlist> getPlaylists();
    vector<Cancion> getCanciones();
    vector<string> getNombresUsuarios();

    // Métodos principales
    char desplegarMenu(string titulo, vector<string> acciones, bool eleccion);
    void info();
    void menuPrincipal();

    // Métodos nombreUsuario
    void menuNombreUsuario();
    void mostrarNombreUsuario();
    void modificarNombreUsuario();

    // Métodos contrasena
    void menuContrasena();
    void mostrarContrasena();
    void modificarContrasena();

    // Métodos playlist
    void menuPlaylist();
    void crearPlaylist();
    void mostrarPlaylist();
    void irAPlaylist();
    void eliminarPlaylist();
    void submenuPlaylist(int index);

    // Métodos canción
    void menuCancion();
    void subirCancion();
    void mostrarCanciones();
    void irACancion();
    void eliminarCancion();
    void submenuCancion(int index);
};

// Implementación del constructor por defecto
Usuario::Usuario() {}

// Implementación del setter para actualizar el nombre de usuario
void Usuario::setNombreUsuario(string nombre) {
    nombreUsuario = nombre;
}

// Implementación del setter para actualizar la contraseña
void Usuario::setContrasena(string contrasena) {
    contrasena = contrasena;
}

// Implementación del setter para actualizar las listas de reproducción
void Usuario::setPlaylists(vector<Playlist> listas) {
    playlists = listas;
}

// Implementación del setter para actualizar las canciones
void Usuario::setCanciones(vector<Cancion> song) {
    canciones = song;
}

// Implementación del setter para actualizar los nombres de usuario
void Usuario::setNombresUsuarios(vector<string> unames) {
    nombresUsuarios = unames;
}

// Implementación del getter para obtener el nombre de usuario
string Usuario::getNombreUsuario() {
    return nombreUsuario;
}

// Implementación del getter para obtener la contraseña
string Usuario::getContrasena() {
    return contrasena;
}

// Implementación del getter para obtener las listas de reproducción
vector<Playlist> Usuario::getPlaylists() {
    return playlists;
}

// Implementación del getter para obtener las canciones
vector<Cancion> Usuario::getCanciones() {
    return canciones;
}

// Implementación del getter para obtener los nombres de usuario
vector<string> Usuario::getNombresUsuarios() {
    return nombresUsuarios;
}

// Implementación del método principal de despliegue de menú
char Usuario::desplegarMenu(string titulo, vector<string> acciones, bool eleccion) {
    cout << titulo << endl;
    cout << "><><><><><><><><><><><><><" << endl;
    cout << "  Que te gustaria hacer?" << endl;
    cout << "--------------------------" << endl;

    int counter = 0;
    for (string i : acciones) {
        counter += 1;
        cout << i << "(" << counter << ")" << endl;
    }

    if (eleccion) {
        char selection;
        cin >> selection;
        return selection;
    }
}

// Implementación del método de información
void Usuario::info() {
    cout << "Playlists de " << nombreUsuario << ": " << endl;
    for (Playlist i : playlists) {
        i.info();
    }

    for (Cancion i : canciones) {
        i.info();
    }
}

// Implementación del método principal del menú
void Usuario::menuPrincipal() {
    char selection = desplegarMenu("   MENU PRINCIPAL       ", {"Nombre de Usuario", "Contrasena", "Playlists", "Canciones", "Salir"}, true);

    if (selection == '1') {
        system("cls");
        menuNombreUsuario();
    }
    else if (selection == '2') {
        system("cls");
        menuContrasena();
    }
    else if (selection == '3') {
        system("cls");
        menuPlaylist();
    }
    else if (selection == '4') {
        system("cls");
        menuCancion();
    }
    else if (selection == '5') {
        system("cls");
        return;
    }
    else {
        system("cls");
        cout << "Seleccion invalida, intenta de nuevo" << endl << endl;
    }
    menuPrincipal();
}


// Implementación del menú para el nombre de usuario
void Usuario::menuNombreUsuario() {
    char selection = desplegarMenu(" MENU NOMBRE DE USUARIO       ", {"Ver", "Modificar", "Salir"}, true);

    if (selection == '1') {
        system("cls");
        mostrarNombreUsuario();
    }
    else if (selection == '2') {
        system("cls");
        modificarNombreUsuario();
    }
    else if (selection == '3') {
        system("cls");
        return;
    }
    else {
        system("cls");
        cout << "Seleccion invalida, intenta de nuevo" << endl << endl;
    }
    menuNombreUsuario();
}

// Implementación para mostrar el nombre de usuario actual
void Usuario::mostrarNombreUsuario() {
    cout << "Tu nombre de usuario actual es: " << nombreUsuario << endl;
}

// Implementación para modificar el nombre de usuario
void Usuario::modificarNombreUsuario() {
    string nuevoNombre;
    cout << "Ingresa tu nuevo nombre de usuario: ";
    cin >> nuevoNombre;
    
    int counter = 0;
    for (string i : nombresUsuarios) {
        if (nuevoNombre == i) {
            system("cls");
            cout << "Ese nombre de usuario ya esta en uso" << endl;
            return;
        }
        counter += 1;
    }

    system("cls");
    setNombreUsuario(nuevoNombre);
    cout << "Tu nuevo nombre de usuario es: " << nombreUsuario << endl;
}

// Implementación del menú para la contraseña
void Usuario::menuContrasena() {
    char selection = desplegarMenu("   MENU CONTRASEÑA       ", {"Ver", "Modificar", "Salir"}, true);

    if (selection == '1') {
        system("cls");
        mostrarContrasena();
    }
    else if (selection == '2') {
        system("cls");
        modificarContrasena();
    }
    else if (selection == '3') {
        system("cls");
        return;
    }
    else {
        system("cls");
        cout << "Seleccion inválida, intenta de nuevo" << endl << endl;
    }
    menuContrasena();
}

// Implementación para mostrar la contraseña actual
void Usuario::mostrarContrasena() {
    cout << "Tu contrasena actual es: " << contrasena << endl;
}

// Implementación para modificar la contraseña
void Usuario::modificarContrasena() {
    string nuevaContrasena;
    cout << "Ingresa tu nueva contrasena: ";
    cin >> nuevaContrasena;

    setContrasena(nuevaContrasena);
    system("cls");
    cout << "Tu nueva contrasena es: " << nuevaContrasena << endl;
}

// Implementación del menú para las listas de reproducción
void Usuario::menuPlaylist() {
    desplegarMenu("     MENU PLAYLISTS      ", {"Ir a", "Crear", "Eliminar", "Salir"}, false);

    mostrarPlaylist();
    char selection;
    cin >> selection;

    if (selection == '1') {
        irAPlaylist();
    }
    else if (selection == '2') {
        crearPlaylist();
    }
    else if (selection == '3') {
        eliminarPlaylist();
    }
    else if (selection == '4') {
      system("cls");
      return;
    }
    else {
        system("cls");
        cout << "Seleccion invalida, intenta de nuevo" << endl << endl;
    }
    menuPlaylist();
}

// Implementación para mostrar las playlists
void Usuario::mostrarPlaylist() {
    cout << "Estas son tus playlists: " << endl << endl;
    cout << "Favoritas: " << endl;
    vector<int> index;
    int counter = 0;
    for (Playlist i : playlists) {
        if (i.getFavorito()) {
            cout << "(" << counter << ") ";
            cout << i.getNombre() << endl;
        }
        else {
            index.push_back(counter);
        }
        counter += 1;
    }
    cout << "--------------------------" << endl;
    cout << "No favoritas: " << endl;
    for (int i : index) {
        cout << "(" << i << ") ";
        cout << playlists[i].getNombre() << endl;
    }
    cout << "--------------------------" << endl;
}

// Implementación para crear una nueva playlist
void Usuario::crearPlaylist() {
    string fail;
    string nombre;
    string genero;
    char aux = 34;

    (getline(cin, fail));


    cout << "Elige un nombre para la playlist: ";
    (getline(cin, nombre));
    cout << "Que genero tendra tu playlist? ";
    getline(cin, genero);

    Playlist nuevaPlaylist(nombre, nombreUsuario, genero);
    playlists.push_back(nuevaPlaylist);
    system("cls");
    cout << "La playlist " << aux << nuevaPlaylist.getNombre() << aux << " se ha creado exitosamente" << endl;
}

// Implementación para ir a una playlist específica
void Usuario::irAPlaylist() {
    char selection;
    int size = playlists.size();
    if (size == 0) {
      system("cls");
      cout << "No tienes ninguna playlist agregada" << endl;
    }
    else if (size >= 1){
        cout << "Ingresa el numero de la playlist a la que quieres ir: ";
        cin >> selection;
        if (selection - '0' < size && selection - '0' >= 0) {
            int x = selection - '0';
            system("cls");
            submenuPlaylist(x);
            return;
        }
    }
    else{
    system("cls");
    cout << "Esta no es una entrada valida, intenta de nuevo" << endl;
    }
}

// Implementación para eliminar una playlist
void Usuario::eliminarPlaylist() {
    char selection;
    char aux = 34;
    int size = playlists.size();
    if (size == 0) {
        system("cls");
        cout << "No tienes ninguna playlist agregada" << endl;
    }
    else if(size >= 1){
        cout << "Ingresa el numero de la playlist que quieres eliminar: ";
        cin >> selection;
        if (selection - '0' < size && selection - '0' >= 0) {
            int x = selection - '0';
            system("cls");
            cout << "La playlist " << aux << playlists[x].getNombre() << aux << " ha sido eliminada." << endl;
            playlists.erase(playlists.begin() + x);
            return;
        }
    }
    else{
    system("cls");
    cout << "Esta no es una entrada valida, intenta de nuevo" << endl;
    }
}

// Implementación del menú de submenú para la playlist
void Usuario::submenuPlaylist(int index) {
    playlists[index].info();
    char selection;
    if (playlists[index].getFavorito()) {
        selection = desplegarMenu("      Menu de " + playlists[index].getNombre() + "      ", {"Quitar de favoritos", "Agregar cancion", "Eliminar cancion", "Salir"}, true);
    }
    else {
        selection = desplegarMenu("      Menu de " + playlists[index].getNombre() + "      ", {"Agregar a favoritos", "Agregar cancion", "Eliminar cancion", "Salir"}, true);
    }

    if (selection == '1') {
        if (playlists[index].getFavorito()) {
            playlists[index].setFavorito(false);
            cout << playlists[index].getNombre() << " ha sido quitada de favoritos" << endl;
        }
        else {
            playlists[index].setFavorito(true);
            cout << playlists[index].getNombre() << " ha sido agregada a favoritos" << endl;
        }
        system("cls");
    }
    else if (selection == '2') {
        if (canciones.size() == 0) {
          system("cls");
          cout << "No tienes ninguna cancion agregada";
        }
        else {
            system("cls");
            cout << "Selecciona una cancion para agregar: " << endl;
            mostrarCanciones();
            cin >> selection;
            if (selection - '0' < canciones.size()) {
                playlists[index].agregarCancion(canciones[selection - '0']);
                system("cls");
                cout << canciones[selection-'0'].getNombre() << " ha sido agregada a " << playlists[index].getNombre() << endl;
            }
            else {
              system("cls");
              cout << "Selecciona una opcion valida";
            }
        }
    }
    else if (selection == '3') {
        vector<Cancion> cancionesPlaylist=playlists[index].getCanciones();
        if (cancionesPlaylist.size() == 0) {
          system("cls");
          cout << "No tienes ninguna cancion agregada";
        }
        else if (cancionesPlaylist.size() >= 1){
            cout << "Selecciona una cancion para eliminar: " << endl;
            cout << "Estas son las canciones en "<<playlists[index].getNombre()<<": "<< endl << endl;
            int counter = 0;
            for (Cancion i: cancionesPlaylist){
                cout << "(" <<counter<< ") ";
                cout<<i.getNombre()<<endl;
                counter+=1;
            }
            cout << "--------------------------" << endl;
            cin >> selection;
            if (selection - '0' < cancionesPlaylist.size()) {
                system("cls");
                cout<<"La cancion "<<cancionesPlaylist[selection-'0'].getNombre()<<" ha sido eliminada exitosamente"<<endl;
                playlists[index].eliminarCancion(cancionesPlaylist[selection - '0']);
            }
        }
        else {
                system("cls");
                cout << "Selecciona una opcion valida";
            }
    }
    else if (selection == '4') {
      system("cls");
      return;
    }
    else {
        system("cls");
        cout << "Seleccion invalida, intenta de nuevo" << endl << endl;
    }
    submenuPlaylist(index);
}

// Implementación del menú para las canciones
void Usuario::menuCancion() {
    desplegarMenu("   MENU CANCIONES      ", {"Ir a", "Subir", "Eliminar", "Salir"}, false);

    mostrarCanciones();

    char selection;
    cin >> selection;

    if (selection == '1') {
        irACancion();
    }
    else if (selection == '2') {
        subirCancion();
    }
    else if (selection == '3') {
        eliminarCancion();
    }
    else if (selection == '4') {
      system("cls");
      return;
    }
    else {
        cout << "Seleccion invalida, intenta de nuevo" << endl << endl;
    }
    menuCancion();
}

// Implementación para subir una nueva canción
void Usuario::subirCancion() {
    string nombre, genero, ruta;

    string fail;
    getline(cin, fail);

    cout << "Ingresa el nombre de la cancion: ";
    getline(cin, nombre);

    cout << "Ingresa el genero de la cancion: ";
    getline(cin, genero);

    cout << "Ingresa la ruta de la cancion: ";
    getline(cin, ruta);

    Cancion nuevaCancion(nombre, nombreUsuario, genero, ruta);
    system("cls");
    cout << "La cancion \""<<nuevaCancion.getNombre()<<"\" se ha subido exitosamente" << endl;
    canciones.push_back(nuevaCancion);
}

// Implementación para mostrar las canciones del usuario
void Usuario::mostrarCanciones() {
    cout << "Estas son tus canciones: " << endl << endl;
    cout << "Favoritas: " << endl;
    vector<int> index;
    int counter = 0;
    for (Cancion i : canciones) {
        if (i.getFavorito()) {
            cout << "(" << counter << ") ";
            cout << i.getNombre() << endl;
        }
        else {
            index.push_back(counter);
        }
        counter += 1;
    }
    cout << "--------------------------" << endl;
    cout << "No favoritas: " << endl;
    for (int i : index) {
        cout << "(" << i << ") ";
        cout << canciones[i].getNombre() << endl;
    }
    cout << "--------------------------" << endl;
}

// Implementación para ir a una canción específica
void Usuario::irACancion() {
    char selection;
    int size = canciones.size();
    if (size == 0) {
      system("cls");
      cout << "No tienes ninguna cancion agregada" << endl;
    }
    else if(size >=1){
        cout << "Ingresa el numero de la cancion a la que quieres ir: ";
        cin >> selection;

        if (selection - '0' < size && selection - '0' >= 0) {
            int x = selection - '0';
            system("cls");
            submenuCancion(x);
            return;
        }
    }
    else{
    system("cls");
    cout << "Esta no es una entrada valida, intenta de nuevo" << endl;
    }
}

// Implementación para eliminar una canción
void Usuario::eliminarCancion() {
    char selection;
    int size = canciones.size();
    if (size == 0) {
    system("cls");
        cout << "No tienes ninguna cancion agregada" << endl;
    }
    else if(size >=1){
        cout << "Ingresa el numero de la cancion que quieres eliminar: ";
        cin >> selection;
        if (selection - '0' < size && selection - '0' >= 0) {
            int x = selection - '0';
            system("cls");
            cout << "La cancion \"" << canciones[x].getNombre() << "\" ha sido eliminada." << endl;
            canciones.erase(canciones.begin() + x);
            return;
        }
    }
    else{
    system("cls");
    cout << "Esta no es una entrada valida, intenta de nuevo" << endl;
    }
}

// Implementación del menú de submenú para la canción
void Usuario::submenuCancion(int index) {
    canciones[index].info();
    char selection;
    if (canciones[index].getFavorito()) {
        selection = desplegarMenu("      Menu de " + canciones[index].getNombre() + "      ", {"Quitar de favoritos", "Cambiar ruta", "Salir"}, true);
    }
    else {
        selection = desplegarMenu("      Menu de " + canciones[index].getNombre() + "      ", {"Agregar a favoritos", "Cambiar ruta", "Salir"}, true);
    }

    if (selection == '1') {
        if (canciones[index].getFavorito()) {
            canciones[index].setFavorito(false);
            system("cls");
            cout <<"\""<<canciones[index].getNombre() << " \" ha sido quitada de favoritos" << endl;
        }
        else {
            canciones[index].setFavorito(true);
            system("cls");
            cout <<"\"" <<canciones[index].getNombre() << " \"ha sido agregada a favoritos" << endl;
        }
    }
    else if (selection == '2') {
        cout << "Ingresa la nueva ruta de la cancion: " << endl;
        string nuevaRuta;
        cin >> nuevaRuta;
        canciones[index].setRuta(nuevaRuta);
        system("cls");
        cout<<"La ruta se ha modificado exitosamente"<<endl;
    }
    else if (selection == '3') {
      system("cls");
      return;
    }
    else {
      system("cls");
      cout << "Seleccion invalida, intenta de nuevo" << endl << endl;
    }
    submenuCancion(index);
}


#endif
