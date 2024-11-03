//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <EngineBase/DrawAble.h>


class Player
{
public:
    Player();
    void move(double x, double y, double deltaTime) const;
private:
    std::shared_ptr<DrawAble> drawAble_;
};



#endif //PLAYER_H
