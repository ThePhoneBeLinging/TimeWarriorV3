//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#include "TimeWarriorV3.h"
#include "EngineBase/EngineBase.h"
#include <iostream>

#include "Objects/Player.h"


void update(double deltaTime)
{

}

int main()
{
    // TODO SETUP SOMETHING
    EngineBase::init();
    EngineBase::getGraphicsLibrary()->loadTexture("../../Resources/Player/Ghost4Right.png");
    Player player = Player();
    EngineBase::registerUpdateFunction(&update);
    EngineBase::getGraphicsLibrary()->startWindow();
}


