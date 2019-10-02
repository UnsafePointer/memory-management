#include "RAM.hpp"
#include <iostream>

RAM::RAM() {
    std::cout << "RAM()" << std::endl;
}

RAM::~RAM() {
    std::cout << "~RAM()" << std::endl;
}

void RAM::loadFromMemory() {
    std::cout << "loadFromMemory()" << std::endl;
}
