#ifndef GRAPHE_H
#define GRAPHE_H
#include "Arete.h"
#include <vector>
#include <fstream>
#include <string>
#include <iostream>

class Graphe
{
    public:
        Graphe();
        virtual ~Graphe();
        void AllocOrdre(int m_ordre);
        void RemplirMat(string m_filename);
        void influences();//Fonction d'affichage (qui influence qui)

    protected:

    private:
        //m_Influences représente la matrice d'adjacence
        vector<vector<int> > m_Influences;
        vector<Sommet> m_vectSommet;
        int m_ordre;
};

#endif // GRAPHE_H
