//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#ifndef ROOM_H
#define ROOM_H
#include <vector>
#include "../Player.h"
#include "EngineBase/EngineBase.h"


class Room
{
public:
    explicit Room(std::shared_ptr<EngineBase> engineBase);
    void resetHit();
    void setEntryLocation(const std::pair<int,int>& entryLocation);
    void handleMovement();
protected:
    void createPlayer();
    bool enterPressed_;
    int currentPlayerIndex_;
    int maxPlayers = 3;
    std::vector<std::shared_ptr<Player>> playerVector_;
    std::shared_ptr<EngineBase> engineBase_;
    std::pair<int,int> entryLocation_;
};



#endif //ROOM_H
