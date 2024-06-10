#include "Autor.hpp"

Autor::Autor() : name("Nombre Autor"), country("Pais Constructor"){}

Autor::Autor(std::string name, std::string country) : name(name), country(country){}

std::string Autor::getName(){
    return name;
}

std::string Autor::getCountry(){
    return country;
}

void Autor::setName(std::string name){
    this->name = name;
}

void Autor::setCountry(std::string country){
    this->country = country;
}

void Autor::printAutor(){
    std::cout << "Autor:" << name << ",Pais:" << country << std::endl;
}

int Autor::equal(Autor other){
    if (name == other.getName() && country == other.getCountry()) {
        return 1;
    } else {
        return 0;
    }
}
