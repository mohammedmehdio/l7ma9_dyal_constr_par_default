//
// Created by HP on 12/5/2024.
//

#ifndef PERSONNE_PROF_H
#define PERSONNE_PROF_H
#include "Personne.h"

class Prof : public Personne{
private:
    char * matiere;
    double salaire;
public:
    Prof();
    Prof(char *nom, char *prenom, int age,char * matiere, double salaire);
    Prof(const Prof &pr);
    void setMatiere(char * matiere);
    void setSalaire(double salaire);
    char * getMatiere();
    double getSalaire();
    void afficher();
};


#endif PERSONNE_PROF_H
