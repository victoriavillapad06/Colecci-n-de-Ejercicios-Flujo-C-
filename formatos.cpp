//
// Created by victo on 11/12/2024.
//

#include "formatos.h"
#include <iostream>
#include <iomanip>

int main() {
    double num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El número ingresado es: " << std::fixed << std::setprecision(2) << num << std::endl;
    return 0;
}