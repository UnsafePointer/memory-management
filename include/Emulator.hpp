#pragma once
#include "CPU.hpp"
#include "RAM.hpp"

class Emulator {
    static Emulator *instance;

    CPU *cpu;
    RAM *ram;
    Emulator();
    ~Emulator();
public:
    static Emulator* getInstance();
    static void removeInstance();

    void emulateFrame();
};
