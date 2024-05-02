#include<bits/stdc++.h>
#include "correct_guess.hpp"
#include "wrong.hpp"
#include "add_word.hpp"
#include "save_file.hpp"
#include "sort_word.hpp"
#include "read_file.hpp"
#include "guessing.hpp"
#include "print_correct_letters.hpp"
#include "print_errors.hpp"
#include "head.hpp"

using namespace std;

static string secret_word;
static map<char,bool> guessed;
static vector<char> erros;

int main(){
    head();
    secret_word = Forca::sort_word();

    while(Forca::wrong(secret_word, guessed) && erros.size() < 5){
        Forca::print_errors(erros);
        Forca::print_correct_letters(secret_word, guessed);
        Forca::guessing(guessed, erros, secret_word);
    }

    cout << "Fim de jogo!\n";
    cout << "A palavra secreta era " << secret_word << "\n";
    if(Forca::wrong(secret_word, guessed)) cout << "Voce perdeu!\n";
    else{
        cout << "Voce ganhou, parabens!!!\n";
        cout << "Voce deseja adicionar uma nova palavra? (S/N)\n";
        char option;
        cin >> option;
        if(option=='S'){
            Forca::add_word();
            return 0;
        }
    }
    return 0;
}