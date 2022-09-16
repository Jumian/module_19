#include <iostream>
#include "fstream"
bool questions[13]={true,};
int last_pos=0;
int scorePlayers=0, scoreAudience=0;

std::string dir_path="C:\\Users\\Azamat\\CLionProjects\\Skillbox\\module_19\\Skillbox_cpp_19_5\\resources\\",
            question_filepath=dir_path+"questions.txt",
            answers_filepath=dir_path+"answers.txt";

void init(){
    for (int i=0;i<13;++i){
        questions[i]= true;
    }
}

void game(int shift) {
    int count=0;
    last_pos+=shift;
    while (last_pos<0) last_pos+=13;
    last_pos%=13;
    do {
        if (questions[last_pos])
            return;
        ++count;
        ++last_pos;
        if (last_pos >= 12)
            last_pos = 0;
    } while (count < 13);
}

std::string get_line(std::string filepath){
    int currLine=0;
    std::string str;
    char* st[200];
    std::ifstream file;
    file.open(filepath);
    for (;currLine<=last_pos;++currLine) {
        std::getline(file,str,'\n');
    }
    file.close();
    return str;
}

void printQuestion(){
    std::cout << get_line(question_filepath) << std::endl;
}

int inputShift(){
    int input=0;
    std::cout << "Input sector shift:";
    std::cin >> input;
    return input;
}

bool checkAnswer(std::string answer){
    return (get_line(answers_filepath) == answer);
}

std::string getAnswer(){
    std::string answer;
    std::cout << "Input player answer:\n" ;
    std::cin >> answer;
    return answer;
}
int main() {
    init();
   // std::cout << "questions file:"<<question_filepath << std::endl;
   // std::cout << "answer file:"<<answers_filepath<<std::endl;
    std::cout << "Welcome into \"What? Where? When?\" game!\n";
    do {
        game(inputShift());
        std::cout << "" << last_pos<<std::endl;
        printQuestion();
        questions[last_pos] = false;
        if (checkAnswer(getAnswer()))++scorePlayers;
        else ++scoreAudience;
        std::cout << "Score Player " << scorePlayers << ":" << scoreAudience << " Audience" << std::endl;
    } while (scorePlayers < 6 && scoreAudience < 6);
    if (scorePlayers>=6) std::cout << "Players win!" << std::endl;
    else std::cout << "Audience wins" << std::endl;
}
