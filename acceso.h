#ifndef ACCESO_H
#define ACCESO_H

#include <string>
#include <vector>
#include <iostream>

#include "usuario.h"

using namespace std;

class Acceso {
private:
    vector<Usuario> usuarios;

public:
    // Constructor por omision
    Acceso();

    // Constructor con parámetros
    Acceso(vector<Usuario> usuarios);

    // Getter para obtener la lista de usuarios
    vector<Usuario> obtenerUsuarios();

    // Setter para actualizar la lista de usuarios
    void establecerUsuarios(vector<Usuario> usuarios);

    // Validar la existencia de un nombre de usuario
    int validarNombreUsuario(string nombreUsuario);

    // Validar la contraseña asociada a un nombre de usuario
    bool validarContrasena(int indice, string contrasena);

    // Iniciar sesión
    bool iniciarSesion();

    // Registrarse
    void registrarse();

    // Menú de bienvenida
    void menuBienvenida();

    // Menú principal después de iniciar sesión
    void menuPrincipal(int indiceUsuario);
};

// Implementación del constructor por omision
Acceso::Acceso() {}

// Implementación del constructor con parámetros
Acceso::Acceso(vector<Usuario> usuarios) : usuarios(usuarios) {}

// Implementación del getter para obtener la lista de usuarios
vector<Usuario> Acceso::obtenerUsuarios() {
    return usuarios;
}

// Implementación del setter para actualizar la lista de usuarios
void Acceso::establecerUsuarios(vector<Usuario> usuarios) {
    usuarios = usuarios;
}

// Implementación de la validación del nombre de usuario
int Acceso::validarNombreUsuario(string nombreUsuario) {
    int contador = 0;
    for (Usuario i : usuarios) {
        if (nombreUsuario == i.getNombreUsuario()) {
            return contador;
        }
        contador += 1;
    }
    return -1;
}

// Implementación de la validación de la contraseña
bool Acceso::validarContrasena(int indice, string contrasena) {
    if (indice == -1) {
        return false;
    } else if (usuarios[indice].getContrasena() == contrasena) {
        return true;
    }
    return false;
}

// Implementación del inicio de sesión
bool Acceso::iniciarSesion() {
    string usuario, contrasena, fallo;
    int u;
    bool c;
    (getline(cin, fallo));
    cout << "Ingrese su usuario: ";
    (getline(cin, usuario));
    cout << "Ingrese su contrasena: ";
    (getline(cin, contrasena));
    u = validarNombreUsuario(usuario);
    c = validarContrasena(u, contrasena);
    if (c == true) {
        system("cls");
        cout << "El inicio de sesion se ha realizado con exito" << endl;
        vector<string> nombresUsuarios;
        for (Usuario i : usuarios) {
            nombresUsuarios.push_back(i.getNombreUsuario());
        }
        usuarios[u].setNombresUsuarios(nombresUsuarios);
        menuPrincipal(u);
        return true;
    }
    system("cls");
    cout << "El nombre de usuario o la contrasena son incorrectos" << endl;
    return false;
}

// Implementación del registro de usuario
void Acceso::registrarse() {
    string usuario, contrasena, fallo;
    int validar;
    (getline(cin, fallo));

    cout << "Ingrese un nombre de usuario: ";
    (getline(cin, usuario));
    validar = validarNombreUsuario(usuario);
    if (validar == -1) {
        cout << "Ingrese una contrasena: ";
        (getline(cin, contrasena));

        system("cls");
        cout << "El registro se ha realizado con exito" << endl;
        Usuario usuarioNuevo(usuario, contrasena);
        usuarios.push_back(usuarioNuevo);
    } else {
        system("cls");
        cout << "El nombre de usuario ya existe" << endl;
        return;
    }
}

// Implementación del menú de bienvenida
void Acceso::menuBienvenida() {
    cout << "Iniciar sesion (I)" << endl << "Registrarse (R)" << endl;
    char seleccion;
    cin >> seleccion;
    bool validacion = false;

    system("cls");

    if (seleccion == 'I' || seleccion == 'i') {
        validacion = iniciarSesion();
    } else if (seleccion == 'R' || seleccion == 'r') {
        registrarse();
    } else {
        system("cls");
        cout << "Ingrese una seleccion valida " << endl;
    }
    if (validacion == false) {
        menuBienvenida();
    }
}

// Implementación del menú principal después de iniciar sesión
void Acceso::menuPrincipal(int u) {
    usuarios[u].menuPrincipal();
    menuBienvenida();
}

#endif