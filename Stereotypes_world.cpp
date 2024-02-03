#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "Wizards.h"
#include "Monsters.h"
/*class Spell_book
{
    public:

};

class attack_spells: public Spell_book
{
    public:
    void Throw_tapock(Monsters *Abstract_monster, Student_wizard *Abstract_wizard)
        {
            Abstract_monster->HP -= Abstract_wizard->Damage;
        }
    void Hit_tapock(Monsters *Abstract_monster, Student_wizard *Abstract_wizard)
    {
        Abstract_monster->HP -= 0.5*Abstract_wizard->Damage;
    }
};
class health_spells: public Spell_book
{
    public:
    void Eat_Mezim(Student_wizard *Abstract_wizard)
    {
        Abstract_wizard->HP = Abstract_wizard->full_HP;
    }     
    void Drink_Energos(Student_wizard *Abstract_wizard)
    {
        Abstract_wizard->mana += Abstract_wizard->full_mana;
    } 
};*/
void fight(Student_wizard *Abstract_Student, Monsters *Abstract_Monster)
    {
        while (Abstract_Student->HP >0 && Abstract_Monster->HP>0)
        {
            Abstract_Student->Throw_tapock(Abstract_Monster);
            Abstract_Monster->Attack(Abstract_Student);
                if (Abstract_Student->HP<=0)
                {
                    cout<<Abstract_Student->name<<": You died"<<endl;
                    break;
                }
                if (Abstract_Student->HP <= Abstract_Monster->Damage)
                {
                    Abstract_Student->Eat_Mezim();
                }
            Abstract_Student->Hit_tapock(Abstract_Monster);
            Abstract_Monster->Attack(Abstract_Student);
                if (Abstract_Student->HP<=0)
                {
                    cout<<Abstract_Student->name<<": You died"<<endl;
                    break;
                }
                if (Abstract_Student->HP <= Abstract_Monster->Damage)
                {
                    Abstract_Student->Eat_Mezim();
                }
        }
    }
void boss_fight(Student_wizard *Abstract_Student, Boss *Abstract_Boss)
{
    while (Abstract_Student->HP >0 && Abstract_Boss->HP>0)
        {
            Abstract_Student->Throw_tapock(Abstract_Boss);
            Abstract_Boss->Attack(Abstract_Student);
                if (Abstract_Boss->HP<=0 && Abstract_Student->HP<=0)
                {
                    cout<<Abstract_Student->name<<": You died"<<endl;
                    break;
                }
                if (Abstract_Boss->HP<=0)
                {
                    Abstract_Boss->Loot(Abstract_Student);
                    break;
                }
                if (Abstract_Student->HP<=0)
                {
                    cout<<Abstract_Student->name<<": You died"<<endl;
                    break;
                }
                if (Abstract_Student->HP <= Abstract_Boss->Damage)
                {
                    Abstract_Student->Eat_Mezim();
                }
                if (Abstract_Student->HP>0)
                {
                    cout<<Abstract_Student->name<<": You won the boss"<<endl;
                    break;
                }                      
            Abstract_Student->Hit_tapock(Abstract_Boss);
            Abstract_Boss->Attack(Abstract_Student);
                if (Abstract_Boss->HP<=0 && Abstract_Student->HP<=0)
                {
                    cout<<Abstract_Student->name<<": You died"<<endl;
                    break;
                }
                if (Abstract_Boss->HP<=0)
                {
                    Abstract_Boss->Loot(Abstract_Student);
                    break;
                }
                if (Abstract_Student->HP<=0)
                {
                    cout<<Abstract_Student->name<<": You died"<<endl;
                    break;
                }
                if (Abstract_Student->HP <= Abstract_Boss->Damage)
                {
                    Abstract_Student->Drink_Energos();
                }
                if (Abstract_Student->HP>0)
                {
                    cout<<Abstract_Student->name<<": You won the boss"<<endl;
                    break;
                }
        }
}

Student_wizard* duel(Student_wizard *Abstract_Student1, Student_wizard *Abstract_Student2)
{
    while (Abstract_Student1->HP >0 && Abstract_Student2->HP >0)
    {
        Abstract_Student1->Mad_Death();
        Abstract_Student2->Mad_Explosion();
        if (Abstract_Student1->HP<=0)
            {
                cout<<Abstract_Student1->name<<":"<<"You lost"<<endl;
                return(Abstract_Student2);
            }
        if (Abstract_Student2->HP<=0)
            {
                cout<<Abstract_Student2->name<<":"<<"You lost"<<endl;
                return(Abstract_Student1);
            }
    }
    return(Abstract_Student1);
}
void printer(Student_wizard *Abstract_Student2)
{
   cout<<Abstract_Student2->name<<": You won the boss"<<endl;
}
void LVL1(Student_wizard *Abstract_Student1, Student_wizard *Abstract_Student2, Student_wizard *Abstract_Student3, 
Monsters *Abstract_Monster1, Monsters *Abstract_Monster2, Monsters *Abstract_Monster3, Boss *Abstract_Boss)
{
    cout<<"______________LVL 1_________________"<<endl;
    fight(Abstract_Student3, Abstract_Monster1);
    fight(Abstract_Student2, Abstract_Monster2);
    fight(Abstract_Student2, Abstract_Monster3);
    boss_fight(Abstract_Student1, Abstract_Boss);
}
void LVL2(Student_wizard *Abstract_Student1, Student_wizard *Abstract_Student2, Student_wizard *Abstract_Student3, 
Monsters *Abstract_Monster1, Monsters *Abstract_Monster2, Boss *Abstract_Boss)
{
    cout<<"______________LVL 2_________________"<<endl;
    fight(Abstract_Student3, Abstract_Monster1);
    fight(Abstract_Student1, Abstract_Monster2);
    boss_fight(Abstract_Student2, Abstract_Boss);
    printer(Abstract_Student2);
}
void LVL3(Student_wizard *Abstract_Student1, Student_wizard *Abstract_Student2, Student_wizard *Abstract_Student3, Boss *Abstract_Boss)
{
    cout<<"______________LVL 3_________________"<<endl;
    duel(Abstract_Student3, Abstract_Student1);
    duel(duel(Abstract_Student3, Abstract_Student1), Abstract_Student2);
    boss_fight(duel(duel(Abstract_Student3, Abstract_Student1), Abstract_Student2), Abstract_Boss);
}
int main()
{
    /*char c;
    fstream Inout;
    Inout.open("Game.txt");
    c = '\n';
    Student_wizard* wizards = {};
    while(!Inout.eof())
    {
        if (c == '\n')
        {
            wizards()
            string parameter;
            c = Inout.get();
            while (c != ' ') {
                parameter += c;
                c = Inout.get();
            }

        }
    }*/
    Student_wizard Vitalic("Vitalik", 80, 40, 10);
    Student_wizard Egor ("Yegor", 100, 60, 5);
    Student_wizard Milana ("Milana", 50, 30, 3);
    Student_wizard wizards[] = {Vitalic, Egor, Milana};
    Monsters Tarakan1("Tarakan 1", 5, 1);
    Monsters Tarakan2("Tarakan 2", 10, 2);
    Monsters Tarakan3("Tarakan 3", 15, 3);
    Monsters Armyane_of_sofa ("Sofa Armenians", 30, 3);
    Monsters Judes ("Jewish robots", 30, 3);
    Guardess Anuta ("Annett", 40, 5);
    Munya Munya ("Munya", 60, 20);
    Umnov Umnov ("Mr. Umnov", 100, 40);
    Monsters monsters[] = {Tarakan1, Tarakan2, Tarakan3, Armyane_of_sofa, Judes};
    Boss* bosses[] = {&Anuta, &Munya, &Umnov};
    LVL1(&Vitalic, &Egor, &Milana, &Tarakan1, &Tarakan2, &Tarakan3, &Anuta);
    LVL2(&Vitalic, &Egor, &Milana, &Armyane_of_sofa, &Judes, &Munya);
    LVL3(&Vitalic, &Egor, &Milana, &Umnov);
};
