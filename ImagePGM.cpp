//
// Created by 7herion on 13/12/2018.
//

#include "ImagePGM.h"

ImagePGM::ImagePGM() {
    this->width = 0;
    this->height = 0;
}

ImagePGM::ImagePGM(int w, int h) {
    this->width = w;
    this->height = h;
}

ImagePGM::~ImagePGM() {

}

void ImagePGM::createSimpleImage(std::string filename) {

    std::ofstream simpleImage(filename, std::ofstream::out);
    simpleImage << "P2" << std::endl;
    simpleImage << this->width << " " << this->height << std::endl;
    simpleImage << "255" << std::endl;

    for (int y = 0; y < this->height; y++) {
        for (int x = 0; x < this->width; x++) {

            int g = x % 255;

            simpleImage << g << std::endl;
        }
    }
    simpleImage.close();
}

void ImagePGM::openImage(std::string filename) {
    std::string str;
    std::string l2;

    int gg;

    std::ifstream ifs;
    ifs.open(filename);

    ifs >> str;
    ifs >> this->width >> this->height;
    ifs >> l2;

    if (str != "P2" || this->height == 0 || this->height == 0) {
        // TODO: Usare un avviso di wxWidgets invece del std::cout
        std::cout << "Impossibile aprire l'immagine!" << std::endl;
    } else {
        while (ifs >> gg) {
            PixelPGM* p2 = new PixelPGM(gg);
            this->img.push_back(p2);
        }
    }
}

void ImagePGM::saveImage(std::string filename) {
    std::ofstream outputImage(filename, std::ofstream::out);

    outputImage << "P2" << std::endl;
    outputImage << this->width << " " << this->height << std::endl;
    outputImage << "255" << std::endl;

    for (auto itr = this->img.begin(); itr != this->img.end(); itr++) {
        outputImage << (*itr)->getG() << std::endl;
    }

    outputImage.close();
}

void ImagePGM::applyFilter() {
    // TODO: Scrivere codice per applicare il filtro
    std::cout << "Applica un filtro all'immagine" << std::endl;
}