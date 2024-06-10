#include "Ebook.hpp"

Ebook::Ebook() : title("Default Title"), year(2000), autor() {}

Ebook::Ebook(std::string title, int year, Autor autor) : title(title), year(year), autor(autor) {}

std::string Ebook::getTitle() {
    return title;
}

int Ebook::getYear() {
    return year;
}

Autor Ebook::getAutor() {
    return autor;
}

void Ebook::setTitle(std::string title) {
    this->title = title;
}

void Ebook::setYear(int year) {
    this->year = year;
}

void Ebook::setAutor(Autor autor) {
    this->autor = autor;
}

void Ebook::printEbook() {
    std::cout << "Titulo: " << title << ", Anio: " << year << std::endl;
    autor.printAutor();
}

int Ebook::publishedYears(int currentYear) {
    return currentYear - year;
}

int Ebook::equal(Autor other) {
    return autor.equal(other);
}
