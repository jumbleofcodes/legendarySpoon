//
// Created by 7herion on 13/12/2018.
//

#include "PixelPGM.h"

PixelPGM::PixelPGM(int _g) {
    this->g = _g;
}

PixelPGM::~PixelPGM() {
    // Distruttore di default
}

int PixelPGM::getG() const {
    return g;
}

void PixelPGM::setG(int g) {
    PixelPGM::g = g;
}
