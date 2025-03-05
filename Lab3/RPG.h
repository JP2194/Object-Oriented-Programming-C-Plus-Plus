#ifndef RPG_H
#define RPG_H
#include <string>
using namespace std;

const int skill_size = 2;

class RPG
{
    public:
        //----Constructors----
        RPG();
        RPG(string name, int health, int strength, int defense, string type);

        //----Accessor Functions----
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;
        bool isAlive() const;

        //---Mutator Functions----
        void setSkills();
        void printAction(string, RPG);
        void updateHealth(int);
        void attack(RPG*);
        void useSkill(RPG*);

    private:
        string name;
        int health;
        int strength;
        int defense;
        string type;
        string skills[skill_size];
};

#endif