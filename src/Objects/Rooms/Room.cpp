//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#include "Room.h"

#include <iostream>
#include <utility>

Room::Room(std::shared_ptr<EngineBase> engineBase) : engineBase_(std::move(engineBase)), enterPressed_(false)
{
    playerVector_.resize(5);
    currentPlayerIndex_ = 0;
    createPlayer();
}

void Room::resetHit()
{
    for (const auto& player : playerVector_)
    {
        if (player == nullptr)
        {
            continue;
        }
        player->resetPlayer();
    }
    ++currentPlayerIndex_ %= maxPlayers;
    createPlayer();
}

void Room::setEntryLocation(const std::pair<int, int>& entryLocation)
{
    entryLocation_ = entryLocation;
}

void Room::handleMovement()
{
    if (engineBase_->getGraphicsLibrary()->isKeyDown(ENGINEBASE_KEY_W))
    {

    }

    if (engineBase_->getGraphicsLibrary()->isKeyDown(ENGINEBASE_KEY_S))
    {

    }

    if (engineBase_->getGraphicsLibrary()->isKeyDown(ENGINEBASE_KEY_D))
    {

    }

    if (engineBase_->getGraphicsLibrary()->isKeyDown(ENGINEBASE_KEY_A))
    {

    }
}

void Room::createPlayer()
{
    playerVector_[currentPlayerIndex_] = std::make_shared<Player>();
    engineBase_->registerDrawAble(playerVector_[currentPlayerIndex_]->getDrawAble());
    playerVector_[currentPlayerIndex_]->getDrawAble()->setX(entryLocation_.first);
    playerVector_[currentPlayerIndex_]->getDrawAble()->setY(entryLocation_.second);
}
