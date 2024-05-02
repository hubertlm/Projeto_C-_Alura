#include "print_correct_letters.hpp"
#include<iostream>

namespace Forca{
void print_correct_letters(const std::string& secret_word, std::map<char,bool>& guessed){
        for(char letter : secret_word){
            if(guessed[letter]){
                std::cout << letter <<" ";
            }
            else{
                std::cout << "_ ";
            }
        }
        std::cout << "\n";
}
}