#include "sort_word.hpp"
#include<vector>
#include <cstdlib>
#include <ctime>
#include "read_file.hpp"

namespace Forca{
std::string sort_word(){
    std::vector<std::string> secret_words = read_file();

    std::srand(time(NULL));
    int sort_number = rand() % secret_words.size();

    return secret_words[sort_number];
}
}