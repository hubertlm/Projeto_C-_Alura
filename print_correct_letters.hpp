#pragma once
#include <string>
#include <vector>
#include <map>

namespace Forca{
void print_correct_letters(const std::string& secret_word, std::map<char,bool>& guessed);
}