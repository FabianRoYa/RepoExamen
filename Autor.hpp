#ifndef AUTOR_HPP
#define AUTOR_HPP

#include <iostream>
#include <string>

class Autor{
private:
    std::string name;
    std::string country;

public:
    Autor();
    Autor(std::string name, std::string country);
    //Getter
    std::string getName();
    std::string getCountry();
    //Setters
    void setName(std::string name);
    void setCountry(std::string country);
    void printAutor();
    int equal(Autor other);
};

#endif
