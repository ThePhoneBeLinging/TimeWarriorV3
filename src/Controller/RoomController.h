//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#ifndef ROOMCONTROLLER_H
#define ROOMCONTROLLER_H
#include <vector>
#include "../Objects/Rooms/Room.h"

class RoomController
{
public:
    explicit RoomController(std::shared_ptr<EngineBase> engineBase);
    void resetHit() const;
    void update() const;

private:
    void setActiveRoom(int firstIndex, int secondIndex);
    int firstActiveIndex_;
    int secondActiveIndex_;
    std::shared_ptr<EngineBase> engineBase_;
    std::vector<std::vector<std::shared_ptr<Room>>> rooms_;
};



#endif //ROOMCONTROLLER_H
