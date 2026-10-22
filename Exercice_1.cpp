#include <iostream>
using namespace std;

class Livre
{
protected:
    string titre;
    string auteur;
    int annee;
    static int nbLivres ;   // declaration only

public:
    Livre(string titre, string auteur, int annee) {
        this->titre  = titre;
        this->auteur = auteur;
        this->annee  = annee;
        nbLivres += 1;      // no need for this->
    }

    void afficher() {
        cout << "Livre { " << titre << " , " << auteur << " , " << annee << " }\n";
    }

    static void afficherTotal() {
        cout << nbLivres << endl;
    }
};

// REQUIRED: definition of the static member
int Livre::nbLivres = 0;

int main()
{
    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupery", 1943);
    Livre l3("L Etranger", "Albert Camus", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();

    Livre::afficherTotal();   // prints 3
    return 0;
}