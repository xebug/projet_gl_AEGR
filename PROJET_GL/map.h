#ifndef MAP_H
#define MAP_H


class map
{


    int tailleligne;
    int taillecolonne;
    int * carte[20][20];

public:
    map(int tl, int tc);
    void affichercarte();
};

#endif // MAP_H
