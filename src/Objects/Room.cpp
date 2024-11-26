//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#include "Room.h"

#include <utility>

Room::Room(std::shared_ptr<EngineBase> engineBase) : engineBase_(std::move(engineBase))
{
    playerVector_.resize(5);
    currentPlayerIndex_ = 0;
    createPlayer();
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

void Room::createPlayer()
{
    playerVector_[currentPlayerIndex_] = std::make_shared<Player>();
    engineBase_->registerDrawAble(playerVector_[currentPlayerIndex_]->getDrawAble());
    playerVector_[currentPlayerIndex_]->getDrawAble()->setX(entryLocation_.first);
    playerVector_[currentPlayerIndex_]->getDrawAble()->setY(entryLocation_.second);
}
