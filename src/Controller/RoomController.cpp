//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#include "RoomController.h"
#include "../Objects/Rooms/Room1.h"
RoomController::RoomController(std::shared_ptr<EngineBase> engineBase)
{
    engineBase_ = std::move(engineBase);
    rooms_.push_back(std::make_shared<Room1>(engineBase_));
}
