//
// Created by Elias Aggergaard Larsen on 26/11/2024.
//

#include "Player.h"

Player::Player() : drawAble_(std::make_shared<DrawAble>())
{
    drawAble_->setHeight(50);
    drawAble_->setWidth(50);
}

void Player::resetPlayer()
{
    //TODO
}

std::shared_ptr<DrawAble> Player::getDrawAble()
{
    return drawAble_;
}

void Player::update(float deltaTime)
{
    //
}
