//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#ifndef TIMEWARRIORV3_H
#define TIMEWARRIORV3_H
#include <vector>

#include "Objects/Player.h"


class TimeWarriorV3
{
public:
    static void init();
    static void update(double deltaTime);
private:
    static void reset();
    static void handleKeyPresses(double deltaTime);
    static inline bool enterPressed_;
    static inline std::vector<std::shared_ptr<Player>> playerVector_;
    static inline int currentPlayerIndex_;
};



#endif //TIMEWARRIORV3_H
