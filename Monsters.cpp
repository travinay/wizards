#include "Wizards.h"
#include "Monsters.h"
#include <string>
void Monsters::Attack(Student_wizard *Killer)
    {
        Killer->HP -=Damage;
    }
Monsters::Monsters (string _name, int _HP, int _Damage)
    {
        name = _name;
        HP = _HP;
        Damage = _Damage;
    };

    void Guardess::Loot(Student_wizard *Killer)
    {
        Killer->Damage += 3;
    }
    Guardess::Guardess(string _name, int _HP, int _Damage) {};


    void Munya::Loot(Student_wizard *Killer)
    {
        Killer->Damage += 7;
    }
    Munya::Munya(string _name, int _HP, int _Damage) {};

    void Umnov::Loot(Student_wizard *Killer)
    {
        Killer->Damage += 1000;
    }
    Umnov::Umnov(string _name, int _HP, int _Damage) {};