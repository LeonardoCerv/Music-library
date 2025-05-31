# Sistema de Gestión de Biblioteca Musical

Una aplicación de consola en C++ que proporciona una solución completa de gestión de biblioteca musical con autenticación de usuarios, colecciones musicales personales y organización de listas de reproducción. Este proyecto demuestra principios de programación orientada a objetos e implementación de estructuras de datos en un contexto práctico del mundo real.

## Descripción General

Este sistema de biblioteca musical permite a los usuarios crear cuentas, cargar sus colecciones musicales personales, organizar canciones en listas de reproducción personalizadas y gestionar sus preferencias musicales. A diferencia de los servicios de streaming tradicionales con personalización limitada, esta aplicación otorga a los usuarios control completo sobre la organización y capacidades de compartir su música.

El sistema implementa un aspecto social donde los usuarios pueden ver las colecciones musicales de otros usuarios mientras mantienen la seguridad individual de las cuentas y experiencias musicales personalizadas.

## Características

- **Sistema de Autenticación de Usuarios**: Funcionalidad segura de registro e inicio de sesión con validación de nombres de usuario y protección de contraseñas
- **Gestión Musical Personal**: Cargar, organizar y gestionar colecciones individuales de canciones con metadatos (título, artista, género, ruta de archivo)
- **Creación de Listas de Reproducción**: Construir listas de reproducción personalizadas con canciones de la biblioteca personal, incluyendo categorización de favoritos
- **Interfaz de Consola Interactiva**: Sistema de navegación intuitiva basada en menús con validación de entrada y manejo de errores
- **Persistencia de Datos**: Las sesiones de usuario mantienen el estado durante toda la ejecución del programa
- **Compartir Biblioteca Musical**: Ver y explorar las colecciones musicales de otros usuarios (listo para mejoras futuras)

## Arquitectura Técnica

### Diseño Orientado a Objetos
La aplicación sigue una separación limpia de responsabilidades usando herencia y encapsulación:

- **`Musica` (Clase Base)**: Representación abstracta del contenido musical con atributos comunes (nombre, autor, género, duración, likes, favoritos)
- **`Cancion` (Clase Canción)**: Hereda de `Musica`, añade gestión de rutas de archivo para pistas individuales
- **`Playlist` (Clase Lista de Reproducción)**: Hereda de `Musica`, gestiona colecciones de canciones con funcionalidad dinámica de agregar/eliminar
- **`Usuario` (Clase Usuario)**: Maneja la gestión de cuentas de usuario, autenticación y operaciones de biblioteca musical personal
- **`Acceso` (Clase Acceso)**: Gestiona el punto de entrada de la aplicación, registro de usuarios, validación de inicio de sesión y control de sesiones

### Conceptos de Programación Clave Demostrados

1. **Jerarquía de Herencia**: Implementé una estructura de herencia lógica donde tanto `Cancion` como `Playlist` extienden `Musica`, mostrando reutilización de código y diseño polimórfico
2. **Gestión de Estructuras de Datos**: Utilicé vectores STL para gestión dinámica de colecciones de usuarios, canciones y listas de reproducción
3. **Validación de Entrada y Manejo de Errores**: Validación comprensiva para entradas de usuario, verificación de nombres de usuario duplicados y manejo de condiciones límite
4. **Arquitectura Basada en Menús**: Sistema de menús recursivo con gestión de estados y optimización de experiencia de usuario
5. **Encapsulación**: Variables miembro privadas con métodos de acceso públicos siguiendo las mejores prácticas de C++
6. **Gestión de Memoria**: Gestión adecuada del ciclo de vida de objetos y técnicas eficientes de paso de datos

## Compilación y Ejecución

```bash
# Compilar el proyecto
g++ -o music_library main.cpp

# Ejecutar la aplicación
./music_library
```

### Requisitos del Sistema
- C++11 o posterior
- Soporte para Standard Template Library (STL)
- Entorno de consola/terminal

## Estructura de Clases

![Diagrama de Clases](Clase%20UML.png)

El diagrama UML ilustra las relaciones de herencia y dependencias de clases que forman la base de este sistema de gestión musical.

## Ejemplo de Uso

1. **Iniciar Aplicación**: Ejecutar el programa y elegir registrar una nueva cuenta o iniciar sesión
2. **Crear Cuenta**: Ingresar un nombre de usuario único y contraseña
3. **Cargar Música**: Añadir canciones a tu biblioteca personal con metadatos
4. **Construir Listas de Reproducción**: Crear listas temáticas y añadir canciones de tu biblioteca
5. **Gestionar Favoritos**: Marcar canciones y listas de reproducción como favoritas para acceso rápido
6. **Actualizar Preferencias**: Modificar configuración de cuenta, información de canciones o contenido de listas

## Resultados de Aprendizaje y Competencias

Este proyecto aborda directamente varias competencias académicas clave:

**SICT0302 - Resolución de Problemas Complejos**: Diseñé e implementé una solución comprensiva para la gestión de bibliotecas musicales, desglosando el problema complejo de organización musical digital en componentes manejables y orientados a objetos.

**SICT0303 - Implementación de Soluciones**: Implementé exitosamente la solución diseñada usando herramientas de programación C++, demostrando aplicación práctica de principios orientados a objetos, estructuras de datos y diseño de interfaz de usuario.

**SICT0401 - Estándares Profesionales**: Apliqué mejores prácticas de ingeniería de software incluyendo diseño adecuado de clases, documentación de código, manejo de errores y estructura de código mantenible siguiendo estándares de la industria.

**SEG0702 - Evaluación de Tecnologías**: Evalué y seleccioné características apropiadas de C++ y componentes STL para crear una solución eficiente y escalable para la gestión de bibliotecas musicales.

## Reflexión Personal

Construir este sistema de biblioteca musical me desafió a pensar sobre la arquitectura de software desde una perspectiva centrada en el usuario. El aprendizaje más significativo vino del diseño de la jerarquía de herencia – entender cuándo usar herencia versus composición, y cómo estructurar clases para maximizar la reutilización de código mientras mantengo relaciones claras y lógicas.

La implementación del sistema de validación de entrada y menús me enseñó lecciones valiosas sobre diseño de experiencia de usuario en aplicaciones de consola. Manejar casos extremos, como nombres de usuario duplicados o listas de reproducción vacías, requirió consideración cuidadosa del flujo del programa y estrategias de recuperación de errores.

Trabajar con vectores STL para gestión dinámica de datos fue particularmente gratificante, ya que demostró cómo las estructuras de datos integradas de C++ pueden resolver elegantemente problemas del mundo real. El desafío de mantener el estado del programa a través de diferentes niveles de menú me ayudó a entender la importancia del diseño cuidadoso del flujo de datos.

Este proyecto solidificó mi comprensión de los principios de programación orientada a objetos mientras proporcionaba experiencia práctica en la construcción de una aplicación completa y funcional. Representa un paso significativo en mi camino hacia convertirme en un ingeniero de software competente, combinando conocimiento teórico con habilidades de implementación práctica.

## Mejoras Futuras

- Integración de reproducción de archivos MP3
- Almacenamiento persistente de datos (archivo o base de datos)
- Características mejoradas de usuario y funciones sociales
- Implementación de interfaz gráfica de usuario
- Gestión avanzada de listas de reproducción (modos aleatorio, repetición)
