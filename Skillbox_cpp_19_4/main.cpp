#include <iostream>
#include "fstream"

bool isPNGfile(std::string path){
    return path.substr(path.size()-3,3) == "png";
}

int main() {
    std::string filepath="";
    std::cout << "Input full filepath to check PNG files:" << std::endl;
    std::cin >> filepath;
    char secret[5]     = {0,},
         png_secret[4] = {'\x89','P','N','G'};
    std::ifstream file;

    file.open(filepath);
    file.read(secret, 4);
    file.close();
    uint32_t    a=*reinterpret_cast<uint32_t*>(png_secret),
                b=*reinterpret_cast<uint32_t*>(secret);
    if (isPNGfile(filepath) && a == b){
        std::cout << "This is a PNG file" << std::endl;
    } else if (a==b){
        std::cout << "This file consist png secret. May be wrong extension?" << std::endl;
    } else {
        std::cout << "This is not a PNG file" << std::endl;
    }
}
