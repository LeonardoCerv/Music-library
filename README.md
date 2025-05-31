> 📖 🇪🇸 También disponible en español: [README.es.md](README.es.md)

# Music Library Management System

A C++ console application that provides a complete music library management solution with user authentication, personal music collections, and playlist organization. This project demonstrates object-oriented programming principles and data structure implementation in a practical, real-world context.

## Overview

This music library system allows users to create accounts, upload their personal music collections, organize songs into custom playlists, and manage their musical preferences. Unlike traditional streaming services with limited customization, this application gives users complete control over their music organization and sharing capabilities.

The system implements a social aspect where users can view other users' music collections while maintaining individual account security and personalized music experiences.

## Features

- **User Authentication System**: Secure registration and login functionality with username validation and password protection
- **Personal Music Management**: Upload, organize, and manage individual song collections with metadata (title, artist, genre, file path)
- **Playlist Creation**: Build custom playlists with songs from personal library, including favorites categorization
- **Interactive Console Interface**: Intuitive menu-driven navigation system with input validation and error handling
- **Data Persistence**: User sessions maintain state throughout program execution
- **Music Library Sharing**: View and explore other users' music collections (future enhancement ready)

## Technical Architecture

### Object-Oriented Design
The application follows a clean separation of concerns using inheritance and encapsulation:

- **`Musica` (Base Class)**: Abstract representation of musical content with common attributes (name, author, genre, duration, likes, favorites)
- **`Cancion` (Song Class)**: Inherits from `Musica`, adds file path management for individual tracks
- **`Playlist` (Playlist Class)**: Inherits from `Musica`, manages collections of songs with dynamic add/remove functionality
- **`Usuario` (User Class)**: Handles user account management, authentication, and personal music library operations
- **`Acceso` (Access Class)**: Manages application entry point, user registration, login validation, and session control

### Key Programming Concepts Demonstrated

1. **Inheritance Hierarchy**: Implemented a logical inheritance structure where `Cancion` and `Playlist` both extend `Musica`, showcasing code reusability and polymorphic design
2. **Data Structure Management**: Utilized STL vectors for dynamic collection management of users, songs, and playlists
3. **Input Validation & Error Handling**: Comprehensive validation for user inputs, duplicate username checking, and boundary condition handling
4. **Menu-Driven Architecture**: Recursive menu system with state management and user experience optimization
5. **Encapsulation**: Private member variables with public accessor methods following C++ best practices
6. **Memory Management**: Proper object lifecycle management and efficient data passing techniques

## Build and Run

```bash
# Compile the project
g++ -o music_library main.cpp

# Run the application
./music_library
```

### System Requirements
- C++11 or later
- Standard Template Library (STL) support
- Console/terminal environment

## Class Structure

![Class Diagram](Clase%20UML.png)

The UML diagram illustrates the inheritance relationships and class dependencies that form the foundation of this music management system.

## Usage Example

1. **Start Application**: Run the executable and choose to register a new account or login
2. **Create Account**: Enter a unique username and password
3. **Upload Music**: Add songs to your personal library with metadata
4. **Build Playlists**: Create themed playlists and add songs from your library
5. **Manage Favorites**: Mark songs and playlists as favorites for quick access
6. **Update Preferences**: Modify account settings, song information, or playlist contents

## Learning Outcomes & Competencies

This project directly addresses several key academic competencies:

**SICT0302 - Complex Problem Solving**: Designed and implemented a comprehensive solution for music library management, breaking down the complex problem of digital music organization into manageable, object-oriented components.

**SICT0303 - Solution Implementation**: Successfully implemented the designed solution using C++ programming tools, demonstrating practical application of object-oriented principles, data structures, and user interface design.

**SICT0401 - Professional Standards**: Applied software engineering best practices including proper class design, code documentation, error handling, and maintainable code structure following industry standards.

**SEG0702 - Technology Evaluation**: Evaluated and selected appropriate C++ features and STL components to create an efficient, scalable solution for music library management.

## Personal Reflection

Building this music library system challenged me to think about software architecture from a user-centered perspective. The most significant learning came from designing the inheritance hierarchy – understanding when to use inheritance versus composition, and how to structure classes to maximize code reusability while maintaining clear, logical relationships.

The input validation and menu system implementation taught me valuable lessons about user experience design in console applications. Handling edge cases, like duplicate usernames or empty playlists, required careful consideration of program flow and error recovery strategies.

Working with STL vectors for dynamic data management was particularly rewarding, as it demonstrated how C++'s built-in data structures can elegantly solve real-world problems. The challenge of maintaining program state across different menu levels helped me understand the importance of careful data flow design.

This project solidified my understanding of object-oriented programming principles while providing practical experience in building a complete, functional application. It represents a significant step in my journey toward becoming a proficient software engineer, combining theoretical knowledge with hands-on implementation skills.

## Future Enhancements

- MP3 file playback integration
- Persistent data storage (file or database)
- Enhanced user sharing and social features
- Graphical user interface implementation
- Advanced playlist management (shuffle, repeat modes)
