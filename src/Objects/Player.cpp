//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#include "Player.h"

#include <memory>

#include "../Textures/TextureEnum.h"
#include "../Textures/ZValues.h"
#include "EngineBase/EngineBase.h"

Player::Player()
{
    drawAble_ = std::make_shared<DrawAble>();
    EngineBase::addDrawAble(drawAble_);
    drawAble_->setHeight(50);
    drawAble_->setWidth(50);
    drawAble_->setZ(PLAYER);
    drawAble_->setTextureIndex(PlayerDown);
}

void Player::move(double x, double y, const double deltaTime) const
{
    int movementSpeed = 500;
    x = x * movementSpeed * deltaTime;
    y = y * movementSpeed * deltaTime;
    drawAble_->setX(drawAble_->getX() + x);
    drawAble_->setY(drawAble_->getY() + y);
}
