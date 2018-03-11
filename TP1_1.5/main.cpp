#include <iostream>
#include "Graphe.h"

using namespace std;

int main()
{
    //Variable du nom du fichier
    string nom;
    cout << "Saisir le nom du fichier (avec l'extension) : ";
    cin >> nom;

    //Instance d'un objet de classe graphe
    Graphe *graphe = new Graphe();

    //Affichage final
    graphe->RemplirMat(nom);
    graphe->influences();

    return 0;
}
