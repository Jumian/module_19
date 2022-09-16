#include "iostream"
#include "fstream"
#include "vector"

const std::string const_filepath = "C:\\Users\\Azamat\\CLionProjects\\Skillbox\\module_19\\Skillbox_cpp_19_3\\resources\\test.txt";

void readFile(std::string filepath,
              std::vector<std::string> &firstName,
              std::vector<std::string> &familyName,
              std::vector<int> &salary,
              std::vector<std::string> &date){
    std::ifstream file;
    file.open(filepath);
    while(!file.eof()){
        std::string first_name, family_name,date_tmp;
        int salary_val;
        file >> first_name >> family_name >> salary_val >> date_tmp;
        firstName.push_back(first_name);
        familyName.push_back(family_name);
        salary.push_back(salary_val);
        date.push_back(date_tmp);
    }
    file.close();
}

int sum(std::vector<int> &salary){
    int sum=0;
    for(int i;i<salary.size();++i){
        sum+=salary[i];
    }
    return sum;
}

int indexMostVec(std::vector<int> &vec){
    int index=0, max=vec[0];
    for(int i=0;i<vec.size();++i){
        if(vec[i]>max) {
            index = i;
            max = vec[i];
        }
    }
    return index;
}

std::string mostSalary(std::vector<std::string> &firstName,
                       std::vector<std::string> &familyName,
                       std::vector<int> &salary){
    int ind=indexMostVec(salary);
    return  firstName[ind] + " " + familyName[ind];
}

int main(){
    std::vector<std::string> firstName,familyName,date;
    std::vector<int> salary;
    readFile(const_filepath, firstName, familyName, salary, date);
    std::cout << "Summary for salary is: " << sum(salary) << std::endl;
    std::cout << "Most salary for: " << mostSalary(firstName,familyName,salary)<<  std::endl;
}