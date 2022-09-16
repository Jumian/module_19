#include <iostream>
#include "fstream"

int main() {
    std::string match_word, current_word;
    int counter=0;
    char* filename = "C:\\Users\\Azamat\\CLionProjects\\Skillbox\\module_19\\Skillbox_cpp_19_1\\words.txt";
    std::cout << "Input word to count:" << std::endl;
    std::cin >> match_word;
    std::ifstream words;
    words.open(filename);
    while(!words.eof()){
        words >> current_word;
        if (current_word==match_word) ++counter;
    }
    std::cout << "Matches: " << counter << std::endl;
    words.close();
}
