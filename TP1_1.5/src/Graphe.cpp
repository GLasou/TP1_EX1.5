#include "Graphe.h"

Graphe::Graphe()
{
    m_ordre = 0;
}

Graphe::~Graphe()
{
}

void Graphe::AllocOrdre(int m_ordre)
{

    for(int i=0 ; i < m_ordre ; i ++)
    {
        m_Influences.push_back(vector<int>(m_ordre));
    }
    m_vectSommet.resize(m_ordre); //On met le vecteur à la taille de l'ordre
}

void Graphe::RemplirMat(string nom)//la variable "nom" est le nom du fichier
{
    ifstream file(nom.c_str());//ouvre le fichier en mode lecture

    if(file)//si ouverture réussie
    {
        string NomPerso;
        file >> m_ordre; //Attribution de l'ordre (1ère ligne du fichier)

        AllocOrdre(m_ordre);

        //Boucle attribuant les noms des sommets
        for(int i=0 ; i < m_ordre ; i++)
        {
            file >> NomPerso; //On met la ligne dans la variable NomPerso
            m_vectSommet[i].setNom(NomPerso); //On attribue les noms aux sommets
        }

        //Boucle de remplissage de la matrice
        for(int i = 0 ; i < m_ordre ; i++)
        {
            for (int j = 0 ; j < m_ordre ; j ++)
            {
                file >> m_Influences[i][j];
            }
        }

        file.close(); //Fermeture du fichier
    }
    else
    {
        cerr << "Erreur lors de l'ouveture du fichier";
    }
}


///fonction affichage des influences
void Graphe::influences()
{
    for(int i =0; i < m_ordre ; i++)
    {
        for(int j = 0 ; j < m_ordre ; j++)
        {
            if(m_Influences[i][j]==1)//Affiche un message si il y a influence
            {
                cout << m_vectSommet[i].getNom()<<" influence "<<m_vectSommet[j].getNom() << "\n";
            }
        }
    }
}
