#include "Arete.h"

Arete::Arete(string nom_s1, string nom_s2)
{
    //Allocation dynamique des 2 sommets de l'arête
    m_s1 = new Sommet;
    m_s2 = new Sommet;

    //On attribue un nom à ces 2 sommets
    m_s1->setNom(nom_s1);
    m_s2->setNom(nom_s2);
}

//Destruction des sommets
Arete::~Arete()
{
    delete m_s1;
    delete m_s2;
}
