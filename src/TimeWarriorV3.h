//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#ifndef TIMEWARRIORV3_H
#define TIMEWARRIORV3_H
#include <memory>

#include "EngineBase/EngineBase.h"


class TimeWarriorV3
{
public:
    static void init();
private:
    static inline std::shared_ptr<EngineBase> engineBase_;
};



#endif //TIMEWARRIORV3_H
