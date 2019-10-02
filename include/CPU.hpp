#pragma once
#include "RAM.hpp"

class CPU {
    RAM *ram;
public:
    CPU(RAM *ram);
    ~CPU();

    void executeNextInstruction();
};
