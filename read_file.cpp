#include "read_file.hpp"
#include <iostream>
#include <fstream>

namespace Forca{
std::vector<std::string> read_file(){
    std::ifstream arquivo;
    arquivo.open("words.txt");

    if (!arquivo) {
        std::cout << "Não foi possível abrir o arquivo palavras.txt\n";
        return {};
    }
    
    int counter;
    arquivo >> counter;

    std::vector<std::string> palavrasArquivo;

    for(int i=0;i<counter;i++){
        std::string palavra_lida;
        arquivo >> palavra_lida;
        palavrasArquivo.push_back(palavra_lida);
    }
    arquivo.close();
    return palavrasArquivo;
}
}