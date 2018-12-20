#include <fstream>
#include <iostream>
#include <vector>

// Struttura dati di un pixel per immagini RGB

struct Pixxel {
    int r, g, b;
    Pixxel(int _r, int _g, int _b) {
        r = _r;
        g = _g;
        b = _b;
    }
};

int main() {

    // Generazione di un'immagine

    int w = 255;
    int h = 255;

    std::ofstream img("picture.ppm", std::ofstream::out);
    img << "P3" << std::endl;
    img << w << " " << h << std::endl;
    img << "255" << std::endl;

    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {

            int r = (x + y) % 255;
            int g = x % 255;
            int b = y % 255;

            Pixxel *p = new Pixxel(r, g, b);
            img << p->r << " " << p->g << " " << p->b << std::endl;
        }
    }

    img.close();

    // Lettura di un'immagine

    std::string str;
    int w2;
    int h2;
    std::string l2;
    int rr, gg, bb;
    std::vector<Pixxel *> pic2;

    std::ifstream ifs;
    ifs.open("picture.ppm");

    ifs >> str;
    ifs >> w2 >> h2;
    ifs >> l2;

    // Operazioni di modifica dei pixel durante la lettura
    // tipo qui si possono mettere i filtri ai pixel

    while (ifs >> rr >> gg >> bb) {
        int rrr = 255 - rr;
        int ggg = 255 - gg;
        int bbb = 255 - bb;
        Pixxel *p2 = new Pixxel(rrr, ggg, bbb);
        pic2.push_back(p2);
    }

    // std::cout << "Width 2: " << w2 << std::endl;
    // std::cout << "Height 2: " << h2 << std::endl;
    // std::cout << "Profondità: " << l2 << std::endl;

    // Sovrascrizione dell'immagine output precedente, lettura ancora in corso

    std::ofstream img2("picture.ppm", std::ofstream::out);
    img2 << str << std::endl;
    img2 << w2 << " " << h2 << std::endl;
    img2 << l2 << std::endl;

    for (int i = 0; i < pic2.size(); i++) {
        Pixxel* pp = pic2[i];
        img2 << pp->r << " " << pp->g << " " << pp->b << std::endl;
    }

    img2.close();

    ifs.close();

    return 0;
}