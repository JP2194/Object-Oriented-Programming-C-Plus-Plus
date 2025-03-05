#include "RPG.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    RPG NPC = RPG();
    RPG player = RPG("player", 200, 20, 20,"mage");
    
    printf("Name: %s, Health: %i, Strength: %i, Defense: %i", NPC.getName().c_str(), NPC.getHealth(), NPC.getStrength(), NPC.getDefense() );
    printf("\nName: %s, Health: %i, Strength: %i, Defense: %i", player.getName().c_str(), player.getHealth(), player.getStrength(), player.getDefense() );
    cout << "\n" << NPC.isAlive();
    cout << "\n" << player.isAlive();
}
