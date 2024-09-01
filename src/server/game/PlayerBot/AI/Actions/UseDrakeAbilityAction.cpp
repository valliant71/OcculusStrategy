#include "UseDrakeAbilityAction.h"
#include "PlayerbotAI.h"
#include "Player.h"

bool UseDrakeAbilityAction::Execute(Event event)
{
    Player* bot = ai->GetBot(); // 'ai' should now be recognized
    Unit* target = ai->GetCurrentTarget();

    if (!target)
        return false;

    uint32 mountedDrakeAura = bot->GetAura(SPELL_AURA_MOUNTED)->GetId();
    std::vector<uint32> drakeAbilities;

    // Determine which drake the bot is riding and set appropriate abilities
    switch (mountedDrakeAura)
    {
        case 49345: // Ruby Drake (DPS)
            drakeAbilities = {50232, 50240, 50248, 50253};
            break;
        case 49346: // Emerald Drake (Healer)
            drakeAbilities = {50328, 50341, 50344};
            break;
        case 49344: // Amber Drake (Tank)
            drakeAbilities = {49840, 49838, 49592};
            break;
        default:
            return false; // Not on a drake
    }

    // Randomly choose an ability
    uint32 abilityToUse = drakeAbilities[urand(0, drakeAbilities.size() - 1)];

    if (bot->HasSpell(abilityToUse) && !bot->HasSpellCooldown(abilityToUse))
    {
        bot->CastSpell(target, abilityToUse, false);
        return true;
    }

    return false;
}