#ifndef _PLAYERBOT_USEDRAKEABILITYACTION_H
#define _PLAYERBOT_USEDRAKEABILITYACTION_H

#include "Action.h"

class PlayerbotAI;

class UseDrakeAbilityAction : public Action 
{
public:
    UseDrakeAbilityAction(PlayerbotAI* ai) : Action(ai, "use drake ability") {}
    bool Execute(Event event) override;
private:
    PlayerbotAI* ai; // Add this line
};

#endif