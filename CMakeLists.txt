cmake_minimum_required(VERSION 3.12)
project(project)

set(CMAKE_CXX_STANDARD 11)

add_executable(project main.cpp Pixel.cpp Pixel.h PixelPPM.cpp PixelPPM.h
        ImagePPM.cpp ImagePPM.h Image.cpp Image.h PixelPGM.cpp PixelPGM.h ImagePGM.cpp ImagePGM.h ImageTemplate.h)

# find_package(wxWidgets REQUIRED COMPONENTS net core base)
# include(${wxWidgets_USE_FILE})
# target_link_libraries(project ${wxWidgets_LIBRARIES})