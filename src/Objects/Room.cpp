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
    playerVector_[0]->getDrawAble()->setX(entryLocation_.first);
    playerVector_[0]->getDrawAble()->setY(entryLocation_.second);
}

void Room::resetHit() const
{
    for (const auto& player : playerVector_)
    {
        if (player == nullptr)
        {
            continue;
        }
        player->resetPlayer();
    }
}

void Room::setEntryLocation(std::pair<int, int> entryLocation)
{
    entryLocation_ = entryLocation;
}
