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
    std::thread thread(update);
    engineBase_->launch();
    thread.join();
}

void TimeWarriorV3::update()
{
    while (not engineBase_->getGraphicsLibrary()->toCloseWindow())
    {
        roomController_->update();
    }
}
