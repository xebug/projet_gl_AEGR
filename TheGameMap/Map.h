#ifndef MAP_H
#define MAP_H
#include <vector>


class Map
{
std::vector< std::vector < char > > maMap;

public:
    Map(int x, int y);
    afficherMap();
};

#endif // MAP_H
