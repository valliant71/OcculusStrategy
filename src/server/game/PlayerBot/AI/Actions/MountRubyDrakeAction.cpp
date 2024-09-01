#include "MountRubyDrakeAction.h"
#include "PlayerbotAI.h"
#include "Player.h"

bool MountRubyDrakeAction::Execute(Event event)
{
    // Ruby Drake spell ID (adjust if necessary)
    uint32 rubyDrakeSpellId = 49345;

    Player* bot = ai->GetBot();
    if (!bot->HasAura(rubyDrakeSpellId))
    {
        if (bot->HasAura(SPELL_AURA_MOUNTED))
            bot->RemoveAurasByType(SPELL_AURA_MOUNTED);

        bot->CastSpell(bot, rubyDrakeSpellId, true);
        return true;
    }

    return false;
}