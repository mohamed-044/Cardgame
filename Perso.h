#include <iostream>      //inclure la bibliotheque iostream
#include <string>
using namespace std;     //pour éviter de devoir écrire a chaque fois std::
class Perso                                     //déclarer la classe
{   
    protected :                            //création des membres protégés
    string nom_du_perso;               //déclaration des variable  
    int nb_pt_de_vie;
    int vitesse;
    int energie;
    public :                            //création des membres public
    Perso();                        //déclaration du constructeur par défaut
    Perso(const string&a, int b, int c);                    //déclaration du constructeur
    const string& getNomDuPerso() const;
    int getNbPtVie() const;
    void setNbPtDeVie(int nouveauNbPtDeVie);
    int getVitesse();
    void frappe(Perso &a, int attaque, int defense, int energie);             //déclaration de la méthode
    //void monter_vie(int montant_vie);
    void blast(Perso &b, int attaque, int defense, int energie);
    void delta(Perso &c, int attaque, int defense, int energie);
};    


