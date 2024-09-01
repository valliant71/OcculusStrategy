#ifndef _PLAYERBOT_STRATEGY_OCULUS_H
#define _PLAYERBOT_STRATEGY_OCULUS_H

#include "Strategy.h"
#include <string> // Add this line

class PlayerbotAI;

class Strategy_Oculus : public Strategy
{
public:
    Strategy_Oculus(PlayerbotAI* ai) : Strategy(ai) {}
    std::string getName() override { return "oculus"; } // Change 'string' to 'std::string'
    
    void InitTriggers(std::list<TriggerNode*> &triggers) override;
};

#endif