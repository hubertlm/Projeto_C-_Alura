#include"guessing.hpp"
#include<iostream>
#include"correct_guess.hpp"

namespace Forca{
void guessing(const std::map<char,bool>& guessed, std::vector<char>& erros, const std::string secret_word){
        std::cout << "Digite seu chute:\n";
        char guess;
        std::cin >> guess;
        guessed[guess] = true;
        if(correct_guess(guess, secret_word)){
            std::cout << "Seu chute esta na palavra!\n";
        }
        else{
            std::cout << "Seu chute nao esta na palavra!\n";
            erros.push_back(guess);
        }
}
}