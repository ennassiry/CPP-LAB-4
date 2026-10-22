#include <iostream>
using namespace std;
class Universite
{

    string nom;

public:
    Universite(string nom)
    {
        this->nom = nom;
    }
    string getNom()
    {
        return nom;
    }
};

class Etudiant
{
protected:
    string nom;
    int age;
    Universite *universite;
    static int nbEtudiants;

public:
    Etudiant(string nom, int age, Universite *universite)
    {
        this->nom = nom;
        this->age = age;
        this->universite = universite;
        nbEtudiants += 1;
    }
    void affiche()
    {
        cout << "[ " << nom << " , " << age << " , " << universite->getNom() << " ] \n";
    }
    static void afficherTotal()
    {
        cout << nbEtudiants;
    }
};
int Etudiant::nbEtudiants = 0;
int main()
{
    Universite u("Test");
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);

    e1.affiche();
    e2.affiche();

    Etudiant::afficherTotal(); // Doit afficher 2
}