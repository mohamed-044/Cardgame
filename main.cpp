#include "Snowqueen.h"    //on inclus le fichier de la classe
using namespace std; //pour éviter de devoir écrire à chaque fois std::




int main()      //fonction principale
{

    cout << "Premier tour  \n";
    Perso Premier;       //on crée un objet Premier et on affecte des coordonnées  
    Berserker Deux("Berserker", 100, 4);   //on crée un objet Deux et on affecte des coordonnées   
    Snowqueen Trois("Halland", 100, 3);    //on crée un objet Trois et on affecte des coordonnées  
        
    int jeu=0;
    int mort=0;   

        if (Premier.getVitesse() >= Deux.getVitesse() && Premier.getVitesse() >= Trois.getVitesse()) { jeu = 1;
            cout << Premier.getNomDuPerso() << " joue en premier\nChoisissez une action (1/2/3): ";
            int action;
            cin >> action;

            if (action == 1) {
                Premier.frappe(Deux, 20, 10, 5);
            } else if (action == 2) {
                Premier.blast(Trois, 10, 10, 6);
            } else if (action == 3) {
                Premier.delta(Trois, 10, 10, 105);
            }
        } else if (Deux.getVitesse() >= Trois.getVitesse()) {  jeu = 2;
            cout << Deux.getNomDuPerso() << " joue en premier\nChoisissez une action (1/2/3): ";
            int act;
            cin >> act;

            if (act == 1) {
                Deux.frappe_punitive(Premier, 30, 30);
            } else if (act == 2) {
                Deux.coup_dechaine(Premier, 50, 20);
            } else if (act == 3) {
                Deux.alpha(Premier, 40, 110);
            }
        } else { jeu = 3;
            cout << Trois.getNomDuPerso() << " joue en premier\nChoisissez une action (1/2/3): ";
            int ac;
            cin >> ac;

            if (ac == 1) {
                Trois.javelot_glace(Premier, 70, 60, 30);
            } else if (ac == 2) {
                Trois.vent_glacial(Deux, 75, 30, 10);
            } else if (ac == 3) {
                Trois.LetItGo(Deux, 80, 50, 200);
            }
        }


        if (jeu == 1) {
            if (Deux.getVitesse() >= Trois.getVitesse()) {
                cout << "\nC'est au tour de " << Deux.getNomDuPerso();
                cout << "\nChoisissez une action (1/2/3): ";
                int act;
                cin >> act;

                if (act == 1) {
                    Deux.frappe_punitive(Premier, 30, 30);
                } else if (act == 2) {
                    Deux.coup_dechaine(Premier, 50, 20);
                } else if (act == 3) {
                    Deux.alpha(Premier, 40, 110);
                }
                cout << "\nC'est au tour de " << Trois.getNomDuPerso();
                cout << "\nChoisissez une action (1/2/3): ";
                int ac;
                cin >> ac;

                if (ac == 1) {
                    Trois.javelot_glace(Premier, 400, 60, 30);
                } else if (ac == 2) {
                    Trois.vent_glacial(Deux, 300, 30, 10);
                } else if (ac == 3) {
                    Trois.LetItGo(Deux, 500, 50, 200);
                }
            }
        }
    
    do
    {

            if (Premier.getNbPtVie()<=0)
        {
            mort=1;
            cout<<Premier.getNomDuPerso()<<" est mort";
        }
        else if (Deux.getNbPtVie()<=0)
        {
            mort=1;
            cout<<Deux.getNomDuPerso()<<" est mort";
        }
            else if (Trois.getNbPtVie()<=0)
        {
            mort=1;
            cout<<Trois.getNomDuPerso()<<" est mort";
        }
        }  while (mort!=1);

        do
        {
        cout << "\nNouveau tour \n";    
         if (Premier.getVitesse() >= Deux.getVitesse() && Premier.getVitesse() >= Trois.getVitesse()) { jeu = 1;
            cout << Premier.getNomDuPerso() << " joue en premier\nChoisissez une action (1/2/3): ";
            int action;
            cin >> action;

            if (action == 1) {
                Premier.frappe(Deux, 20, 10, 5);
            } else if (action == 2) {
                Premier.blast(Trois, 10, 10, 6);
            } else if (action == 3) {
                Premier.delta(Trois, 10, 10, 105);
            }
        } else if (Deux.getVitesse() >= Trois.getVitesse()) {  jeu = 2;
            cout << Deux.getNomDuPerso() << " joue en premier\nChoisissez une action (1/2/3): ";
            int act;
            cin >> act;

            if (act == 1) {
                Deux.frappe_punitive(Premier, 30, 30);
            } else if (act == 2) {
                Deux.coup_dechaine(Premier, 50, 20);
            } else if (act == 3) {
                Deux.alpha(Premier, 40, 110);
            }
        } else { jeu = 3;
            cout << Trois.getNomDuPerso() << " joue en premier\nChoisissez une action (1/2/3): ";
            int ac;
            cin >> ac;

            if (ac == 1) {
                Trois.javelot_glace(Premier, 70, 60, 30);
            } else if (ac == 2) {
                Trois.vent_glacial(Deux, 75, 30, 10);
            } else if (ac == 3) {
                Trois.LetItGo(Deux, 80, 50, 200);
            }
        }


        if (jeu == 1) {
            if (Deux.getVitesse() >= Trois.getVitesse()) {
                cout << "\nC'est au tour de " << Deux.getNomDuPerso();
                cout << "\nChoisissez une action (1/2/3): ";
                int act;
                cin >> act;

                if (act == 1) {
                    Deux.frappe_punitive(Premier, 30, 30);
                } else if (act == 2) {
                    Deux.coup_dechaine(Premier, 50, 20);
                } else if (act == 3) {
                    Deux.alpha(Premier, 40, 110);
                }
                cout << "\nC'est au tour de " << Trois.getNomDuPerso();
                cout << "\nChoisissez une action (1/2/3): ";
                int ac;
                cin >> ac;

                if (ac == 1) {
                    Trois.javelot_glace(Premier, 400, 60, 30);
                } else if (ac == 2) {
                    Trois.vent_glacial(Deux, 300, 30, 10);
                } else if (ac == 3) {
                    Trois.LetItGo(Deux, 500, 50, 200);
                }
            }
        }
        
        if (Premier.getNbPtVie()<=0 && Deux.getNbPtVie()<=0)
        {
            mort=2;
            cout<<Trois.getNomDuPerso()<<" a gagne";
        }
        else if (Trois.getNbPtVie()<=0 && Deux.getNbPtVie()<=0)
        {
            mort=2;
            cout<<Premier.getNomDuPerso()<<" a gagne";
        }
        else if (Premier.getNbPtVie()<=0 && Trois.getNbPtVie()<=0)
        {
            mort=2;
            cout<<Deux.getNomDuPerso()<<" a gagne";
        
    }} while (mort!=2);
        
     
    return 0;       //on retourne la valeur 0
}
