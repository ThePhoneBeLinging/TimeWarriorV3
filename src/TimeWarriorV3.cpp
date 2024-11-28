//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#include "TimeWarriorV3.h"

#include <iostream>
#include <thread>

#include "Objects/Rooms/Room.h"

void TimeWarriorV3::init()
{
    engineBase_ = std::make_shared<EngineBase>();
    roomController_ = std::make_unique<RoomController>(engineBase_);
    engineBase_->registerUpdateFunction(update);
    engineBase_->launch();
}

void TimeWarriorV3::update(const double deltaTime)
{
    while (not engineBase_->getGraphicsLibrary()->toCloseWindow())
    {
        std::cout << deltaTime << std::endl;
        roomController_->update(deltaTime);
    }
}
