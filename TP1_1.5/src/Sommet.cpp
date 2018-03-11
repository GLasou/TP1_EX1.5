#include "Sommet.h"

Sommet::Sommet()
{
}

//Constructeur
Sommet::Sommet(string m_nom)
{
    m_nom = "";
}


Sommet::~Sommet()
{
    //dtor
}

string Sommet::getNom()
{
    return m_nom;
}

void Sommet::setNom(string _nom)
{
    m_nom=_nom;
}
