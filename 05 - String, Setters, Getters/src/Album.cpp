#include "Album.h"

Album::Album(){
    std::cout << std::endl << "Wywolanie konstruktora Album..." << std::endl;
}

Album::Album(std::string newName){
    std::cout << std::endl << "Wywolanie konstruktora Album..." << std::endl;
    _name = newName;
}

Album::Album(std::string newName, Song p1, Song p2, Song p3){
    std::cout << std::endl << "Wywolanie konstruktora Album..." << std::endl;
    _name = newName;
    _count = 3;
    _songs_array = new Song[3];
    _songs_array[0] = p1;
    _songs_array[1] = p2;
    _songs_array[2] = p3;
}

Album::Album(std::string newName, Song p1, Song p2, Song p3, Song p4){
    std::cout << std::endl << "Wywolanie konstruktora Album..." << std::endl;
    _name = newName;
    _count = 4;
    _songs_array = new Song[4];
    _songs_array[0] = p1;
    _songs_array[1] = p2;
    _songs_array[2] = p3;
    _songs_array[3] = p4;
}

Album::Album(std::string newName, int count, Song *newSongsArray){
    std::cout << std::endl << "Wywolanie konstruktora Album..." << std::endl;
    _name = newName;
    _songs_array = new Song[count];
    for(int i = 0; i < count; i++){
        _songs_array[i] = newSongsArray[i];
    }
}

Album::~Album(){
    std::cout << std::endl << "Wywolanie konstruktora Album..." << std::endl;
    delete[] _songs_array;
}

void Album::Presentation(){
    std::cout << std::endl << "### Prezentacja albumu ###" << std::endl
    << "Nazwa: " << _name << std::endl
    << "Liczba piosenek: " << _count << std::endl;
    for(int i = 0; i < _count; i++){
        std::cout << "Piosenka - tytul: " << _songs_array[i].GetName()
        << ", czas trwania = " << _songs_array[i].GetX() 
        << ", zyski z odtwarzania (w mln $): " << _songs_array[i].GetY() << std::endl;
    }
}

void Album::SetName(std::string newName){
    _name = newName;
}

void Album::SetNewSongs(int count, Song *newSongs){
    delete[] _songs_array;
    _songs_array = new Song[count];
    _count = count;
    for(int i = 0; i < count; i++){
        _songs_array[i] = newSongs[i];
    }
}

void Album::SetSong(int id, std::string songName, double x, double y){
    if(id > _count) return;
    if(id == 0){
        _count += 1;
        Song newSong(songName, x, y);
        Song temp[_count];

        for(int i = 0; i < _count - 1; i++){
            temp[i] = _songs_array[i];
        }
        temp[_count - 1] = newSong;

        delete[] _songs_array;
        _songs_array = new Song[_count];

        for(int i = 0; i < _count; i++){
            _songs_array[i] = temp[i];
        }

    } else {
        Song newSong(songName, x, y);
        _songs_array[id - 1] = newSong;
    }
}

Song *Album::GetSongs() const{
    return _songs_array;
}