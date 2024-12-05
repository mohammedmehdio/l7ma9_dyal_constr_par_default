//
// Created by HP on 12/5/2024.
//

#include "Etudiant.h"
#include <iostream>
#include <cstring>
using namespace std;


Etudiant::Etudiant(char* nom, char* prenom, int age,char* cin) : Personne( nom, prenom,  age) {
    this->cin = cin;
}

Etudiant::Etudiant(const Etudiant &e) : Personne(e){
    this->cin=cin;
}

void Etudiant::setCin(char *cin) {
   this->cin=cin;
}

char * Etudiant::getCin() {
    return cin;
}

void Etudiant::afficher() {
    cout <<"nom : " << nom << "prenom : " << prenom << "age : " << age << "cin : " << cin << endl;
}

//ostream& operator<<(ostream& os, const Etudiant& etudiant) {
//    os << "Nom: " << etudiant.nom << " " << etudiant.prenom << endl;
//    os << "CIN: " << etudiant.cin << endl;
//    os << "age: " << etudiant.age << endl;
//    return os;
//}