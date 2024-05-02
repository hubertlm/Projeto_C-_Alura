#include "save_file.hpp"
#include "read_file.hpp"
#include <string>
#include<iostream>
#include<vector>

namespace Forca{
void add_word(){
        std::string word;
        std::cout << "Digite a palavra a ser adicionada\n";
        std::cin >> word;

        std::vector<std::string> new_list = read_file();
        new_list.push_back(word);

        save_file(new_list);
}
}