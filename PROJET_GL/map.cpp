#include "map.h"
#include <iostream>

map::map(int tl, int tc)
{
    this->tailleligne=tl;
    this->taillecolonne=tc;
   // this->carte[20][20] = new int[20][20];


}


void map::affichercarte()
{
    for (int ligne = 0; ligne<tailleligne; ligne++)
    {
        for (int colonne=0; colonne<taillecolonne; colonne++)
        {
            if(ligne==0 || ligne == tailleligne-1 || colonne==0 || colonne == taillecolonne-1)
            {
                std::cout<<"@ ";
            }
            else
            {
                std::cout<<"  ";
            }

        }
        std::cout<<""<<std::endl;
    }
}
