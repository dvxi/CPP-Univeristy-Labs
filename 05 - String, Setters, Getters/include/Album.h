#ifndef ALBUM_H
#define ALBUM_H

#include "Song.h"
#include <string>

class Album {
    public:
        Album();
        Album(std::string);
        Album(std::string, Song, Song, Song);
        Album(std::string, Song, Song, Song, Song);
        Album(std::string, int, Song *);

        ~Album();

        void Presentation();
        void SetName(std::string);
        void SetNewSongs(int, Song *);
        void SetSong(int, std::string, double, double);
        Song *GetSongs() const;
    private:
        std::string _name = "";
        int _count = 0;
        Song *_songs_array = nullptr;
};


#endif