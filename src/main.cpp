//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//
#include "TimeWarriorV3.h"
#include "EngineBase/EngineBase.h"

int main()
{
    // TODO SETUP SOMETHING
    EngineBase::init();
    TimeWarriorV3::init();

    EngineBase::getGraphicsLibrary()->startWindow();
}
