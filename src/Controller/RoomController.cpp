//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#include "RoomController.h"
#include "../Objects/Rooms/Room1.h"
RoomController::RoomController(std::shared_ptr<EngineBase> engineBase) : engineBase_(std::move(engineBase)), firstActiveIndex_(0), secondActiveIndex_(0)
{
    // Remember to set ActiveRoom depending on the layout of the game.
    setActiveRoom(0,0);
    rooms_.push_back(std::make_shared<Room1>(engineBase_));
}

void RoomController::setActiveRoom(const int firstIndex, const int secondIndex)
{
    firstActiveIndex_ = firstIndex;
    secondActiveIndex_ = secondIndex;
}