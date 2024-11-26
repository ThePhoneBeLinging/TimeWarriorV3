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
    RoomController();

private:
    std::vector<std::shared_ptr<Room>> rooms_;
};



#endif //ROOMCONTROLLER_H
