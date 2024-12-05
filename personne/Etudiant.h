//
// Created by HP on 12/5/2024.
//

#ifndef PERSONNE_ETUDIANT_H
#define PERSONNE_ETUDIANT_H
#include "Personne.h"
#include <iostream>
using namespace std;

class Etudiant : public Personne{
private:
    char* cin;
public:
   
    Etudiant(char *nom, char *prenom, int age,char * cin);
    Etudiant(const Etudiant &e);
    void setCin(char * cin);
    char * getCin();
    void afficher();
    friend ostream& operator<<(ostream& os, const Etudiant& etudiant);

};


#endif //PERSONNE_ETUDIANT_H
