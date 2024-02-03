#ifndef WIZARDS_H
#define WIZARDS_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Monsters;
class Student_wizard
{
    public:
    string name;
    unsigned int HP;
    unsigned int full_HP;
    unsigned int mana;
    unsigned int full_mana;
    unsigned int Damage;
    void Throw_tapock(Monsters *Abstract_monster);
    void Hit_tapock(Monsters *Abstract_monster);
    void Mad_Explosion();
    void Mad_Death() ;
    void Eat_Mezim();
    void Drink_Energos();
    void print();
    Student_wizard (string _name, unsigned int _HP, unsigned int _mana, unsigned int _Damage);
};

#endif