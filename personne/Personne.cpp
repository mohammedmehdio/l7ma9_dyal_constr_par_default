//
// Created by HP on 12/5/2024.
//

#include <iostream>
#include "Personne.h"
#include <cstring>
using namespace std;
Personne::Personne() {}

Personne::Personne(char* nom, char* prenom, int age) {
   this->nom=nom;
   this->prenom=prenom ;
    this->age=age;
}

Personne::Personne(const Personne &p){
    this->nom = nom ;
    this->prenom = prenom ;
    this->age = age;
}

void Personne::setNom(char* nom) {
    this->nom=nom;
}

void Personne::setPrenom(char* prenom) {
    this->prenom=prenom;
}

void Personne::setAge(int age) {
    this->age=age;
}

char * Personne::getNom() {
    return nom;
}

char * Personne::getPrenom() {
    return prenom;
}

int Personne::getAge() {
    return age;
}

void Personne::afficher() {
   cout <<"nom : " << nom << "prenom : " << prenom << "age : " << age << endl;
}