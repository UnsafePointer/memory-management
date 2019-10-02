#include "Emulator.hpp"
#include <iostream>

Emulator::Emulator() {
    std::cout << "Emulator()" << std::endl;
}

Emulator::~Emulator() {
    std::cout << "~Emulator()" << std::endl;
}

void Emulator::emulateFrame() {
    std::cout << "emulateFrame()" << std::endl;
}
