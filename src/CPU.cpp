#include "CPU.hpp"
#include <iostream>

CPU::CPU(RAM *ram) : ram(ram) {
    std::cout << "CPU()" << std::endl;
}

CPU::~CPU() {
    std::cout << "~CPU()" << std::endl;
}

void CPU::executeNextInstruction() {
    std::cout << "executeNextInstruction()" << std::endl;
    ram->loadFromMemory();
}
