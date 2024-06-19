#include <iostream>
#include "../include/jeu.h"
#include "../include/plateau.h"

void affiche_menu(){
    std::cout <<" ==============Menu=============="<< std::endl;
    std::cout << "1. 1vs1"<< std::endl;
    std::cout << "2. 1vsIA"<<std::endl;
    std::cout << "3. jouer en ligne"<<std::endl;
    std::cout <<"4. Quitter"<< std::endl;
}

int main(){
    int choix;


    do {
        affiche_menu();
        std::cin>> choix;

        Jeu jeu;
        Plateau Plateau;

        switch(choix) {
            case 1:
            {
                std::cout<<"1vs1......"<<std::endl;
                
                jeu.demarrer1vs1();


            }

            
            break;
            case 2:
            {
                std::cout<<"1vsPC........"<<std::endl;
               
                jeu.demarrer1vsPC();
            }
            break;
            case 3:
            {
                std::cout<<"Jouer en ligne........"<<std::endl;
                
                //reseau;
                jeu.demarrerEnLigne();
            }
            break;
            case 4:
            {
                std::cout<<"au revoir !"<<std::endl;
                break;
            }
            default:
            {
                std::cout<< " option invalide !"<<std::endl;
                break;
            }
            
        } 
        std::cout << std::endl;
    }while (choix != 4);

        return 0;
    
}