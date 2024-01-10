#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>

class Song {
    public:
        Song();
        Song(std::string);
        Song(std::string, double, double);

        ~Song();
        
        void Presentation();

        void SetName(std::string);
        void SetX(double);
        void SetY(double);

        std::string GetName() const;
        double GetX() const;
        double GetY() const;
    private:
        std::string _name = "";
        double _x = 0;
        double _y = 0;
};

#endif