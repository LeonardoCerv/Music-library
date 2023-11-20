#ifndef SONG_H
#define SONG_H

#include <string>
#include <iostream>

#include "music.h"

using namespace std;

class Song : public Music {
private:
    string route;
    // Add any additional attributes specific to Song

public:
    // Constructors
    Song();
    Song(string nm, string thr, string gnr, int drtn, string rt, bool fvrt);

    // Getter and setter for the new attribute
    string get_route();
    void set_route(string rt);

    // Additional methods if needed
    void info();
    int play_song();
};

// Implementation of the Song class


Song::Song(string nm, string thr, string gnr, int drtn, string rt, bool fvrt)
    : Music(nm, thr, 0, gnr, drtn, fvrt), route(rt) {
    // Initialize any additional attributes specific to Song
}

// Getter and setter for the new attribute
string Song::get_route() {
    return route;
}

void Song::set_route(string rt) {
    route = rt;
}

// Additional methods or overrides
void Song::info() {
    cout << "Song: " << get_name() << " -" << get_author() << endl;
    cout << "Genre: " << get_genre() << " Duration: " << get_duration() << endl;
    cout << "Stored at: " << route << endl;
}

int Song::play_song() {
    // Implement play_song() if needed
    return 0;
}

#endif