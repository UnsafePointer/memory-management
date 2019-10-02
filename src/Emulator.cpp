#include "Emulator.hpp"
#include <iostream>

Emulator::Emulator() {
    std::cout << "Emulator()" << std::endl;
    ram = new RAM();
    cpu = new CPU(ram);
}

Emulator::~Emulator() {
    delete ram;
    delete cpu;
    std::cout << "~Emulator()" << std::endl;
}

Emulator* Emulator::instance = nullptr;
Emulator* Emulator::getInstance() {
    if (instance == nullptr) {
        instance = new Emulator();
    }
    return instance;
}

void Emulator::removeInstance() {
    delete instance;
    instance = nullptr;
}

void Emulator::emulateFrame() {
    std::cout << "emulateFrame()" << std::endl;
    cpu->executeNextInstruction();
}
