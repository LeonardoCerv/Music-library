#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>
#include <iostream>

#include "music.h"

using namespace std;

class Playlist : public Music {
private:
    vector<string> songs;

public:
    Playlist();
    // Constructor for Playlist
    Playlist(string nm, string thr, int lks, string gnr, int drtn, bool fvrt): Music(nm, thr, lks, gnr, drtn, fvrt) {
        // You can initialize additional attributes specific to Playlist here
        songs = {};
    };

    Playlist(string nm, string thr, int lks, string gnr, vector<string> sngs, int drtn, bool fvrt): Music(nm, thr, lks, gnr, drtn, fvrt), songs(sngs) {}

    // Additional functions specific to Playlist
    vector<string> get_songs();
    void set_songs(vector<string>);

    void info();
};

// Additional getters and setters
vector<string> Playlist::get_songs() {
    return songs;
}

void Playlist::set_songs(vector<string> sngs) {
    songs = sngs;
}

void Playlist::info() {
    char aux = 34;
    cout << aux << get_name() << aux << " from: " << get_author() << endl
         << "Songs:" << endl;

    if (songs.empty()) {
        cout << get_name() << " has no songs added." << endl;
    } else {
        for (string i : songs) {
            cout << i << endl;
        }
    }

    cout << "duration: " << get_duration() << " minutes" << endl
         << endl;
}

#endif