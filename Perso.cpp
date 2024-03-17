#include "Perso.h"    //on inclus le fichier de la classe

Perso::Perso():nom_du_perso ("Luigi"), nb_pt_de_vie (100), vitesse (10){};             //on définit le constructeur par défaut

Perso::Perso(const string& a, int b, int c)        //on définit le constructeur surchargé
{
    nom_du_perso = a;               //Affectation des attributs
    nb_pt_de_vie = b; 
    vitesse = c;              //Affectation des attributs
}

const string& Perso::getNomDuPerso() const {
        return nom_du_perso;
    }
int Perso::getNbPtVie() const {
        return nb_pt_de_vie;
    }
void Perso::setNbPtDeVie(int nouveauNbPtDeVie) {
        nb_pt_de_vie = nouveauNbPtDeVie;
    }    
int Perso::getVitesse(){
    return vitesse;
}    

void Perso::frappe(Perso &a, int attaque, int defense, int energie)   //on définit la méthode coup de poing avec un objet reference en parametre
{
    int pv_perso = a.getNbPtVie();
    cout<<"Frappe preventive\n";
    cout<<nom_du_perso<<" a "<<nb_pt_de_vie<<" points de vie\n";
    cout<<nom_du_perso<<" a "<<energie<<" energie\n";
    cout<<a.getNomDuPerso()<<" a "<<pv_perso<<" points de vie\n";
    cout<<a.getNomDuPerso()<<" a recu un degat de "<<attaque<<"\n";    //on affiche les dégats recu par le perso
    pv_perso = pv_perso - attaque;    //on enlève la valeur des degats aux point de vie
    cout<<a.getNomDuPerso()<<" a une defense de "<<defense<<"\n";
    nb_pt_de_vie += defense;
    a.setNbPtDeVie(pv_perso);
    if (pv_perso>0)
    {
    cout<<a.getNomDuPerso()<<" a "<<pv_perso<<" points de vie\n";
    }
    else if (pv_perso<0)
    {
    cout<<a.getNomDuPerso()<<" est mort \n";        
    }
    cout<<nom_du_perso<<" a "<<nb_pt_de_vie<<" points de vie\n";    //on affiche les point de vie du perso}
    energie += 10;
    cout<<nom_du_perso<<" a "<<energie<<" energie\n";
}

void Perso::blast(Perso &b, int attaque, int defense, int energie)
{
    int pv_perso = b.getNbPtVie();
    cout<<"\nBlast\n"<<nom_du_perso<<" a "<<nb_pt_de_vie<<" points de vie\n";  
    cout<<nom_du_perso<<" a "<<energie<<" energie\n";
    cout<<b.getNomDuPerso()<<" a "<<pv_perso<<" points de vie\n";
    cout<<b.getNomDuPerso()<<" a recu un degat de "<<attaque<<"\n";
    attaque = attaque * 1.5;
    cout<<b.nom_du_perso<<" a recu un degat de "<<attaque<<"\n";    //on affiche les dégats recu par le perso
    pv_perso = pv_perso - attaque;    //on enlève la valeur des degats aux point de vie
    cout<<b.getNomDuPerso()<<" a une defense de "<<defense<<"\n";
    nb_pt_de_vie = nb_pt_de_vie + defense;
    b.setNbPtDeVie(pv_perso);
    if (pv_perso>0)
    {
    cout<<b.getNomDuPerso()<<" a "<<pv_perso<<" points de vie\n";
    }
    else if (pv_perso<0)
    {
    cout<<b.getNomDuPerso()<<" est mort \n";        
    }
    cout<<nom_du_perso<<" a "<<nb_pt_de_vie<<" points de vie\n";    //on affiche les point de vie du perso}
    cout<<nom_du_perso<<" a "<<energie<<" energie\n";

}

void Perso::delta(Perso &c, int attaque, int defense, int energie)
{
    int pv_perso = c.getNbPtVie();
    cout<<"\nAttaque Delta\n"<<nom_du_perso<<" a "<<energie<<" energie\n";
    if (energie>=100)
    {
    cout<<nom_du_perso<<" a "<<nb_pt_de_vie<<" points de vie\n";
    cout<<c.getNomDuPerso()<<" a "<<pv_perso<<" points de vie\n";

    cout<<c.getNomDuPerso()<<" a recu un degat de "<<attaque<<"\n";    //on affiche les dégats recu par le perso
    pv_perso = pv_perso - attaque;    //on enlève la valeur des degats aux point de vie
    cout<<c.getNomDuPerso()<<" a une defense de "<<defense<<"\n";
    nb_pt_de_vie = nb_pt_de_vie + defense;
    c.setNbPtDeVie(pv_perso);
    if (pv_perso>0)
    {
    cout<<c.getNomDuPerso()<<" a "<<pv_perso<<" points de vie\n";
    }
    else if (pv_perso<0)
    {
    cout<<c.getNomDuPerso()<<" est mort \n";        
    }
    cout<<c.nom_du_perso<<" a "<<nb_pt_de_vie<<" points de vie\n";    //on affiche les point de vie du perso}
    energie -= 100;
    cout<<nom_du_perso<<" a "<<energie<<" energie\n";
    }
    else if (energie<100)
    {
        cout<<"L'energie n'est pas suffisante\n";
    }
}

