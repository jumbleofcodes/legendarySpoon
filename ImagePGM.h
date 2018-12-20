//
// Created by 7herion on 13/12/2018.
//

#ifndef PROJECT_IMAGEPGM_H
#define PROJECT_IMAGEPGM_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Image.h"
#include "PixelPGM.h"

class ImagePGM: public Image {

public:
    ImagePGM();
    ImagePGM(int w, int h);
    ~ImagePGM();

    void createSimpleImage(std::string filename) override;
    void openImage(std::string filename) override;
    void saveImage(std::string filename) override;

    void applyFilter() override;

private:
    int width;
    int height;
    std::vector<PixelPGM *> img;
};


#endif //PROJECT_IMAGEPGM_H
