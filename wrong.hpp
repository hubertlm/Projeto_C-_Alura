#pragma once
#include <string>
#include <map>

namespace Forca{
bool wrong(const std::string &secret_word, std::map <char,bool> &guessed);
}