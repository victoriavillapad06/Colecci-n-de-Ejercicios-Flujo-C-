//
// Created by victo on 11/12/2024.
//

#include "estados.h"
include <iostream>
#include <fstream>

int main() {
    std::ifstream file;
    file.open("example.txt");
    if (!file) {
        std::cerr << "No se pudo abrir el archivo.\n";
    } else {
        std::cout << "El archivo se abrió correctamente.\n";
    }
    file.close();
    return 0;
}