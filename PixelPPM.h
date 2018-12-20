//
// Created by 7herion on 13/12/2018.
//

#ifndef PROJECT_PIXELPPM_H
#define PROJECT_PIXELPPM_H

#include "Pixel.h"

class PixelPPM: public Pixel {
public:
    PixelPPM(int _r, int _g, int _b);
    virtual ~PixelPPM();

    int getR() const;

    int getG() const;

    int getB() const;

    void setR(int r);

    void setG(int g);

    void setB(int b);

private:
    int r, g, b;
};


#endif //PROJECT_PIXELPPM_H
