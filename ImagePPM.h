//
// Created by 7herion on 13/12/2018.
//

#ifndef PROJECT_IMAGEPPM_H
#define PROJECT_IMAGEPPM_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Image.h"
#include "PixelPPM.h"

class ImagePPM: public Image {

public:
    ImagePPM();
    ImagePPM(int h, int w);
    ~ImagePPM();

    void createSimpleImage(std::string filename) override;
    void openImage(std::string filename) override;
    void saveImage(std::string filename) override;

    void applyFilter() override;

private:
    int width;
    int height;
    std::vector<PixelPPM *> img;
};


#endif //PROJECT_IMAGEPPM_H
