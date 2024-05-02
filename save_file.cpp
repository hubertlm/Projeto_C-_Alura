#include<fstream>
#include"save_file.hpp"

namespace Forca{
void save_file(std::vector<std::string>& new_list){
    std::ofstream arquivo;
    arquivo.open("words.txt");
    if(arquivo.is_open()){
        arquivo << new_list.size() << std::endl;

        for(std::string new_word : new_list){
            arquivo << new_word << std::endl;
        }

        arquivo.close();
    }

}
}