#include <iostream>


#include "Skijaliste.h"
#include "SkiLift.h"
#include "Cetvorosed.h"
#include "Dvosed.h"
#include "Skijas.h"

using namespace std;


int main()
{
    {

        Skijaliste* SP = Skijaliste::getInstance("Na StarojPlanini");

        SkiLift* sl1 = new SkiLift("SkiLift A", 2);
        SkiLift* sl2 = new SkiLift("SkiLift B", 4);
        SP->add(sl1);
        SP->add(sl2);

        Korpa* k1 = new Cetvorosed(400);
        Korpa* k2 = new Dvosed(300);
        Korpa* k3 = new Dvosed(350);
        Korpa* k4 = new Dvosed(300);

        sl2->add(k2);
        sl2->add(k1);
        sl2->add(k3);
        sl2->add(k4);
        sl1->add(k1);
        Skijas* s1 = new Skijas(23, 80);
        Skijas* s2 = new Skijas(14, 100);
        Skijas* s3 = new Skijas(17, 50);
        Skijas* s4 = new Skijas(13, 80.2);
        Skijas* s5 = new Skijas(7, 79);
        Skijas* s6 = new Skijas(71, 80.5);
        Skijas* s7 = new Skijas(76, 50);
        Skijas* s8 = new Skijas(72, 130);
        Skijas* s9 = new Skijas(78, 90);

        k2->sit(*s1);
        k2->sit(*s2);
        k1->sit(*s3);
        k1->sit(*s4);
        k1->sit(*s5);
        k3->sit(*s6);
        k3->sit(*s7);
        k4->sit(*s8);
        k4->sit(*s9);

        Korpa* k = sl2->NajveceOpterecenje();
        cout << *k << std::endl;
        sl2->sacuvajStanje("trenutnoStanje.txt");
        sl2->promeniUkupnoOpterecenje(700);
        cout << *sl2 << endl;
        sl2->promeniBrojPikljucka(4);
        cout << sl1->TezinaSvihSedista() << endl;
        
        
        cout << *SP << endl;
        delete SP;
    }
    
}