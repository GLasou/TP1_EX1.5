#ifndef ARETE_H
#define ARETE_H
#include "Sommet.h"

class Arete
{
    public:
        Arete(string nom_s1 , string nom_s2);
        virtual ~Arete();

    protected:

    private:
        Sommet* m_s1;
        Sommet* m_s2;
};

#endif // ARETE_H
