//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#include "Room.h"

#include <utility>

Room::Room(std::shared_ptr<EngineBase> engineBase) : engineBase_(std::move(engineBase))
{
    playerVector_.resize(5);
    currentPlayerIndex = 0;
    playerVector_[0] = std::make_shared<Player>();
    engineBase_->registerDrawAble(playerVector_[currentPlayerIndex]->getDrawAble());
}
