#include "correct_guess.hpp"


bool correct_guess(const char &guess, const std::string &secret_word){
    for(char letter : secret_word){
        if(guess == letter){
            return true;
        }
    }
    return false;
}