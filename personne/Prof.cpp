//
// Created by HP on 12/5/2024.
//
#include <iostream>
#include "Prof.h"
using namespace std;

Prof::Prof(){

};

Prof::Prof(char* nom, char* prenom, int age, char* matiere , double salaire) : Personne( nom,  prenom,  age){
        this->matiere=matiere ;
        this->salaire=salaire;
};

Prof::Prof(const Prof &pr) : Personne(pr){
   this->matiere=matiere ;
   this->salaire=salaire;
};

void Prof::setSalaire(double salaire) {
    this->salaire=salaire;
}

void Prof::setMatiere(char* matiere) {
    this->matiere = matiere;
}

double  Prof::getSalaire() {
    return salaire;
}

char * Prof::getMatiere() {
    return matiere;
}

void Prof::afficher() {
    cout <<"nom : " << nom << "prenom : " << prenom << "age : " << age <<"matiere :" <<matiere <<"salaire :" <<salaire << endl;
}