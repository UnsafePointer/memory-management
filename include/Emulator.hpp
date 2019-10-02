#pragma once

class Emulator {
    static Emulator *instance;

    Emulator();
    ~Emulator();
public:
    static Emulator* getInstance();
    static void removeInstance();

    void emulateFrame();
};
