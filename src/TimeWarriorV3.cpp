//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#include "TimeWarriorV3.h"


void TimeWarriorV3::init()
{
    engineBase_ = std::make_shared<EngineBase>();
    engineBase_->launch();
}