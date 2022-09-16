#include <iostream>
#include "fstream"
int main() {
    std::string filepath;
    std::cout << "Input filepath:" << std::endl;
    std::cin >> filepath;
    std::ifstream file;
    file.open(filepath);
    while (!file.eof()){
        std::string tmp;
        std::getline(file,tmp);
        std::cout << tmp<<std::endl;
    }
    file.close();
}
