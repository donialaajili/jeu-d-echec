#ifndef PIECE_H
#define PIECE_H

#include<iostream>

class Piece{
    public:
    Piece();
    void setType(Typepiece type);
    void setColor(colorpiece color);

    private:
    Typepiece type; 
    colorpiece color; 
};

enum class Typepiece{
    Tours,
    Cavalier,
    Fou,
    Reine,
    Roi,
    Fou,
    Cavalier,
    Tours, 
    Pion,
    Vide
};

enum class colorpiece{
    Noir,
    Blanc
};

#endif