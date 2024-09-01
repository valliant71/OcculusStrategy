#include "Strategy_Oculus.h"
#include "PlayerbotAI.h"
#include "Action.h"
#include "MountDrakeAction.h"
#include "UseDrakeAbilityAction.h"

void Strategy_Oculus::InitTriggers(std::list<TriggerNode*> &triggers)
{
    triggers.push_back(new TriggerNode(
        "enter dungeon",
        NextAction::array(0, new NextAction("mount drake", 50.0f), NULL)));
    
    triggers.push_back(new TriggerNode(
        "no vehicle",
        NextAction::array(0, new NextAction("mount drake", 50.0f), NULL)));
    
    triggers.push_back(new TriggerNode(
        "ley guardian eregos",
        NextAction::array(0, new NextAction("use drake ability", 50.0f), NULL)));
    
    // Add more triggers as needed
}