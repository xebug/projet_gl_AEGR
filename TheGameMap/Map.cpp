#include "Map.h"

Map::Map(int x, int y)
{
   maMap.resize(x);                  //redimmensionner un vector principale
    maMap[1].resize(y);          //redimmensionner un vector secondaire

    // prochaine étape: bien manié les vecteurs, bien placé les elements sur la carte, bien affiché la carte

}

void Map::afficherMap()
{
    for(int unsigned i=0;i<vect.size();i++)
    {
        cout<<vect[i];
    }
}
