#include "Berserker.h"
class Snowqueen : public Perso
{
    public:
    Snowqueen();
    Snowqueen(const string&a, int b, int c);
    void javelot_glace(Perso &d, int attaque,  int defense, int energie);             //déclaration de la méthode
    void vent_glacial(Perso &e, int attaque, int defense, int energie);      //déclaration de la méthode
    void LetItGo(Perso &f, int attaque, int defense, int energie);
};