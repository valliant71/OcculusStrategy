#ifndef _PLAYERBOT_STRATEGY_OCULUS_H
#define _PLAYERBOT_STRATEGY_OCULUS_H

#include "Strategy.h"

class PlayerbotAI;

class Strategy_Oculus : public Strategy
{
public:
    Strategy_Oculus(PlayerbotAI* ai) : Strategy(ai) {}
    string getName() override { return "oculus"; }
    
    void InitTriggers(std::list<TriggerNode*> &triggers) override;
};

#endif