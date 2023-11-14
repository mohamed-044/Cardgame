#include "Mage.h"    //on inclus le fichier de la classe
using namespace std; //pour éviter de devoir écrire a chaque fois std::
int main()      //fonction principale
{
    Perso Premier;       //on crée un objet Premier et on affecte des coordonnées  
    Perso Second("Mario",100);        //on crée un objet Second et on affecte des coordonnées 
    Guerrier Troisieme;   //on crée un objet Troisieme et on affecte des coordonnées   
    Guerrier Quatrieme("Wario",500, 30, 40);   //on crée un objet Quatrieme et on affecte des coordonnées  
    Mage Cinq("Toad",1000, 100, 90);     //on crée un objet Cinq et on affecte des coordonnées  
    Mage Six("Waluigi",1000, 110, 80);       //on crée un objet Six et on affecte des coordonnées  

    Premier.cp_de_pg(Second, 50);         //on appelle la méthode coup de poing avec les deux objets
    Troisieme.enrage(10);   //on appelle la méthode enrage avec une valeur en parametre
    Troisieme.attaque_eclair(Premier, 80);    //on appelle la méthode attaque eclair avec les deux objets
    Cinq.meditation();      //on appelle la méthode meditation
    Cinq.boule_feu(Quatrieme, 450);    //on appelle la méthode boule de feu avec les deux objets
    return 0;       //on retourne la valeur 0
}
