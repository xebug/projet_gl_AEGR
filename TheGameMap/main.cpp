#include <QCoreApplication>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>
#include "Map.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ifstream fichier("/Users/rebug/thegame.config", ios::in);  // on ouvre le fichier en lecture

            if(fichier)  // si l'ouverture a réussi
            {
                // instructions
                cout << "fichier ouvert" << endl;
                int map1, map2;
                string map;
                fichier >> map >> map1 >> map2;  /*on lit jusqu'à l'espace et on stocke ce qui est lu dans la variable indiquée */

                cout << map << map1 << "x" << map2 <<endl;  // on affiche la ligne

                Map * newcarte = new Map(map1,map2);

                //fichier.close();  // on ferme le fichier
            }
            else  // sinon
                    cout << "Impossible d'ouvrir le fichier config, lancement impossible!" << endl;


    return a.exec();
}
