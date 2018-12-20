//
// Created by 7herion on 13/12/2018.
//

#ifndef PROJECT_PIXELPGM_H
#define PROJECT_PIXELPGM_H

#include "Pixel.h"

class PixelPGM: public Pixel {
public:
    explicit PixelPGM(int _g);
    virtual ~PixelPGM();

    int getG() const;

    void setG(int g);

private:
    int g;
};


#endif //PROJECT_PIXELPGM_H
