#include "Ebook.hpp"
#include <iostream>

const int NUM = 1; 

void llenaArreglo(Ebook* arreglo, int tamano){
    for (int i = 0; i < tamano; ++i){
        std::string titulo, nombre, country;
        int year;
        std::cin.ignore(); 
        std::cout << "Introduce el título del Ebook: ";
        std::getline(std::cin, titulo);
        std::cout << "Introduce el año de publicación: ";
        std::cin >> year;
        std::cin.ignore();
        std::cout << "Introduce el nombre del autor: ";
        std::getline(std::cin, nombre);
        std::cout << "Introduce el país del autor: ";
        std::getline(std::cin, country);
        Autor autor(nombre, country);
        arreglo[i] = Ebook(titulo, year, autor);
    }
}

void imprimeArreglo(Ebook* arreglo, int tamano){
    for (int i = 0; i < tamano; ++i) {
        arreglo[i].printEbook();
    }
}

int main() {
    Ebook arreglo[NUM];
    llenaArreglo(arreglo, NUM);
    imprimeArreglo(arreglo, NUM);
    int currentYear = 2024;
    std::cout<<"Este Ebook tiene"<<arreglo[0].publishedYears(currentYear)<<"años de que fue publicado."<<std::endl;
    if (arreglo[0].getAutor().equal(arreglo[NUM - 1].getAutor())) {
        std::cout<<"El primer y el último Ebook pertenecen al mismo autor."<<std::endl;
    } else {
        std::cout<<"El primer y el último Ebook no pertenecen al mismo autor."<<std::endl;
    }

    return 0;
}
// pop
//hollaa