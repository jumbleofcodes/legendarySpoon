//
// Created by 7herion on 13/12/2018.
//

#ifndef PROJECT_IMAGE_H
#define PROJECT_IMAGE_H

#include <string>

class Image {
public:
    virtual void createSimpleImage(std::string filename) = 0;
    virtual void openImage(std::string filename) = 0;
    virtual void saveImage(std::string filename) = 0;
    virtual void applyFilter() = 0;
};


#endif //PROJECT_IMAGE_H
