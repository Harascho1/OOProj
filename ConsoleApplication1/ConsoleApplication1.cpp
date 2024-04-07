#include <iostream>


#include "Skijaliste.h"
#include "SkiLift.h"
#include "Cetvorosed.h"
#include "Dvosed.h"
#include "Skijas.h"

using namespace std;

enum cmdKomande {
    skijlaiste = 1,
    skilift,
    dvosed,
    cetvorosed,
    korpa,
    skijas,
};

int main()
{
    /*try {
        Skijaliste SP("Na");
        cout << SP;
    }
    catch (const std::exception&) {
        throw "nece da radi";
    }*/
    /*try {
        Skijaliste SP("Na");
        cout << SP;
        SkiLift* sl1 = new SkiLift("SkiLift A", 1000);
        SP.add(sl1);
        cout << SP;
    }
    catch (const std::exception&) {
        exception;
    }*/
    
    /*try {
        Skijaliste SP("Na Staroj Planini");
        SkiLift* sl1 = new SkiLift("SkiLift A", 2);
        SP.add(sl1);
        Korpa k(120);
        Cetvorosed* cs = new Cetvorosed(k);
        cout << *cs;
        sl1->add(cs);
        cout << SP;

    }
    catch (const std::exception&) {

    }*/

    /*try {
        Skijaliste SP("Na Staroj Planini");
        
        SkiLift* sl1 = new SkiLift("SkiLift A", 1000);
        SkiLift* sl2 = new SkiLift("SkiLift B", 1000);
        SP.add(sl1);
        SP.add(sl2);
        
        Korpa k1(120);
        Korpa k2(150);
        

        Sedista* cs = new Cetvorosed(k1);
        Sedista* ds = new Dvosed(k2);
        sl1->add(cs);
        sl2->add(ds);
        sl1->add(ds);
        sl1->add(cs);
        sl1->add(ds);
        sl1->pop();
        cout << SP;

    }
    catch (const std::exception&) {

    }*/


    /*try {
        Skijaliste SP("Na Staroj Planini");

        SkiLift* sl1 = new SkiLift("SkiLift A", 2);
        SkiLift* sl2 = new SkiLift("SkiLift B", 4);
        SP.add(sl1);
        SP.add(sl2);

        Korpa* k1 = new Korpa(120);
        Korpa* k2 = new Korpa(150);
        

        Sedista* cs1 = new Cetvorosed(*k1);
        Sedista* cs2 = new Cetvorosed(*k2);
        Sedista* ds1 = new Dvosed(*k2);
        Sedista* ds2 = new Dvosed(*k1);
        Skijas* s1 = new Skijas(23, 80);
        cs1->sit(*s1);
        sl1->add(cs1);
        sl1->add(cs2);
        sl2->add(ds1);
        sl2->add(ds2);
        cout << SP;
        Sedista* najjaciPrikljucak = sl2->NajveceOpterecenje();
        cout << *najjaciPrikljucak;
        sl2->sacuvajStanje("trenutnoStanje.txt");
        
    }
    catch (const std::exception&) {

    }*/
    {
        Skijaliste SP("Na Staroj Planini");

        SkiLift* sl1 = new SkiLift("SkiLift A", 2);
        SkiLift* sl2 = new SkiLift("SkiLift B", 4);
        SP.add(sl1);
        SP.add(sl2);

        Korpa* k1 = new Cetvorosed(400);
        Korpa* k2 = new Dvosed(300);
        sl1->add(k2);
        sl2->add(k1);
        Skijas* s1 = new Skijas(23, 80);
        Skijas* s2 = new Skijas(14, 100);
        Skijas* s3 = new Skijas(17, 50);
        Skijas* s4 = new Skijas(13, 80.2);
        Skijas* s5 = new Skijas(7, 79);

        k2->sit(*s1);
        k2->sit(*s2);
        k1->sit(*s3);
        k1->sit(*s4);
        k1->sit(*s5);

        cout << sl1->TezinaSvihSedista() << endl;

        cout << SP << endl;


        //korpa je nadklasa cetvoreseda i dvoseda

        //maksKilaza, brojMesta = 4, brojPopunjenih, skijasi* s


        /*Sedista* cs1 = new Cetvorosed(*k1);
        Sedista* ds1 = new Dvosed(*k2);
        Skijas* s1 = new Skijas(23, 80);
        Skijas* s2 = new Skijas(14, 100);
        cs1->sit(*s1);
        Sedista* cs2 = new Cetvorosed(*k2);
        sl1->add(cs1);
        sl1->add(cs1);
        sl2->add(ds1);
        sl1->pop();
        *s1 = *s2;
        Sedista* s = new Sedista();
        cout << "Trenutno se nalazite u" << endl;
        cout << SP;
        sl1->sacuvajStanje("trenutnoStanje.txt");*/

        

        bool kraj = false;
    }

}