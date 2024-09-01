#ifndef _PLAYERBOT_MOUNTDRAKENACTION_H
#define _PLAYERBOT_MOUNTDRAKENACTION_H

#include "Action.h"

class PlayerbotAI;

class MountDrakeAction : public Action 
{
public:
    MountDrakeAction(PlayerbotAI* ai) : Action(ai, "mount drake") {}
    bool Execute(Event event) override;

private:
    uint32 GetDrakeSpellId();
};

#endif