#include <iostream>
#include "Mastermind.h"
#include <random>


         

Mastermind::~Mastermind(){}


Mastermind::Mastermind(int redondance=0, int tailleCode=NB,  int nbEssaisMax=MAX){} 

void Mastermind::usage(){
   std::cout << "Le Mastermind est un jeu de société dont le but est de trouver un code secret.\n"
             << "C’est un jeu de réflexion et de déduction, inventé par Mordecai Meirowitz dans les années 1970.\n"
             << "Le nombre de couleurs différentes est de 8 (de 1 à 8)\n"
            << "Vous avez 10 essais pour deviner un code de 4 pions de couleurs strictement différentes.\n"
   << std::endl;
   }
void Mastermind::choisirSolution(){
   std::random_device rd;
   std::mt19937 gen(rd());
   std::uniform_int_distribution<int> dist(1,8);
   std::array<int, 10> tab;
   for (int i = 0 ; i < tab.size() ; ++i){
      tab[i]= dist(gen);
      }
   }
void Mastermind::saisirEssai(){}
void Mastermind::verifierEssai(){}
void Mastermind::afficherResultat(){}
int  Mastermind::bienPlaces(){}
int  Mastermind::malPlaces(){}
bool Mastermind::estFini(){}

