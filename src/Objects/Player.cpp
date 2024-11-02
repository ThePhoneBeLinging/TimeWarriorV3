//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#include "Player.h"

#include <memory>

#include "../Textures/ZValues.h"
#include "EngineBase/EngineBase.h"

Player::Player()
{
    drawAble_ = std::make_shared<DrawAble>();
    EngineBase::addDrawAble(drawAble_);
    drawAble_->setHeight(50);
    drawAble_->setWidth(50);
    drawAble_->setZ(PLAYER);
}
