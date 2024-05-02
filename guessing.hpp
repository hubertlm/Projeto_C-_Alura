#pragma once
#include <map>
#include <vector>
#include <string>

namespace Forca{
void guessing(const std::map<char,bool>& guessed, std::vector<char>& erros, const std::string secret_word);
}