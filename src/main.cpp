#include "Emulator.hpp"

int main(int argc, char *argv[]) {
    Emulator *emulator = new Emulator();
    emulator->emulateFrame();
    delete emulator;
    return 0;
}
