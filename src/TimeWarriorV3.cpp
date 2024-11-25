//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#include "TimeWarriorV3.h"

#include <iostream>
#include <thread>


void TimeWarriorV3::init()
{
    auto drawAble = std::make_shared<DrawAble>();
    drawAble->setWidth(50);
    drawAble->setHeight(50);
    engineBase_ = std::make_shared<EngineBase>();
    engineBase_->registerDrawAble(drawAble);
    std::thread thread(update);
    engineBase_->launch();
    thread.join();
}

void TimeWarriorV3::update()
{
    while (not engineBase_->getGraphicsLibrary()->toCloseWindow())
    {
        std::cout << "Update loop" << std::endl;
    }
}
