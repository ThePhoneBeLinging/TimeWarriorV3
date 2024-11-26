//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#ifndef ROOM_H
#define ROOM_H
#include <vector>
#include "Player.h"
#include "EngineBase/EngineBase.h"


class Room
{
public:
    explicit Room(std::shared_ptr<EngineBase> engineBase);
private:
    int currentPlayerIndex;
    int maxPlayers = 3;
    std::vector<std::shared_ptr<Player>> playerVector_;
    std::shared_ptr<EngineBase> engineBase_;
};



#endif //ROOM_H