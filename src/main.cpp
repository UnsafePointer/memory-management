#include "Emulator.hpp"

int main(int argc, char *argv[]) {
    Emulator *emulator = Emulator::getInstance();
    emulator->emulateFrame();
    Emulator::removeInstance();
    return 0;
}
