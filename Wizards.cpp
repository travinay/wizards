#include "Wizards.h"
#include "Monsters.h"
#include <string>    
    void Student_wizard::Throw_tapock(Monsters *Abstract_monster)
    {
            Abstract_monster->HP -= Damage;
    }
    void Student_wizard::Hit_tapock(Monsters *Abstract_monster)
    {
        Abstract_monster->HP -= 0.5*Damage;
    }
    void Student_wizard::Mad_Explosion()
    {
        HP -= Damage*3;
    }
    void Student_wizard::Mad_Death()
    {
        HP -= Damage*5;
    }   
    void Student_wizard::Eat_Mezim()
    {
        HP = full_HP;
    }     
    void Student_wizard::Drink_Energos()
    {
        mana += full_mana;
    } 

    void Student_wizard::print()//функция вывода
    {
            cout<< "Name: "<< name << "\tHP: " << HP << "\tMana: " << mana << endl;
    }
    Student_wizard::Student_wizard (string _name, unsigned int _HP, unsigned int _mana, unsigned int _Damage)
    {
        name = _name;
        full_HP = _HP;
        HP = _HP;
        full_mana = _mana;
        mana = _mana;
        Damage = _Damage;
    };