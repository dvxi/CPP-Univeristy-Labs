#include "Song.h"

Song::Song(){
    std::cout << std::endl << "Wywolanie konstruktora Song..." << std::endl;
}

Song::Song(std::string newName){
    std::cout << std::endl << "Wywolanie konstruktora Song..." << std::endl;
    _name = newName;
}

Song::Song(std::string newName, double newX, double newY){
    std::cout << std::endl << "Wywolanie konstruktora Song..." << std::endl;
    _x = newX;
    _y = newY;
    _name = newName;
}

Song::~Song(){
    std::cout << std::endl << "Wywolanie konstruktora Song..." << std::endl;
}

void Song::Presentation(){
    std::cout << std::endl << "### Prezentacja piosenki ###" << std::endl
    << "Tytul: " << _name << std::endl
    << "Czas trwania: " << _x << std::endl
    << "Zyski z odtwarzania (w mln $): " << _y << std::endl;
}

void Song::SetName(std::string newName){
    _name = newName;
}

void Song::SetX(double newX){
    _x = newX;
}

void Song::SetY(double newY){
    _y = newY;
}

std::string Song::GetName() const{
    return _name;
}

double Song::GetX() const{
    return _x;
}

double Song::GetY() const{
    return _y;
}