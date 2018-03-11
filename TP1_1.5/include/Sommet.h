#ifndef SOMMET_H
#define SOMMET_H
#include <iostream>

using namespace::std;

class Sommet
{
    public:
        Sommet();
        Sommet(string m_nom);
        virtual ~Sommet();
        string getNom();
        void setNom(string _nom);


    protected:


    private:
          string m_nom;


};

#endif // SOMMET_H
