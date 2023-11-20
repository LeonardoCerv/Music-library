# Music-library

Es una libreria de musica en donde puedes organizar las canciones que te gustan, las puedes compartir con otras personas e incluso ver las canciones que otros tienen guardadas.

Se tiene pensado, adicional a lo anteriormente mencionado, implementar un reproductor de archivos mp3, para que el programa pueda reproducir las canciones que quieras.

El problema es que los reproductores de musica actuales, no te dejan organizar o guardar la musica que tu quieras, sino que ellos te dan una seleccion, se busca que con este programa, tu seas quien sube tu musica y quien la puede escuchar en el orden que quiera y poder compartirla con otra gente, y tener un perfil como el de cualquier red social, pero enfocado a la musica.

---------------------------------------------------------------------------------------------------------------------------------------

# Codigo

Todos los archivos utilizados, se encuentran dentro del repositorio y la version actual del ejecutable tiene como nombre "main.exe"

---------------------------------------------------------------------------------------------------------------------------------------

# Diagrama de clases

+------------------+      +---------------+      +------------------+      +--------------+
|      Access      |      |      User     |      |      Playlist    |      |     Song     |
+------------------+      +---------------+      +------------------+      +--------------+
| - usernames: vector<string> | - username: string    | - name: string     | - name: string|
| - passwords: vector<string> | - password: string    | - author: string   | - author: string|
| - currentUser: User         | - playlists: vector<Playlist> | - songs: vector<string> | - genre: string |
|                          | - songs: vector<Song>  | - favorite: bool   | - duration: int|
|                          |                       |                    | - favorite: bool|
|                          |                       |                    | - route: string|
+------------------+      +---------------+      +------------------+      +--------------+
| + get_usernames(): vector<string> | + get_username(): string | + get_name(): string | + get_name(): string |
| + get_passwords(): vector<string> | + get_password(): string | + get_author(): string | + get_author(): string |
| + get_currentUser(): User    | + get_playlists(): vector<Playlist> | + get_songs(): vector<string> | + get_genre(): string |
| + set_usernames(vector<string>) | + set_username(string) | + set_name(string) | + set_author(string) |
| + set_passwords(vector<string>) | + set_password(string) | + set_author(string) | + set_likes(int) |
| + set_currentUser(User)       | + set_playlists(vector<Playlist>) | + set_songs(vector<string>) | + set_genre(string) |
| + info(): void               | + info(): void         | + info(): void       | + set_duration(int) |
| + add_username(string): bool  | + addPlaylist(vector<Playlist>): void | + play_song(): int   | + set_favorite(bool) |
| + add_password(string): void  | + main_menu(): void    | + create_playlist(): void | + get_favorite(): bool |
| + validate_username(string): int | + username_menu(): void | + go_to_playlist(): void | + get_duration(): int |
| + validate_password(int, string): bool | + password_menu(): void | + delete_playlist(): void | + get_route(): string |
| + sign_in(): bool             | + playlist_menu(): void | + show_playlists(): void | + set_route(string) |
| + sign_up(): void             | + song_menu(): void    | + upload_song(): void | + info(): void |
| + welcome_menu(): void        | + show_username(): void | + show_songs(): void  | + play_song(): int |
+------------------+      | + modify_username(): void | + go_to_song(): void | |
                        | + show_password(): void | + delete_song(): void | |
                        | + modify_password(): void | + play_song(): void  | |
                        | + create_playlist(): void |                   | |
                        | + show_playlists(): void |                   | |
                        | + addPlaylist(vector<Playlist>): void |       | |
                        | + go_to_playlist(): void |                   | |
                        | + delete_playlist(): void |                   | |
                        | + upload_song(): void    |                   | |
                        | + show_songs(): void     |                   | |
                        | + go_to_song(): void     |                   | |
                        | + delete_song(): void    |                   | |
                        | + play_song(): void      |                   | |
                        +------------------+      +------------------+      +--------------+