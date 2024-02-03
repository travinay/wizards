#ifndef MONSTERS_H
#define MONSTERS_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Student_wizard;
class Monsters
{
    public:
    string name;
    int HP;
    int Damage;
    void Attack(Student_wizard *Killer);
    Monsters (string _name, int _HP, int _Damage);
    Monsters() = default;
};
class Boss: public Monsters
{
    public:
    Boss() = default;
    Boss(string _name, int _HP, int _Damage);
    virtual void Loot(Student_wizard *Killer) = 0;
};
class Guardess: public Boss
{
    public:
    void Loot(Student_wizard *Killer);
    Guardess(string _name, int _HP, int _Damage);
};

class Munya: public Boss
{
    public:
    void Loot(Student_wizard *Killer);
    Munya(string _name, int _HP, int _Damage);
};
class Umnov: public Boss
{
    public:
    void Loot(Student_wizard *Killer);
    Umnov(string _name, int _HP, int _Damage);
};

#endif