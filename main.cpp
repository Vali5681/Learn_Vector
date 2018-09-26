#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream file;
    file.open("numbers.txt");
    if(file.is_open()) {
        std::vector<std::string> numbers_vector;
        std::vector<std::string>::iterator numbers_vectorIterator;
        std::string line;
        while(!file.eof()) {
            std::getline(file, line);
            numbers_vector.push_back(line);
        }
        auto goBack = 0;
        auto index = 1;
        for(numbers_vectorIterator = numbers_vector.begin(); numbers_vectorIterator != numbers_vector.end(); ++numbers_vectorIterator)
        {

            std::cout << *numbers_vectorIterator << "\n";
            if (index == 7)
            {
                numbers_vectorIterator = numbers_vector.begin() + goBack;
                goBack++;
                index = goBack;
            }
            index++;
        }
    }
    return 0;
}