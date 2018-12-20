//
// Created by 7herion on 13/12/2018.
//

#include "ImagePPM.h"

ImagePPM::ImagePPM() {
    this->height = 0;
    this->width = 0;
}

ImagePPM::ImagePPM(int h, int w) {
    this->height = h;
    this->width = w;
}

ImagePPM::~ImagePPM() {

}

void ImagePPM::createSimpleImage(std::string filename) {

    std::ofstream simpleImage(filename, std::ofstream::out);
    simpleImage << "P3" << std::endl;
    simpleImage << this->width << " " << this->height << std::endl;
    simpleImage << "255" << std::endl;

    for (int y = 0; y < this->height; y++) {
        for (int x = 0; x < this->width; x++) {

            int r = (x + y) % 255;
            int g = x % 255;
            int b = y % 255;

            simpleImage << r << " " << g << " " << b << std::endl;
        }
    }
    simpleImage.close();
}

void ImagePPM::openImage(std::string filename) {
    std::string str;
    std::string l2;

    int rr, gg, bb;

    std::ifstream ifs;
    ifs.open(filename);

    ifs >> str;
    ifs >> this->width >> this->height;
    ifs >> l2;

    if (str != "P3" || this->height == 0 || this->height == 0) {
        // TODO: Usare un avviso di wxWidgets invece del std::cout
        std::cout << "Impossibile aprire l'immagine!" << std::endl;
    } else {
        while (ifs >> rr >> gg >> bb) {
            PixelPPM* p2 = new PixelPPM(rr, gg, bb);
            this->img.push_back(p2);
        }
    }
}

void ImagePPM::saveImage(std::string filename) {
    std::ofstream outputImage(filename, std::ofstream::out);

    outputImage << "P3" << std::endl;
    outputImage << this->width << " " << this->height << std::endl;
    outputImage << "255" << std::endl;

    for (auto itr = this->img.begin(); itr != this->img.end(); itr++) {
        outputImage << (*itr)->getR() << " " << (*itr)->getG() << " " << (*itr)->getB() << std::endl;
    }

    outputImage.close();
}

void ImagePPM::applyFilter() {
    // TODO: Scrivere codice per applicare il filtro
    std::cout << "Applica un filtro all'immagine" << std::endl;
}