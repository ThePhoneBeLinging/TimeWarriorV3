//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#ifndef ROOMCONTROLLER_H
#define ROOMCONTROLLER_H
#include <vector>
#include "../Objects/Room.h"

class RoomController
{
public:
    explicit RoomController(std::shared_ptr<EngineBase> engineBase);

private:
    std::shared_ptr<EngineBase> engineBase_;
    std::vector<std::shared_ptr<Room>> rooms_;
};



#endif //ROOMCONTROLLER_H
