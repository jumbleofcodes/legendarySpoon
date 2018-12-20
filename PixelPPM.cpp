//
// Created by 7herion on 13/12/2018.
//

#include "PixelPPM.h"

PixelPPM::PixelPPM(int _r, int _g, int _b) {
    this->r = _r;
    this->g = _g;
    this->b = _b;
}

PixelPPM::~PixelPPM() {
    // Distruttore di default
}

int PixelPPM::getR() const {
    return r;
}

int PixelPPM::getG() const {
    return g;
}

int PixelPPM::getB() const {
    return b;
}

void PixelPPM::setR(int r) {
    PixelPPM::r = r;
}

void PixelPPM::setG(int g) {
    PixelPPM::g = g;
}

void PixelPPM::setB(int b) {
    PixelPPM::b = b;
}
