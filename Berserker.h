#include "Perso.h"      //inclure le fichier de la classe
class Berserker : public Perso      //déclarer la classe
{
    public :                         //création des membres public
    Berserker();                       //déclaration du constructeur par défaut
    Berserker(const string&a, int b, int c);         //déclaration du constructeur
    void frappe_punitive(Perso &d, int defense, int energie);             //déclaration de la méthode
    void coup_dechaine(Perso &e, int defense, int energie);      //déclaration de la méthode
    void alpha(Perso &f, int defense, int energie);
};

