#include "plateau.h"
#include "piece.h"

Plateau::plateau(){
    initialiser();
}


void Plateau::initialiser(){

    std::cout << "Initialisation du plateau..." << std::endl;

    cases[0][0] = Pieces(Typepiece::Tours, colorpiece::Blanc);
    cases[0][1] = Pieces(Typepiece::Cavalier, colorpiece::Blanc);
    cases[0][2] = Pieces(Typepiece::Fou, colorpiece::Blanc);
    cases[0][3] = Pieces(Typepiece::Reine, colorpiece::Blanc);
    cases[0][4] = Pieces(Typepiece::Roi, colorpiece::Blanc);
    cases[0][5] = Pieces(Typepiece::Fou, colorpiece::Blanc);
    cases[0][6] = Pieces(Typepiece::Cavalier, colorpiece::Blanc);
    cases[0][7] = Pieces(Typepiece::Tours, colorpiece::Blanc);

    cases[7][7] = Pieces(Typepiece::Tours, colorpiece::Noir);
    cases[7][6] = Pieces(Typepiece::Cavalier, colorpiece::Noir);
    cases[7][5] = Pieces(Typepiece::Fou, colorpiece::Noir);
    cases[7][4] = Pieces(Typepiece::Reine, colorpiece::Noir);
    cases[7][3] = Pieces(Typepiece::Roi, colorpiece::Noir);
    cases[7][2] = Pieces(Typepiece::Fou, colorpiece::Noir);
    cases[7][1] = Pieces(Typepiece::Cavalier, colorpiece::Noir);
    cases[7][0] = Pieces(Typepiece::Tours, colorpiece::Noir);

    for (int i; i < 8; i++){
        cases[6][i] = Pieces(Typepiece::Pion, colorpiece::Noir);
    }

    for (int i ; i < 8; i++){
        cases[1][i] = Pieces(Typepiece::Pion, colorpiece::Blanc);
    }

    //case vide

    for (int i ; i < 6; i++)
    {
        for (int j; j < 8; j++)
        {
            cases[j][i] = Pieces(Typepiece::vide, colorpiece::Aucune);
        }
        
        /* code */
    }
    

    std::cout<<"plateau initialisé, commencé la partie !"<<std::endl;
   
    


}