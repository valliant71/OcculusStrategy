#include "MountDrakeAction.h"
#include "PlayerbotAI.h"
#include "Player.h"

bool MountDrakeAction::Execute(Event event)
{
    uint32 drakeSpellId = GetDrakeSpellId();

    Player* bot = ai->GetBot();
    if (!bot->HasAura(drakeSpellId))
    {
        if (bot->HasAura(SPELL_AURA_MOUNTED))
            bot->RemoveAurasByType(SPELL_AURA_MOUNTED);

        bot->CastSpell(bot, drakeSpellId, true);
        return true;
    }

    return false;
}

uint32 MountDrakeAction::GetDrakeSpellId()
{
    Player* bot = ai->GetBot();
    
    // Drake spell IDs
    uint32 rubyDrakeSpellId = 49345;  // DPS
    uint32 emeraldDrakeSpellId = 49346;  // Healer
    uint32 amberDrakeSpellId = 49344;  // Tank

    // Check bot's role and assign appropriate drake
    if (bot->GetRoleForGroup() == ROLE_TANK)
        return amberDrakeSpellId;
    else if (bot->GetRoleForGroup() == ROLE_HEALER)
        return emeraldDrakeSpellId;
    else
        return rubyDrakeSpellId;  // Default to DPS drake
}