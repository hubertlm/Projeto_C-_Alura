#include "print_errors.hpp"
#include<iostream>

namespace Forca{
void print_errors(const std::vector<char>& erros){
        std::cout << "Chutes errados: ";
        for(char letter : erros){
            std::cout << letter << " ";
        }
        std::cout << "\n"; 
}
}