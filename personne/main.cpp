#include <iostream>
#include "Personne.h"
#include "Prof.h"
#include "Etudiant.h"

using namespace std;
int main() {
    Etudiant s1( "test", "Edin",20, "QA1234");
    s1.afficher();
    //cout << s1 <<endl;
    return 0;
}
