//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#include "Room1.h"

#include <utility>

Room1::Room1(std::shared_ptr<EngineBase> engineBase) : Room(std::move(engineBase))
{
}
