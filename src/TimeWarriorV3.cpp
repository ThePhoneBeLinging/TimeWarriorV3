//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#include "TimeWarriorV3.h"
#include "EngineBase/EngineBase.h"
#include <iostream>
#include <memory>

#include "Objects/Player.h"
#include "Textures/TextureController.h"


void TimeWarriorV3::init()
{
    TextureController::initTextures();
    playerVector_.resize(5);
    currentPlayerIndex_ = 0;
    playerVector_[0] = std::make_shared<Player>();
    EngineBase::registerUpdateFunction(update);
}

void TimeWarriorV3::reset()
{
    playerVector_[currentPlayerIndex_] = std::make_shared<Player>();
    std::cout<< "RESET HIT" << std::endl;
}

void TimeWarriorV3::handleKeyPresses()
{
    if (not enterPressed_ && EngineBase::getGraphicsLibrary()->isKeyPressed(ENGINEBASE_KEY_ENTER))
    {
        enterPressed_ = true;
        reset();
    }
    else if (enterPressed_ && EngineBase::getGraphicsLibrary()->isKeyReleased(ENGINEBASE_KEY_ENTER))
    {
        enterPressed_ = false;
    }
}

void TimeWarriorV3::update(double deltaTime)
{
    handleKeyPresses();
}
