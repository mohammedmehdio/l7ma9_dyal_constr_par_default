//
// Created by HP on 12/5/2024.
//

#ifndef PERSONNE_PERSONNE_H
#define PERSONNE_PERSONNE_H


class Personne {
protected:
    char* nom;
    char* prenom;
    int age;
public:
    Personne();
    Personne(char* nom, char* prenom , int age );
    Personne(const Personne &p);
    void setNom(char* nom);
    void setPrenom(char* prenom);
    void setAge(int age);
    char* getNom();
    char* getPrenom();
    int getAge();
    void afficher();
};


#endif //PERSONNE_PERSONNE_H
