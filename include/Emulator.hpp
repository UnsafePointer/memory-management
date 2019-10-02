#pragma once
#include "CPU.hpp"

class Emulator {
    static Emulator *instance;

    CPU *cpu;
    Emulator();
    ~Emulator();
public:
    static Emulator* getInstance();
    static void removeInstance();

    void emulateFrame();
};
