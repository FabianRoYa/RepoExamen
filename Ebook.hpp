#ifndef EBOOK_HPP
#define EBOOK_HPP

#include <iostream>
#include <string>
#include "Autor.hpp"

class Ebook{
private:
    std::string title;
    int year;
    Autor autor;
public:
    Ebook();
    Ebook(std::string title, int year, Autor autor);
    std::string getTitle();
    int getYear();
    Autor getAutor();
    void setTitle(std::string title);
    void setYear(int year);
    void setAutor(Autor autor);
    void printEbook();
    int publishedYears(int currentYear);
    int equal(Autor autor);
};

#endif
