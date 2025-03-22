#include "RPG.h"
#include <string>
#include <iostream>

using namespace std;


void displayStats(RPG player1, RPG player2)
{
    printf("%s's health: %i\t", player1.getName().c_str(), player1.getHealth());
    printf("%s's health: %i\n\n", player2.getName().c_str(), player2.getHealth());

}


void displayEnd(RPG player1, RPG player2)
{
    if (player1.isAlive() == 1)
    {
        printf("%s defeated %s! Good Game!\n", player1.getName().c_str(), player2.getName().c_str());
    }   
    else
    {
        printf("%s defeated %s! Good Game!\n", player2.getName().c_str(), player1.getName().c_str());
    }
}

void gameLoop(RPG* player1, RPG *player2)
{
    while (((*player1).isAlive() && (*player2).isAlive()) == 1)
    {
        displayStats(*player1, *player2);
        printf("%s's turn\n", (*player1).getName().c_str());
        (*player1).useSkill(player2);
        printf("---------------------\n");

        displayStats(*player1, *player2);
        printf("%s's turn\n", (*player2).getName().c_str());
        (*player2).useSkill(player1);
        printf("---------------------\n");
    }
}



int main()
{
    RPG p1 = RPG("Player", 100, 20, 20,"mage");
    RPG p2 = RPG();

    gameLoop(&p1,&p2);
    displayEnd(p1,p2);
    return 0;
}
